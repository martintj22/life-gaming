class life_progress {
	name = "life_progress";
	idd = 38200;
	fadein=0;
	duration = 99999999999;
	fadeout=0;
	movingEnable = 0;
	onLoad="uiNamespace setVariable ['life_progress',_this select 0]";
	objects[]={};

	class controlsBackground {
		class background: Life_RscText {
			idc = -1;
			colorBackground[] = {0,0,0,0.7};
			x = 0.258687 * safezoneW + safezoneX;
			y = 0.7915 * safezoneH + safezoneY;
			w = 0.4785 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class ProgressBar: Life_RscProgress {
			idc = 38201;
			colorBackground[] = {0.718,0.016,0.016,1};
			x = 0.26075 * safezoneW + safezoneX;
			y = 0.797 * safezoneH + safezoneY;
			w = 0.474375 * safezoneW;
			h = 0.011 * safezoneH;
		};

		class ProgressText: Life_RscText {
			idc = 38202;
			text = "Servicing Chopper (50%)...";
			x = 0.26075 * safezoneW + safezoneX;
			y = 0.7695 * safezoneH + safezoneY;
			w = 0.290812 * safezoneW;
			h = 0.01925 * safezoneH;
		};
	};
};



//Credits to Ciaran for original creation of the script
class life_nlrtimer
{
    name = "life_nlrtimer";
    idd = 38300;
    fadeIn = 1;
    duration = 99999999999;
    fadeout = 1;
    movingEnable = 0;
    onLoad = "uiNamespace setVariable['life_nlrtimer',_this select 0]";
    objects[] = {};
	class controlsBackground
	{
		class TimerIcon : life_RscPicture
		{
			idc = -1;
			text = "\a3\ui_f\data\IGUI\RscTitles\MPProgress\timer_ca.paa";
			x = 0.00499997 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.04;
			h = 0.045;
		};

		class TimerText : life_RscText
		{
			colorBackground[] = {0,0,0,0};
			idc = 38301;
			text = "";
			x = 0.0204688 * safezoneW + safezoneX;
			y = 0.2778 * safezoneH + safezoneY;
			w = 0.09125 * safezoneW;
			h = 0.055 * safezoneH;
		};
	};
};
