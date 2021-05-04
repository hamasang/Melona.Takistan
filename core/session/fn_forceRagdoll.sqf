if (!isNull objectParent player) exitWith {};
private "_tazered";
_tazered = "CSW_M26C" createVehicleLocal [0,0,0];
_tazered setMass 1e10;
_tazered attachTo [player, [0,0,0], "Spine3"];
_tazered setVelocity [0,0,6];
detach _tazered;
0 = _tazered spawn {
	deleteVehicle _this;
};
