class Life_atm_management {
	idd = 2700;
	name= "life_atm_menu";
	movingEnable = 0;
	enableSimulation = 1;

	class controlsBackground {

		class ATM_Menu: Life_RscPicture {
			text = "textures\GUI\bankMenu.paa";
			idc = -1;
			x = 0.299937 * safezoneW + safezoneX;
			y = 0.16175 * safezoneH + safezoneY;
			w = 0.400125 * safezoneW;
			h = 0.6875 * safezoneH;
		};

		class Title : life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = "";
			x = 0.1;
			y = 0.2;
			w = 0.8;
			h = (1 / 25);
		};
	};

	class controls {

		class CashTitle : Life_RscStructuredText {
			idc = 2701;
			text = "";
			x = 0.378312 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.099 * safezoneW;
			h = 0.066 * safezoneH;
		};

		class WithdrawButton : Life_RscButtonInvisible {
			idc = -1;
			text = "";
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "[] call life_fnc_bankWithdraw";
			x = 0.328812 * safezoneW + safezoneX;
			y = 0.54125 * safezoneH + safezoneY;
			w = 0.160875 * safezoneW;
			h = 0.03025 * safezoneH;
		};

		class DepositButton : life_RscButtonInvisible {
			idc = -1;
			text = "";
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "[] call life_fnc_bankDeposit";
			x = 0.328812 * safezoneW + safezoneX;
			y = 0.4835 * safezoneH + safezoneY;
			w = 0.160875 * safezoneW;
			h = 0.03025 * safezoneH;
		};

		class moneyEdit : Life_RscEdit {
			idc = 2702;
			text = "";
			x = 0.520625 * safezoneW + safezoneX;
			y = 0.40375 * safezoneH + safezoneY;
			w = 0.0969375 * safezoneW;
			h = 0.0165 * safezoneH;
		};

		class PlayerList : Life_RscCombo {
			idc = 2703;
			x = 0.520625 * safezoneW + safezoneX;
			y = 0.44225 * safezoneH + safezoneY;
			w = 0.099 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class TransferButton : life_RscButtonInvisible {
			idc = -1;
			text = "";
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "[] call life_fnc_bankTransfer";
			x = 0.328812 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.160875 * safezoneW;
			h = 0.03025 * safezoneH;
		};
		
		class DepositAll : life_RscButtonInvisible {
			idc = -1;
			text = "";
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "[] call life_fnc_bankDepositAll";
			x = 0.514437 * safezoneW + safezoneX;
			y = 0.54125 * safezoneH + safezoneY;
			w = 0.160875 * safezoneW;
			h = 0.03025 * safezoneH;
		};
		
		class Close : life_RscButtonInvisible {
			idc = -1;
			text = "";
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "closeDialog 0;";
			x = 0.512375 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.160875 * safezoneW;
			h = 0.03025 * safezoneH;
		};
	};
};
