class Life_TR8_Banking {
	idd = 20055;
	name= "Life_TR8_Banking";
	movingEnable = 0;
	enableSimulation = 1;
	
	class controlsBackground {
		class MainBackground: Life_RscPicture {
            colorBackground[] = {0, 0, 0, 0.6};
            idc = -1;
            text = "textures\GUI\cashMenu.paa";
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.309375 * safezoneW;
			h = 0.583 * safezoneH;
        };
	};
	
	class controls {
		
		class moneyEdit : Life_RscEdit 
		{
			idc = 2018;
			
			text = "1";
			sizeEx = 0.030;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class moneyDrop1 : Life_RscButtonMenu
		{
			idc = 2001;
			colorBackground[] = {0.718,0.016,0.016,1};
			onButtonClick = "[] call life_fnc_giveMoney";
			text = "Give Money";
			sizeEx = 0.025;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class NearPlayers : Life_RscCombo 
		{
			idc = 2100;
		
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class TR8_CloseButton: Life_RscButtonMenu
		{
			idc = -1;
			colorBackground[] = {0.718,0.016,0.016,1};
			text = "Close";
			onButtonClick = "closeDialog 0; createDialog ""playerSettings"";";
			x = 0.5 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class TR8_BankIcon: Life_RscPicture
		{
			idc = -1;
			text = "icons\ico_bank.paa";
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class TR8_CashIcon: Life_RscPicture
		{
			idc = -1;
			text = "icons\ico_money.paa";
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class TR8_BankInfo: Life_RscText
		{
			idc = 1001;
			text = "285,914,723"; 
			x = 0.469062 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.044 * safezoneH;
		};

		class TR8_WalletInfo: Life_RscText
		{
			idc = 1002;
			text = "10,000"; 
			x = 0.469062 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.044 * safezoneH;
		};
	};
};