/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

if (hasInterface) then {
    [] execVM "briefing.sqf"; //Load Briefing
};
[] execVM "KRON_Strings.sqf";
[] execVM "scripts\Status_Bar\init_statusBar.sqf"
[] execVM "scripts\safezone.sqf"; // in kavalla wird ned gschossn

StartProgress = true;
