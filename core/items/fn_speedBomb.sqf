#include "..\..\script_macros.hpp"
/*
        File: fn_speedBomb.sqf
        Author: Fuzz
        
        Description:
        Attaches a speed bomb to a vehicle.
    */
    private["_unit""_ui","_title","_progressBar","_cP","_titleText"];
    _unit = cursorTarget;
    
    life_action_inUse = true;
     
    //Setup the progress bar
    disableSerialization;

    _title = localize "STR_ISTR_Speed_Bomb";
    "progressBar" cutRsc ["life_progress","PLAIN"];
    _ui = uiNamespace getVariable "life_progress";
    _progressBar = _ui displayCtrl 38201;
    _titleText = _ui displayCtrl 38202;
    _titleText ctrlSetText format ["%2 (1%1)...","%",_title];
    _progressBar progressSetPosition 0.01;
    _cP = 0.01;

    for "_i" from 0 to 1 step 0 do {
        if (animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
            [player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
            player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
            player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
        };
        uiSleep 0.26;
        if (isNull _ui) then {
            "progressBar" cutRsc ["life_progress","PLAIN"];
            _ui = uiNamespace getVariable "life_progress";
            _progressBar = _ui displayCtrl 38201;
            _titleText = _ui displayCtrl 38202;
        };
        _cP = _cP + 0.01;
        _progressBar progressSetPosition _cP;
        _titleText ctrlSetText format ["%3 (%1%2)...",round(_cP * 100),"%",_title];
        if (_cP >= 1 || !alive player) exitWith {};
        if (life_interrupted) exitWith {};
    };

    //Kill the UI display and check for various states
    "progressBar" cutText ["","PLAIN"];
    player playActionNow "stop";
    if (!alive player) exitWith {life_action_inUse = false;};
    if (life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};

    //if(!license_civ_rebel) exitWith {hint "You need Rebel Training to use it."}; // OPTIONAL - If you want license to plant the bomb.
    if((!(_unit isKindOf "LandVehicle"))&&(!(_unit getVariable ["restrained",false]))) exitWith {hint "You cannot add a speed bomb unit to this."};
    if(player distance _unit > 7) exitWith {hint "You need to be within 7 feet!"};
    if(!([false,"speedbomb",1] call life_fnc_handleInv)) exitWith {};
     
    life_action_inUse = false;
    if(player distance _unit > 7) exitWith {titleText["You are not in range!","PLAIN"];};
     
    titleText["You have attached an armed speed bomb to this vehicle.","PLAIN"];
    life_experience = life_experience + 25;
     
    [_unit] spawn
    {
        _veh = _this select 0;
        waitUntil {(speed _veh) > 70}; // 70 - Speed for activate the bomb. You can change if you want ;)
        [[_veh, "caralarm",10],"life_fnc_playSound",true,false] spawn BIS_fnc_MP;
        hint "A speed bomb you planted on a vehicle has just become active!";
        { [[2,"A speed bomb has been activated on this vehicle and will detonate when your speed drops below 50km/h!"],"life_fnc_broadcast",_x,false] spawn BIS_fnc_MP; } foreach (crew _veh);
        waitUntil {(speed _veh) < 50}; // 50 - Speed that the bomb will explode. You change it what you want. Don't forget to change the text above too.
        serv_killed = [player,"1090"];
        publicVariableServer "serv_killed";
        _test = "Bo_Mk82" createVehicle [0,0,9999];
        _test setPos (getPos _veh);
        _test setVelocity [100,0,0];
        hint "A speed bomb you planted on a vehicle has DETONATED!";
    };