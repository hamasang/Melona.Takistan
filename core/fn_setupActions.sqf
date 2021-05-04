/*
	File: fn_setupActions.sqf
	
	Description:
	Master addAction file handler for all client-based actions.
*/
switch (playerSide) do
{
	case civilian:
	{
		//Drop fishing net
		life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
		(surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
		//Rob person
		life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && animationState cursorTarget == "Incapacitated" && !(cursorTarget getVariable["robbed",FALSE]) ']];
		life_actions = life_actions + [player addAction["Apply Blindfold",life_fnc_blindfold,cursorTarget,9999999,false,false,"",' cursorTarget getVariable ["restrained",false] && !(cursorTarget getVariable ["blindfolded",false]) && life_inv_blindfold > 0 && cursorTarget isKindOf "Man" && (isPlayer cursorTarget) && alive cursorTarget && cursorTarget distance player < 5 && speed cursorTarget < 1 ']];		
		life_actions = life_actions + [player addAction["Remove Blindfold",life_fnc_blindfoldRemove,cursorTarget,9999999,false,false,"",' cursorTarget getVariable ["blindfolded",false] && cursorTarget isKindOf "Man" && (isPlayer cursorTarget) && alive cursorTarget && cursorTarget distance player < 5 && speed cursorTarget < 1 ']];
		life_actions = life_actions + [player addAction["Remove Own Blindfold",life_fnc_blindfoldRemove,player,9999999,false,false,"",' player getVariable ["blindfolded",false] && !(player getVariable ["restrained",false]) && alive player ']];
		//pack wall
		life_actions = life_actions + [player addAction["<t color='#FF0000'>Cancel Wall</t>",life_fnc_packupmauer,"",0,false,false,"",' _mauer = nearestObjects[getPos player,["Land_CncWall1_F"],8] select 0; !isNil "_mauer" && !isNil {(_mauer getVariable "item")}']];
		//pack barrier
		life_actions = life_actions + [player addAction["<t color='#FF0000'>Cancel barrier</t>",life_fnc_packupbarrier,"",0,false,false,"",' _barrier = nearestObjects[getPos player,["RoadBarrier_long"],8] select 0; !isNil "_barrier" && !isNil {(_barrier getVariable "item")}']];
		//pack bunker
		life_actions = life_actions + [player addAction["<t color='#FF0000'>Cancel bunker</t>",life_fnc_packupbunker,"",0,false,false,"",' _bunker = nearestObjects[getPos player,["Land_BagBunker_Small_F"],8] select 0; !isNil "_bunker" && !isNil {(_bunker getVariable "item")}']];
		// take them organs
		life_actions = life_actions + [player addAction["Harvest Organs",life_fnc_takeOrgans,"",0,false,false,"",'!isNull cursorTarget && cursorTarget isKindOf "Man" && (isPlayer cursorTarget) && alive cursorTarget && cursorTarget distance player < 3.5 && !(cursorTarget getVariable ["missingOrgan",FALSE]) && !(player getVariable "Escorting") && !(player getVariable "hasOrgan") && !(player getVariable "transporting") && animationState cursorTarget == "Incapacitated"']];
		//ziptie
		life_actions = life_actions + [player addAction["Tie person",life_fnc_tieingAction,cursorTarget,9999999,false,false,"",' 
		!isNull cursorTarget && !(player getVariable "tied") && !(player getVariable "restrained") && cursorTarget isKindOf "Man" && (isPlayer cursorTarget) && alive cursorTarget && cursorTarget distance player < 3.5 && !(cursorTarget getVariable "Escorting") && !(cursorTarget getVariable "restrained") && !(cursorTarget getVariable "tied") && speed cursorTarget < 1 ']];
		//untie
		life_actions = life_actions + [player addAction["Untie",life_fnc_untie,cursorTarget,0,false,false,"",' 
		!isNull cursorTarget && !(player getVariable "tied") && !(player getVariable "restrained") && cursorTarget isKindOf "Man" && (isPlayer cursorTarget) && animationState cursorTarget == "AmovPercMstpSnonWnonDnon_Ease" && player distance cursorTarget < 3.5 && (cursorTarget getVariable "tied") && !(cursorTarget getVariable "Escorting") ']];
        life_actions = life_actions + [player addAction["<t color='#FF0000'>폭발조끼 활성화</t>",life_fnc_suicideBomb,"",0,false,false,"",' vest player == "A3L_SuicideVest" && alive player && playerSide == civilian && !life_istazed && !(player getVariable "restrained") && !(player getVariable "Escorting") && !(player getVariable "transporting")']];
		life_actions pushBack (player addAction["<t color = '#D660D6'>Put on Seatbelt</t>",life_fnc_seatbelt,"",7,false,false,"",' !life_seatbelt && vehicle player != player ']);
		life_actions pushBack (player addAction["<t color = '#D660D6'>Remove Seatbelt</t>",life_fnc_seatbelt,"",7,false,false,"",' life_seatbelt && vehicle player != player ']);
	};
	case west:
	{
		//Drop fishing net
		life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
		(surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
		//pack wall
		life_actions = life_actions + [player addAction["<t color='#FF0000'>Cancel Wall</t>",life_fnc_packupmauer,"",0,false,false,"",' _mauer = nearestObjects[getPos player,["Land_CncWall1_F"],8] select 0; !isNil "_mauer" && !isNil {(_mauer getVariable "item")}']];
		//pack barrier
		life_actions = life_actions + [player addAction["<t color='#FF0000'>Cancel barrier</t>",life_fnc_packupbarrier,"",0,false,false,"",' _barrier = nearestObjects[getPos player,["RoadBarrier_long"],8] select 0; !isNil "_barrier" && !isNil {(_barrier getVariable "item")}']];
		//pack bunker
		life_actions = life_actions + [player addAction["<t color='#FF0000'>Cancel bunker</t>",life_fnc_packupbunker,"",0,false,false,"",' _bunker = nearestObjects[getPos player,["Land_BagBunker_Small_F"],8] select 0; !isNil "_bunker" && !isNil {(_bunker getVariable "item")}']];
		// take them organs
		life_actions = life_actions + [player addAction["Harvest Organs",life_fnc_takeOrgans,"",0,false,false,"",'!isNull cursorTarget && cursorTarget isKindOf "Man" && (isPlayer cursorTarget) && alive cursorTarget && cursorTarget distance player < 3.5 && !(cursorTarget getVariable ["missingOrgan",FALSE]) && !(player getVariable "Escorting") && !(player getVariable "hasOrgan") && !(player getVariable "transporting") && animationState cursorTarget == "Incapacitated"']];
		life_actions pushBack (player addAction["<t color = '#D660D6'>Put on Seatbelt</t>",life_fnc_seatbelt,"",7,false,false,"",' !life_seatbelt && vehicle player != player ']);
		life_actions pushBack (player addAction["<t color = '#D660D6'>Remove Seatbelt</t>",life_fnc_seatbelt,"",7,false,false,"",' life_seatbelt && vehicle player != player ']);
	};
};