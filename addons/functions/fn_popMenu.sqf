
disableSerialization;

private["_module"];
params[ 
    ["_module",objNull]
];

missionNamespace setVariable ["SOR_POP_MODULE",_module];
createDialog "DEST_MENU_POP";


true