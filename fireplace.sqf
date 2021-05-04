/*
file: fireplace.sqf
by DaVidoSS
adds ability to create fireplace
parameters none
return VOID
usage:
//initPlayerLocal.sqf
[] execVM "fireplace.sqf";
player addEventHandler ["Respawn", {
	deleteVehicle ((_this select 1) getVariable ['mycampfire',objNull]);
	[] execVM "fireplace.sqf";
}];

*/
if !(hasInterface) exitWith {};
player addAction [
	"<t>모닥불 피우기</t><img size='1' image='\a3\ui_f\data\IGUI\Cfg\Actions\Obsolete\ui_action_fire_in_flame_ca'/>",
	{
		params [["_target",objNull,[objNull]],["_unit",objNull,[objNull]]];
		(AGLToASL (_unit modelToWorldVisual [0,1.5,0])) params ["_vx","_vy","_vz"];
		if !(isNull (objectParent _unit)) exitWith {hint "Really? While driving?"};
		if (surfaceIsWater (position _unit)) exitWith {hint "Oh come on, you cant be that stupid!"}; 
		if !(isTouchingGround _unit) exitWith {hint "Ok, but hit the ground first!"};
		if !(count (lineIntersectsObjs [(AGLToASL (_unit modelToWorldVisual [0,1.5,0])), [_vx,_vy,(_vz + 20)]]) == 0) exitWith {hint "Open your eyes, you wanna burn something?"};
		
		_unit playMove "AinvPknlMstpSnonWnonDnon_medicUp3";
		sleep 7;
		private _campFire = createVehicle ["FirePlace_burning_F", (_unit modelToWorldVisual [0,1.5,0]), [], 0, "CAN_COLLIDE"];
		_unit setVariable ["mycampfire",_campFire,false];
		0 = [_campFire,
			[
				"<t>모닥불 끄기</t><img size='1' image='\a3\ui_f\data\IGUI\Cfg\Actions\Obsolete\ui_action_fire_put_down_ca'/>",
				{
					params [["_target",objNull,[objNull]],["_unit",objNull,[objNull]]];
					_unit playMove "AinvPknlMstpSnonWnonDnon_medicUp3";
					sleep 7;
					deleteVehicle _target;
				},nil,0,true,true,"","true",3,false,"",""
			]
		] remoteExec ["addAction", [0,-2] select isDedicated,_campFire];	
	},nil,0,false,true,"",
	"isNull (_this getVariable ['mycampfire',objNull]) && {((animationState _this) in ['amovpsitmstpsnonwpstdnon_ground','amovpsitmstpslowwrfldnon','amovpsitmstpsnonwnondnon_ground'])}",
	-1, false, "", ""];