#include "player_sys.sqf"

class playerSettings {

	idd = playersys_DIALOG;
	movingEnable = 1;
	enableSimulation = 1;
	
	class controlsBackground {
		
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
	
	class ButtonClose : Life_RscButtonInvisible {
			idc = -1;
			//shortcuts[] = {0x00050000 + 2};
			text = "";
			onButtonClick = "closeDialog 0;";
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.055 * safezoneH;
		};
		
		class ButtonSettings : Life_RscButtonInvisible {
			idc = -1;
			text = "";
			onButtonClick = "[] call life_fnc_settingsMenu;";
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0464062 * safezoneW;
			h = 0.077 * safezoneH;
		};
		
		class ButtonMyGang : Life_RscButtonInvisible {
			idc = 2011;
			text = "";
			onButtonClick = "if (isNil ""life_action_gangInUse"") then {if (isNil {(group player) getVariable ""gang_owner""}) then {createDialog ""Life_Create_Gang_Diag"";} else {[] spawn life_fnc_gangMenu;};};";
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		
		class ButtonGangList : Life_RscButtonInvisible {
			idc = 2012;
			text = "";
			onButtonClick = "[] call life_fnc_wantedMenu;";
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class ButtonLicences : Life_RscButtonInvisible {
			idc = 1602;
			onButtonClick = "[] call life_fnc_openLicensesMenu;";
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
	
		class ButtonKeys : Life_RscButtonInvisible {
			idc = 2013;
			text = "";
			onButtonClick = "createDialog ""Life_key_management"";";
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		
		class ButtonCell : Life_RscButtonInvisible {
			idc = 2014;
			onButtonClick = "createDialog ""Life_cell_phone"";";
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		
		class ButtonAdminMenu : Life_RscButtonInvisible {
			idc = 2021;
			onButtonClick = "createDialog ""life_admin_menu"";";
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		
		class ButtonSyncData : Life_RscButtonInvisible {
			idc = -1;
			//shortcuts[] = {0x00050000 + 2};
			text = "";
			onButtonClick = "[] call SOCK_fnc_syncData;";
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class ButtonBanking : Life_RscButtonInvisible {
			idc = -1;
			//shortcuts[] = {0x00050000 + 2};
			text = "";
			onButtonClick = "[] call life_fnc_openBankMenu;";
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};

		class ButtonPlayerMenu : Life_RscButtonInvisible {
			idc = -1;
			onButtonClick = "[]call life_fnc_openInvMenu;";
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		
		class ButtonDynMarket : Life_RscButtonInvisible {
			idc = 3025;
			onButtonClick = "createDialog ""TTM_GUI_RscDisplayTalentOverview"";";
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0464062 * safezoneW;
			h = 0.077 * safezoneH;
		};
	
		class Life_RscPicturex_1203xx: Life_RscPicture
		{
			idc = -1;
			text = "textures\GUI\selectionBox.paa";
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Life_RscPicture_120xx0: Life_RscPicture
		{
			idc = -1;
			text = "textures\GUI\selectionBox.paa";
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Life_RscPicture_1xx201: Life_RscPicture
		{
			idc = -1;
			text = "textures\GUI\selectionBox.paa";
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Life_RscPicture_120xx2: Life_RscPicture
		{
			idc = -1;
			text = "textures\GUI\selectionBox.paa";
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Life_RscPicture_xxx1204: Life_RscPicture
		{
			idc = -1;
			text = "textures\GUI\selectionBox.paa";
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Life_RscPicture_xxx1205: Life_RscPicture
		{
			idc = -1;
			text = "textures\GUI\selectionBox.paa";
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Life_RscPicture_1xxx206: Life_RscPicture
		{
			idc = -1;
			text = "textures\GUI\selectionBox.paa";
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Life_RscPicture_1207: Life_RscPicture
		{
			idc = -1;
			text = "textures\GUI\selectionBox.paa";
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Life_RscPicture_1208: Life_RscPicture
		{
			idc = -1;
			text = "textures\GUI\selectionBox.paa";
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Life_RscPicture_x1208: Life_RscPicture
		{
			idc = -1;
			text = "icons\ico_inventory.paa";
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Life_RscPicture_1209: Life_RscPicture
		{
			idc = -1;
			text = "icons\ico_banking.paa";
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Life_RscPicture_1210: Life_RscPicture
		{
			idc = -1;
			text = "icons\ico_message.paa";
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Life_RscPicture_1211: Life_RscPicture
		{
			idc = -1;
			text = "icons\ico_gang.paa";
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Life_RscPicture_1212: Life_RscPicture
		{
			idc = -1;
			text = "icons\ico_license.paa";
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Life_RscPicture_1213: Life_RscPicture
		{
			idc = -1;
			text = "icons\ico_keys.paa";
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Life_RscPicture_1214: Life_RscPicture
		{
			idc = -1;
			text = "icons\ico_sync.paa";
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Life_RscPicture_1215: Life_RscPicture
		{
			idc = -1;
			text = "textures\GUI\selectionBox.paa";
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class Life_RscPicture_1217: Life_RscPicture
		{
			idc = -1;
			text = "icons\ico_close.paa";
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class Life_RscPicture_1221: Life_RscPicture
		{
			idc = -1;
			text = "textures\GUI\selectionBox.paa";
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Life_RscPicture_1220: Life_RscPicture
		{
			idc = -1;
			text = "textures\GUI\selectionBox.paa";
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Life_RscPicture_1222: Life_RscPicture
		{
			idc = -1;
			text = "icons\ico_settings.paa";
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Life_RscPicture_1216: Life_RscPicture
		{
			idc = -1;
			text = "icons\ico_zeus.paa";
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Life_RscPicture_1223: Life_RscPicture
		{
			idc = -1;
			text = "icons\ico_market.paa";
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.077 * safezoneH;
		};
	};
};