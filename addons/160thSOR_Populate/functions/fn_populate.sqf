/*
    centre pos, array of build types, faction from config, radius, count per house, house % (*10), player unit
*/
private["_pos","_type","_faction","_rad","_count","_freq","_player"];
params[
    ["_pos",[0,0,0]],
    ["_type",["house"]],
    ["_faction","none"],
    ["_rad",50],
    ["_count",3],
    ["_freq",7],
    ["_player",objNull]
];

_cfgUnits = getArray (configFile >> "SOR_PopulateUnits" >> _faction >> "units");
_cfgName = getText (configFile >> "SOR_PopulateUnits" >> _faction >> "name");
_cfgSide = switch ((_cfgName select [0,1])) do {case "B":{west}; case "O":{east}; case "I":{independent}; case "C":{civilian};};
_build = nearestObjects [_pos,_type,_rad];

{
    if ((count ([_x] call bis_fnc_buildingPositions)) < 1) then {
        _build deleteAt (_build find _x);
    };
} foreach _build;

if (count _build > 5) then {
    _buildN = [];
    {
        _r = (floor random 10) + 1;
        if (_r <= _freq) then {
            _buildN pushback _x;
        };
    } foreach _build;
    _build = _buildN;
    _buildN = nil;
};

_units = [];

{
    _grp = creategroup [_cfgSide, true];
    _points = [_x] call bis_fnc_buildingPositions;
    for "_y" from 1 to _count do {
        _point = selectrandom _points;
        if (!isNil "_point") then {
            _points deleteAt (_points find _point);
            if (is3DEN) then {
                _unit = _grp create3DENEntity ["Object",(selectRandom _cfgUnits),_point];
                _unit set3DENAttribute ["Init","this disableAi 'PATH'"];
                _dir = [0,0,(random 360)];
                _unit set3DENAttribute ["Rotation",_dir];
            } else {
                _unit = _grp createUnit [(selectRandom _cfgUnits),_point,[],0,"NONE"];
                _unit disableAi "PATH";
                _unit setDir (random 360);
                _units pushback _unit;
            };
        };
    };
    sleep 0.2;
} foreach _build;

if (!(_player isEqualTo objNull)) then {
    (getAssignedCuratorLogic _player) addCuratorEditableObjects [_units,false];
    _strN = format ["%1 units created",(count _units)];
    ["TaskSucceeded",["",_strN]] remoteexec ["bis_fnc_showNotification", _player];
};