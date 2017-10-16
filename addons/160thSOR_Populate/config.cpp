class CfgPatches
{
    class 160_Populate
    {
        author = "destruktoid";
        units[] = {"DEST_moduleBasePop","DEST_modulePopulate"};
        requiredVersion = 1.0;
        requiredAddons[] = {"A3_Modules_F","A3_Modules_F_Curator","160th_SOR_Loadouts"};
    };
};

#include "config_units.hpp"
#include "defines.hpp"
#include "dialogs.hpp"


class CfgFunctions
{
    class DEST
    {
        tag = "DEST";
        class pop
        {
            file = "160_Populate\functions";
            class popLoad {};
            class populate {};
            class popMenu {};
            class popConfirm {};
            class popEstimate {};
        };
    };
};

class CfgVehicles
{
    class Logic;
    class Module_F: Logic
    {
        class ArgumentsBaseUnits
		{
			class Units;
		};
		class ModuleDescription
		{
			class EmptyDetector;
		};
    };
    
    class DEST_moduleBasePop: Module_F
    {
        displayName = "";
        scope = 1;
        scopeCurator = 1;
        vehicleClass = "Modules";
        category = "NO_CATEGORY";
        function = "DEST_fnc_fake";
        functionPriority = 1;
        isGlobal = 2;
        isDisposable = 0;
    };
    
    class DEST_modulePopulate: DEST_moduleBasePop
    {
        displayName = "Building Populator";
        scopeCurator = 2;
        function = "DEST_fnc_popMenu";
    };
};