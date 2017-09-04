class Life_cell_phone {
	idd = 3000;
	name= "life_cell_phone";
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "[] spawn life_fnc_cellphone";
	
	class controlsBackground {
		class RscTitleBackground: Life_RscText {
            colorBackground[] = {0.922,0.576,0.078,1};
            idc = -1;
            x = 0.242187 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.268125 * safezoneW;
			h = 0.022 * safezoneH;
        };
	};
	
	class controls {

		
		class MainBackground: Life_RscText {
            colorBackground[] = {0,0,0,0.7};
            idc = -1;
            x = 0.242187 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.268125 * safezoneW;
			h = 0.198 * safezoneH;
        };
		
		class textEdit : Life_RscEdit {
		
			idc = 3003;
			
			text = "";
			sizeEx = 0.040;
			x = 0.247344 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.121 * safezoneH;
		};
		
		class TextMsgButton : Life_RscButtonMenu 
		{
			idc = 3015;
			text = "Send";
			colorBackground[] = {0.922,0.576,0.078,1};
			onButtonClick = "[] call TON_fnc_cell_textmsg";
			
			x = 0.247344 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class PlayerList : Life_RscCombo 
		{
			idc = 3004;
			
			x = 0.247344 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class TextCopButton : Life_RscButtonMenu  
		{
			idc = 3016;
			text = "Text Cops";
			colorBackground[] = {0.922,0.576,0.078,1};
			onButtonClick = "[] call TON_fnc_cell_textcop";
			
			x = 0.422657 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class AdminMsgAllButton : Life_RscButtonMenu  
		{
			idc = 3021;
			text = "Admin MSG All";
			colorBackground[] = {0.922,0.576,0.078,1};
			onButtonClick = "[] call TON_fnc_cell_adminmsgall";
			
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class EMSRequest : Life_RscButtonMenu 
		{
			idc = 3022;
			text = "Text EMS";
			colorBackground[] = {0.922,0.576,0.078,1};
			onButtonClick = "[] call TON_fnc_cell_emsrequest";
			
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class CloseButtonKey : Life_RscButtonMenu {
			idc = -1;
			text = "CLOSE";
			onButtonClick = "closeDialog 0;";
			x = 0.45875 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};