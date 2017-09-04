class Life_TR8_Licences {
	idd = 20058;
	name= "Life_TR8_Licences";
	movingEnable = 0;
	enableSimulation = 1;
	
	class controlsBackground {
		class MainBackground: Life_RscText {
            colorBackground[] = {0, 0, 0, 0.6};
            idc = -1;
            x = 0.423687 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.152625 * safezoneW;
			h = 0.29425 * safezoneH;
        };
		
		class Bar: Life_RscText {
            colorBackground[] = {0.718,0.016,0.016,1};
            idc = -1;
            x = 0.423687 * safezoneW + safezoneX;
			y = 0.32125 * safezoneH + safezoneY;
			w = 0.152625 * safezoneW;
			h = 0.022 * safezoneH;
        };
	};
	
	class controls {

		
		class Title : Life_RscText {
			colorBackground[] = {0, 0, 0, 0};
			idc = 3001;
			text = "Licenses";
			x = 0.431937 * safezoneW + safezoneX;
			y = 0.32125 * safezoneH + safezoneY;
			w = 0.070125 * safezoneW;
			h = 0.022 * safezoneH;
			
		};
		
		class TR8_Licence_List: Life_RscStructuredText
		{
			idc = 1500;
			background[] = {0,0,0,0};
			x = 0.431937 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.136125 * safezoneW;
			h = 0.2695 * safezoneH;
		};
		class TR8_Close: Life_RscButtonMenu
		{
			idc = -1;
			text = "Close";
			x = 0.522687 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.053625 * safezoneW;
			h = 0.02475 * safezoneH;
			action = "closeDialog 0; createDialog 'playerSettings'";
		};
	};
};