
disableSerialization;

_display = findDisplay 63100;
_module = missionNamespace getVariable "SOR_POP_MODULE";
_type = ["house"];

_freqCombo = _display displayCtrl 2110;
_radEdit = _display displayCtrl 1410;
_countEdit = _display displayCtrl 1411;

_pos = getposatl _module;

_selFreq = parseNumber (_freqCombo lbdata (lbCurSel _freqCombo));
_selRadius = parseNumber ctrlText _radEdit;
_selCount = parseNumber ctrlText _countEdit;

_build = nearestObjects [_pos,_type,_selRadius];

_est = ((count _build) * (_selFreq / 10)) * _selCount;

_estText = _display displayCtrl 1017;

_estText ctrlSetText str(_est);