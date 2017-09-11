private["_display"];
params["_display"];

_factionList = _display displayCtrl 1510;
_freqCombo = _display displayCtrl 2110;
_radEdit = _display displayCtrl 1410;
_countEdit = _display displayCtrl 1411;

{
    _text = getText (configFile >> "SOR_PopulateUnits" >> _x >> "name");
    _index = _factionList lbAdd _text;

    _data = getArray (configFile >> "SOR_PopulateUnits" >> _x >> "units");
    _factionList lbSetData [_index,_x];
} foreach ((configFile >> "SOR_PopulateUnits") call bis_fnc_getCfgSubClasses);

for "_i" from 1 to 10 do {
    _index = _freqCombo lbAdd (format ["%1%2",(_i * 10),"%"]);
    _freqCombo lbSetData [_index,str(_i)];
};