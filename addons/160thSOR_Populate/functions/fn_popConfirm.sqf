
disableSerialization;

_display = findDisplay 63100;
_module = missionNamespace getVariable "SOR_POP_MODULE";

_factionList = _display displayCtrl 1510;
_freqCombo = _display displayCtrl 2110;
_radEdit = _display displayCtrl 1410;
_countEdit = _display displayCtrl 1411;

_pos = getposatl _module;

_selFaction = _factionList lbdata (lbCurSel _factionList);
_selFreq = parseNumber (_freqCombo lbdata (lbCurSel _freqCombo));
_selRadius = parseNumber ctrlText _radEdit;
_selCount = parseNumber ctrlText _countEdit;


if (_selRadius == 0 || _selCount == 0) exitwith {
    systemchat "Radius or count not set";
};


[_pos,["house"],_selFaction,_selRadius,_selCount,_selFreq,player] remoteExec ["DEST_fnc_populate",2];

if (is3DEN) then {
    delete3DENEntities [_module];
} else {
    deleteVehicle _module;
};
closeDialog 63100;

missionNamespace setVariable ["SOR_POP_MODULE",nil];