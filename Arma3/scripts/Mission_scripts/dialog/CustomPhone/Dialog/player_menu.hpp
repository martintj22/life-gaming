class playerMenu {

	idd = 20057;
	movingEnable = 1;
	enableSimulation = 1;
	
	class controlsBackground {
		
		class RscPicture_1200: Life_RscPicture
		{
			idc = -1;
			text = "textures\GUI\backpackMenu.paa";
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.309375 * safezoneW;
			h = 0.583 * safezoneH;
		};
	};

	class controls {
		
		class TR8_use: Life_RscButtonMenu
		{
			idc = 1600;
			onButtonClick = "[] call life_fnc_useItem;";
			colorBackground[] = {0.718,0.016,0.016,1};
			text = "Use";
			x = 0.5 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class TR8_remove: Life_RscButtonMenu
		{
			idc = 1601;
			onButtonClick = "[] call life_fnc_removeItem;";
			colorBackground[] = {0.718,0.016,0.016,1};
			text = "Drop";
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class TR8_give: Life_RscButtonMenu
		{
			idc = 1602;
			onButtonClick = "[] call life_fnc_giveItem;";
			colorBackground[] = {0.718,0.016,0.016,1};
			text = "Give";
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class TR8_Close: Life_RscButtonMenu
		{
			idc = 1604;
			text = "Close";
			colorBackground[] = {0.718,0.016,0.016,1};
			x = 0.5 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			action = "closeDialog 0;";
		};
		class TR8_nearPlayers: Life_RscCombo
		{
			idc = 2100;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class TR8_items: Life_RscListbox
		{
			idc = 1500;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.275 * safezoneH;
		};
		class TR8_quantity: Life_RscEdit
		{
			idc = 3004;
			text = "1";
			sizeEx = 0.030;
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};