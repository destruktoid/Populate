
disableSerialization;

private["_module","_input","_zero"];

_zero = param[0,nil];

if (is3DEN && (!(_zero isEqualTo "init"))) exitwith {};
switch (typename _zero) do {
    case "STRING": {
        _input = param [1,[]];
        _module = _input param [0,objNull];
    };
    case "OBJECT": {_module = _zero};
    default {systemchat "you dun broke it"};
};
/*
if (is3DEN) then {
    _mode = param[0,""];
    _input = param [1,[]];
    _module = _input param [0,objNull];
} else {
    _module = param[0,objNull];
};
*/

if (!(local _module) && !(is3DEN)) exitwith {};
if (is3DEN && (_module isEqualTo objNull)) exitwith {};

missionNamespace setVariable ["SOR_POP_MODULE",_module];
createDialog "DEST_MENU_POP";


true