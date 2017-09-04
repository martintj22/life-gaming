class life_weapon_shop {
    idd = 38400;
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class RscTitleBackground: Life_RscText {
            colorBackground[] = {0.922,0.576,0.078,1};
            idc = -1;
            x = 0.118437 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.022 * safezoneH;
        };

        class MainBackground: Life_RscText {
            colorBackground[] = {0,0,0,0.7};
            idc = -1;
            x = 0.118437 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.374 * safezoneH;
        };

        class itemInfo: Life_RscStructuredText {
            idc = 38404;
            text = "";
            sizeEx = 0.035;
            x = 0.329844 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.077 * safezoneH;
        };

        class FilterList: Life_RscCombo {
            idc = 38402;
            onLBSelChanged = "_this call life_fnc_weaponShopFilter";
            x = 0.123594 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.022 * safezoneH;
        };
    };

    class controls {
        class itemList: Life_RscListBox {
            idc = 38403;
            onLBSelChanged = "_this call life_fnc_weaponShopSelection";
            sizeEx = 0.035;
            x = -0.4125;
			y = 0.12;
			w = 0.475;
			h = 0.54;
        };

        class ButtonBuySell: Life_RscButtonMenu {
            idc = 38405;
			colorBackground[] = {0.922,0.576,0.078,1};
            text = "$STR_Global_Buy";
            onButtonClick = "[] spawn life_fnc_weaponShopBuySell; true";
            x = 0.324687 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.033 * safezoneH;
        };

        class ButtonClose: Life_RscButtonMenu {
            idc = -1;
			colorBackground[] = {0.922,0.576,0.078,1};
            text = "$STR_Global_Close";
            onButtonClick = "closeDialog 0;";
            x = 0.324687 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.033 * safezoneH;
        };

        class ButtonMags: Life_RscButtonMenu {
            idc = 38406;
			colorBackground[] = {0.922,0.576,0.078,1};
            text = "$STR_Global_Mags";
            onButtonClick = "_this call life_fnc_weaponShopMags; _this call life_fnc_weaponShopFilter";
            x = 0.324687 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.033 * safezoneH;
        };

        class ButtonAccs: Life_RscButtonMenu {
            idc = 38407;
			colorBackground[] = {0.922,0.576,0.078,1};
            text = "$STR_Global_Accs";
            onButtonClick = "_this call life_fnc_weaponShopAccs; _this call life_fnc_weaponShopFilter";
            x = 0.324687 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.033 * safezoneH;
        };
    };
};