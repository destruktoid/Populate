class DEST_MENU_POP
{
    idd = 63100;
    movingEnable = false;
    enableSimulation = true;
    onLoad = "_this call DEST_fnc_popLoad";
    
    class controls
    {
        class DEST_MENU_FRAME_POP: RscFrame
        {
            idc = 1810;
            colorBorder[] = {1,1,1,1};

            x = 0.396874 * safezoneW + safezoneX;
            y = 0.247 * safezoneH + safezoneY;
            w = 0.201094 * safezoneW;
            h = 0.396 * safezoneH;
        };
        class DEST_MENU_BOX_POP: Box
        {
            idc = 1811;

            x = 0.396874 * safezoneW + safezoneX;
            y = 0.247 * safezoneH + safezoneY;
            w = 0.201094 * safezoneW;
            h = 0.396 * safezoneH;
            colorBackground[] = {0,0,0,0.9};
        };
        class DEST_MENU_BUTTON_POP_CON: RscButton
        {
            idc = 1610;
            action = "[] spawn DEST_fnc_popConfirm;";
            text = "Confirm Selection";
            x = 0.438125 * safezoneW + safezoneX;
            y = 0.621 * safezoneH + safezoneY;
            w = 0.12375 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class DEST_MENU_TEXT_POP_TOP: RscText
        {
            idc = 1011;

            text = "Building Populator";
            x = 0.463906 * safezoneW + safezoneX;
            y = 0.247 * safezoneH + safezoneY;
            w = 0.0670311 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class DEST_MENU_TEXT_POP_FAC: RscText
        {
            idc = 1012;

            text = "Faction";
            x = 0.432969 * safezoneW + safezoneX;
            y = 0.28 * safezoneH + safezoneY;
            w = 0.0360937 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class DEST_MENU_TEXT_POP_RAD: RscText
        {
            idc = 1013;

            text = "Radius";
            x = 0.5 * safezoneW + safezoneX;
            y = 0.313 * safezoneH + safezoneY;
            w = 0.0309375 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class DEST_MENU_TEXT_POP_FREQ: RscText
        {
            idc = 1014;

            text = "Frequency";
            x = 0.5 * safezoneW + safezoneX;
            y = 0.346 * safezoneH + safezoneY;
            w = 0.04125 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class DEST_MENU_TEXT_POP_COUNT: RscText
        {
            idc = 1015;

            text = "Count";
            x = 0.5 * safezoneW + safezoneX;
            y = 0.379 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class DEST_MENU_LIST_POP_FAC: RscListbox
        {
            idc = 1510;
            x = 0.407187 * safezoneW + safezoneX;
            y = 0.313 * safezoneH + safezoneY;
            w = 0.0825 * safezoneW;
            h = 0.275 * safezoneH;
        };
        class DEST_MENU_COMBO_POP_FREQ: RscCombo
        {
            idc = 2110;
            x = 0.546406 * safezoneW + safezoneX;
            y = 0.346 * safezoneH + safezoneY;
            w = 0.04125 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class DEST_MENU_EDIT_POP_RAD: RscEdit
        {
            idc = 1410;
            x = 0.556719 * safezoneW + safezoneX;
            y = 0.313 * safezoneH + safezoneY;
            w = 0.0309375 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class DEST_MENU_EDIT_POP_COUNT: RscEdit
        {
            idc = 1411;
            x = 0.556719 * safezoneW + safezoneX;
            y = 0.379 * safezoneH + safezoneY;
            w = 0.0309375 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class DEST_MENU_BUTTON_POP_EST: RscButton
        {
            idc = 1611;
            text = "Estimate Count";
            action = "[] spawn DEST_fnc_popEstimate";
            x = 0.510312 * safezoneW + safezoneX;
            y = 0.511 * safezoneH + safezoneY;
            w = 0.0567187 * safezoneW;
            h = 0.022 * safezoneH;
        };
        class DEST_MENU_TEXT_POP_EST: RscText
        {
            idc = 1017;
            x = 0.530937 * safezoneW + safezoneX;
            y = 0.533 * safezoneH + safezoneY;
            w = 0.0154688 * safezoneW;
            h = 0.022 * safezoneH;
        };
    };
};
