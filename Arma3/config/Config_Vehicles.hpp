		class CarShops {
		/*
		*    ARRAY FORMAT:
		*        0: STRING (Classname)
		*        1: STRING (Condition)
		*    FORMAT:
		*        STRING (Conditions) - Must return boolean :
		*            String can contain any amount of conditions, aslong as the entire
		*            string returns a boolean. This allows you to check any levels, licenses etc,
		*            in any combination. For example:
		*                "call life_coplevel && license_civ_someLicense"
		*            This will also let you call any other function.
		*
		*   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
		*   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
		*   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
		*   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
		*/
		class civ_car {
		side = "civ";
		conditions = "";
		vehicles[] = {
		{ "A3L_PuntoRed ", "" },			
		{ "Jonzie_Mini_Cooper", "" },
		{ "A3L_Smartcar_Black", "" },
		{ "A3L_FordKaRed", "" },
		{ "shounka_a3_cliors_civ", "" },	
		{ "A3L_AMXRed", "" },
		{ "ivory_gti_1", "" },
		{ "Peugot_207_Black", "" },
		{ "A3L_Citreon_DS3_White", "" },
		{ "Ivory_190e_1", "" },
		{ "shounka_clk", "" },
		{ "A3L_Citreon_C4_Yellow", "" }
		};
		};

		class civ_medium {
		side = "civ";
		conditions = "";
		vehicles[] = {
		{ "IVORY_PRIUS_Animu ", "" },			
		{ "ivory_e36_2", "" },
		{ "A3L_Peugeot_308_RCZ_Black", "" },
		{ "A3L_Alfa_Romeo_Black", "" },
		{ "A3L_Tauruscarhorn", "" },	
		{ "ivory_isf", "" },
		{ "shounka_rs6_noir ", "" }
		};
		};

		class civ_sport {
		side = "civ";
		conditions = "";
		vehicles[] = {
		{ "A3L_RX7_Black ", "" },			
		{ "max_BMW_M3_GTR", "" },
		{ "A3L_Ford_Mustang_Black", "" },
		{ "Mrshounka_bmwm1_civ_grise", "" },
		{ "IVORY_R8SPYDER", "" },	
		{ "IVORY_R8", "" },
		{ "ivory_c", "" },
		{ "Mrshounka_a3_dodge15_civ_noir", "" }
		};
		};

		class civ_old {
		side = "civ";
		conditions = "";
		vehicles[] = {
		{ "Jonzie_Datsun_510 ", "" },			
		{ "Jonzie_Datsun_z432", "" },
		{ "Urbanized_427_black", "" },
		{ "Jonzie_30CSL", "" },
		{ "Jonzie_Corolla", "" },	
		{ "A3L_Lincoln_Red", "" },
		{ "Jonzie_XB", "" },
		{ "Quiet_1969charger_noir_f", "" },
		{ "Urbanized_67Mustang_black", "" },
		{ "UG_Hornet_C", "" }
		};
		};

		class civ_super {
		side = "civ";
		conditions = "";
		vehicles[] = {
		{ "shaunka_mp4 ", "" },			
		{ "shounka_porcshe911_noir", "" },
		{ "Nissan_GTR_White", "" },
		{ "Tal_Maserati_Black", "" },
		{ "ivory_supra_tuned", "" },	
		{ "ivory_elise_1", "" },
		{ "ivory_Ifa", "" },
		{ "Mrshounka_agera_p_noir", "" },
		{ "bv_caressa_gt_2tone", "" },
		{ "Mrshounka_pagani_c", "" },
		{ "A3L_Veyron__black", "" },
		{ "Urbanized_LP700_black", "" },
		{ "ivory_ip560", "" }
		};
		};

		class civ_off {
		side = "civ";
		conditions = "";
		vehicles[] = {
		{ "S_Rangover_Black  ", "" },			
		{ "shounka_h2_noir", "" },
		{ "A3L_Ford_Raptor_Pink", "" },
		{ "Mrshounka_hummer_civ_jaune", "" },
		{ "Mrshounka_Bowler_c_orange", "" },	
		{ "A3l_Touareg_Red", "" },
		{ "CC_JeepCerokee_Black", "" },
		{ "Urbanized_G65_black", "" },
		{ "Mrshounka_cayenne_p_rouge", "" },
		{ "shounka_avalanche_bleufonce", "" },
		{ "shounka_monsteur_noir", "" },
		};
		};







		class donator_car {
		side = "civ";
		conditions = "license_civ_donator";
		vehicles[] = {
		{ "B_Quadbike_01_F", "" },
		{ "C_Hatchback_01_F", "" },
		{ "C_Offroad_01_F", "" },
		{ "C_SUV_01_F", "" },
		{ "C_Hatchback_01_sport_F", "" },
		{ "C_Offroad_02_unarmed_F", "" }					//Apex DLC
		};
		};
		class kart_shop {
		side = "civ";
		conditions = "";
		vehicles[] = {
		{ "", "call life_coplevel >= 1" }
		};
		};

		class civ_truck {
		side = "civ";
		conditions = "";
		vehicles[] = {
		{ "C_Van_01_box_F", "" },
		{ "A3L_GMC_Van_Black", "" },
		{ "C_Truck_02_transport_F", "" },
		{ "Jonzie_Flat_Bed", "" },
		{ "Jonzie_Box_Truck", "" },
		{ "A3L_Dumptruck", "" },
		{ "A3L_Renault_Magnum_Black", "" }
		};
		};

		class civ_air {
		side = "civ";
		conditions = "";
		vehicles[] = {
		{ "C_Heli_Light_01_civil_F", "" },
		{ "B_Heli_Light_01_F", "" },
		{ "O_Heli_Light_02_unarmed_F", "" },
		{ "B_Heli_Transport_03_unarmed_F", "" },			
		{ "C_Plane_Civil_01_F", "" } //Apex DLC
		};
		};

		class civ_ship {
		side = "civ";
		conditions = "";
		vehicles[] = {
		{ "C_Rubberboat", "" },
		{ "C_Boat_Civil_01_F", "" },
		{ "B_SDV_01_F", "" },
		{ "C_Boat_Transport_02_F", "" }, //Apex DLC
		{ "C_Scooter_Transport_01_F", "" } //Apex DLC
		};
		};

		class reb_car {
		side = "civ";
		conditions = "";
		vehicles[] = {
		{ "B_Quadbike_01_F", "" },
		{ "B_G_Offroad_01_F", "" },
		{ "B_Heli_Light_01_stripped_F", "" }
		};
		};

		class advreb_car {
		side = "civ";
		conditions = "license_civ_advrebel";
		vehicles[] = {
		{ "B_LSV_01_armed_black_F", "" },
		{ "O_T_LSV_02_armed_F", "" },
		{ "O_T_MRAP_02_ghex_F", "" },
		{ "I_Heli_light_03_unarmed_F", "" },
		{ "B_T_VTOL_01_vehicle_F", "" }

		};
		};

		class med_shop {
		side = "med";
		conditions = "";
		vehicles[] = {
		{ "mercedes_sprinter_ambulancia_F", "" },
		{ "cnp_Iveco_GOIT", "" },
		{ "AM_Holden_EMS", "" },
		{ "ivory_evox_ems", "" },
		{ "A3L_Towtruck_orange", "" }
		};
		};

		class med_air_hs {
		side = "med";
		conditions = "";
		vehicles[] = {
		{ "EC635_ADAC", "" },
		{ "O_Heli_Light_02_unarmed_F", "" }
		};
		};

		class cop_car {
		side = "cop";
		conditions = "";
		vehicles[] = {
		{ "ivory_isf_marked", "call life_coplevel >= 0" },
		{ "ivory_wrx_marked", "call life_coplevel >= 1" },
		{ "tw_durango_marked", "call life_coplevel >= 4" },
		{ "ivory_m3_marked", "call life_coplevel >= 4" },
		{ "tw_vic_unmarked", "call life_coplevel >= 1" }
		};
		};

		class SCO19_car {
		side = "cop";
		conditions = "license_cop_sco19";
		vehicles[] = {
		{ "B_MRAP_01_F", "call life_coplevel >= 11" }
		};
		};
		class undercover_car {
		side = "cop";
		conditions = "license_cop_undercover";
		vehicles[] = {
		{ "C_Hatchback_01_sport_orange_F", "" },
		{ "SUV_01_base_red_F", "" },
		{ "C_Offroad_02_unarmed_blue_F", "" },
		{ "C_Offroad_01_red_F", "" }
		};
		};

		class cop_air {
		side = "cop";
		conditions = "call life_coplevel >= 3";
		vehicles[] = {
		{ "B_Heli_Light_01_F", "call life_coplevel >= 1" },
		{ "B_Heli_Transport_01_F", "call life_coplevel >= 5" }
		};
		};

		class cop_ship {
		side = "cop";
		conditions = "";
		vehicles[] = {
		{ "B_Boat_Transport_01_F", "call life_coplevel >= 90" }
		};
		};
		};

		class LifeCfgVehicles {
		/*
		*    Vehicle Configs (Contains textures and other stuff)
		*
		*    "price" is the price before any multipliers set in Master_Config are applied.
		*
		*    Default Multiplier Values & Calculations:
		*       Civilian [Purchase, Sell]: [1.0, 0.5]
		*       Cop [Purchase, Sell]: [0.5, 0.5]
		*       Medic [Purchase, Sell]: [0.75, 0.5]
		*       ChopShop: Payout = price * 0.25
		*       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
		*       Cop Impound: Payout = price * 0.1
		*       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
		*           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
		*
		*       1: STRING (Condition)
		*    Textures config follows { Texture Name, side, {texture(s)path}, Condition}
		*    Texture(s)path follows this format:
		*    INDEX 0: Texture Layer 0
		*    INDEX 1: Texture Layer 1
		*    INDEX 2: Texture Layer 2
		*    etc etc etc
		*
		*/

		/* 
		Begynder biler
		*/

		class Default {
		vItemSpace = -1;
		conditions = "";
		price = -1;
		textures[] = {};
		};

		/*Læge */

		class mercedes_sprinter_ambulancia_F  {
		vItemSpace = 100;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 800;
		textures[] = {};
		};


		class A3L_Towtruck_orange  {
		vItemSpace = 100;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 800;
		textures[] = {};
		};

		class cnp_Iveco_GOIT  {
		vItemSpace = 100;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 800;
		textures[] = {};
		};

		class AM_Holden_EMS  {
		vItemSpace = 100;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 800;
		textures[] = {

			{ "Holden", "Ems",{
			"textures\cg_ems.jpg"
		}, "" },

		};
		};


		/*Politi */

		class ivory_m3_marked  {
		vItemSpace = 100;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 2000;
		textures[] = {

		{ "Police", "cop",{
			"textures\st_patrol.jpg"
		}, "" },
		};
		};


		class ivory_evox_marked  {
		vItemSpace = 100;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 2000;
		textures[] = {

		{ "Police", "cop",{
			"textures\st_patrol.jpg"
		}, "" },
		};
		};



		class tw_durango_marked  {
		vItemSpace = 100;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 2000;
		textures[] = {

		{ "Police", "cop",{
			"textures\DurangoSP.jpg"
		}, "" },
		};
		};

		class ivory_wrx_marked  {
		vItemSpace = 100;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 2000;
		textures[] = {

		{ "Police", "cop",{
			"textures\st_patrol.jpg"
		}, "" },
		};
		};

		class ivory_isf_marked  {
		vItemSpace = 100;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 2000;
		textures[] = {

		{ "Police", "cop",{
			"textures\st_patrol.jpg"
		}, "" },
		};
		};

		/*Politi slut */

		class A3L_PuntoRed  {
		vItemSpace = 100;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 8000;
		textures[] = {};
		};

		class A3L_Smartcar_Black {
		vItemSpace = 80;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 8000;
		textures[] = {};
		};

		class Jonzie_Mini_Cooper {
		vItemSpace = 50;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 8000;
		textures[] = {};
		};

		class A3L_FordKaRed {
		vItemSpace = 100;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 30000;
		textures[] = {};
		};

		class shounka_a3_cliors_civ {
		vItemSpace = 100;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 50000;
		textures[] = {};
		};

		class A3L_AMXRed {
		vItemSpace = 110;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 70000;
		textures[] = {};
		};

		class ivory_gti_1 {
		vItemSpace = 115;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 100000;
		textures[] = {};
		};

		class Peugot_207_Black {
		vItemSpace = 115;
		conditions = "";
		price = 120000;
		textures[] = {};
		};

		class A3L_Citreon_DS3_White {
		vItemSpace = 120;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 150000;
		textures[] = {};
		};

		class Ivory_190e_1 {
		vItemSpace = 120;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 160000;
		textures[] = {};
		};

		class shounka_clk {
		vItemSpace = 150;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 200000;
		textures[] = {};
		};

		class A3L_Citreon_C4_Yellow {
		vItemSpace = 200;
		conditions = "";
		price = 350000;
		textures[] = {};
		};

		/* Medium cars */

		class IVORY_PRIUS_Animu {
		vItemSpace = 210;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 400000;
		textures[] = {};
		};

		class ivory_e36_2 {
		vItemSpace = 140;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 450000;
		textures[] = {};
		};

		class A3L_Peugeot_308_RCZ_Black {
		vItemSpace = 215;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 500000;
		textures[] = {};
		};

		class A3L_Alfa_Romeo_Black {
		vItemSpace = 230;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 750000;
		textures[] = {};
		};

		class A3L_Tauruscarhorn {
		vItemSpace = 230;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 850000;
		textures[] = {};
		};

		class ivory_isf {
		vItemSpace = 230;
		conditions = "";
		price = 900000;
		textures[] = {};
		};

		class shounka_rs6_noir  {
		vItemSpace = 300;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 1000000;
		textures[] = {};
		};

		/*Sport biler */

		class A3L_RX7_Black {
		vItemSpace = 50;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 1200000;
		textures[] = {};
		};

		class max_BMW_M3_GTR {
		vItemSpace = 100;
		conditions = "";
		price = 1400000;
		textures[] = {};
		};

		class A3L_Ford_Mustang_Black {
		vItemSpace = 150;
		conditions = "";
		price = 1500000;
		textures[] = {};
		};

		class Mrshounka_bmwm1_civ_grise {
		vItemSpace = 100;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 1600000;
		textures[] = {};
		};	

		class Ivory_wrx_1 { 
		vItemSpace = 100;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 1650000;
		textures[] = {};
		};

		class ivory_evox {
		vItemSpace = 100;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 1750000;
		textures[] = {};
		};

		class IVORY_R8SPYDER {
		vItemSpace = 100;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 1950000;
		textures[] = {};
		};

		class IVORY_R8 {
		vItemSpace = 100;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 2150000;
		textures[] = {};
		};

		class ivory_c {
		vItemSpace = 100;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 2280000;
		textures[] = {};
		};

		class Mrshounka_a3_dodge15_civ_noir {
		vItemSpace = 100;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 2500000;
		textures[] = {};
		};

		/*Gamle biler */ 

		class Jonzie_Datsun_510 {
		vItemSpace = 100;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 300000;
		textures[] = {};
		};

		class Jonzie_Datsun_z432 {
		vItemSpace = 100;
		conditions = "";
		price = 389000;
		textures[] = {};
		};

		class Urbanized_427_black {
		vItemSpace = 100;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 500000;
		textures[] = {};
		};

		class Jonzie_30CSL {
		vItemSpace = 100;
		conditions = "";
		price = 677000;
		textures[] = {};
		};	

		class Jonzie_Corolla {
		vItemSpace = 100;
		conditions = "";
		price = 720000;
		textures[] = {};
		};	

		class A3L_Lincoln_Red {
		vItemSpace = 100;
		conditions = "";
		price = 800000;
		textures[] = {};
		};	

		class Jonzie_XB {
		vItemSpace = 100;
		conditions = "";
		price = 1000000;
		textures[] = {};
		};	

		class Jonzie_Galant {
		vItemSpace = 100;
		conditions = "";
		price = 1200000;
		textures[] = {};
		};	

		class Quiet_1969charger_noir_f {
		vItemSpace = 100;
		conditions = "";
		price = 1400000;
		textures[] = {};
		};	

		class UG_Hornet_C {
		vItemSpace = 100;
		conditions = "";
		price = 1600000;
		textures[] = {};
		};	

		class Urbanized_67Mustang_black {
		vItemSpace = 100;
		conditions = "";
		price = 1900000;
		textures[] = {};
		};	

		/* Super biler */

		class shaunka_mp4 {
		vItemSpace = 100;
		conditions = "";
		price = 2100000;
		textures[] = {};
		};	

		class shounka_porcshe911_noir {
		vItemSpace = 100;
		conditions = "";
		price = 2300000;
		textures[] = {};
		};	

		class Nissan_GTR_White {
		vItemSpace = 100;
		conditions = "";
		price = 2450000;
		textures[] = {};
		};	

		class Tal_Maserati_Black {
		vItemSpace = 100;
		conditions = "";
		price = 2600000;
		textures[] = {};
		};	

		class ivory_supra_tuned {
		vItemSpace = 100;
		conditions = "";
		price = 2720000;
		textures[] = {};
		};	

		class ivory_elise_1 {
		vItemSpace = 100;
		conditions = "";
		price = 2800000;
		textures[] = {};
		};	

		class ivory_Ifa {
		vItemSpace = 100;
		conditions = "";
		price = 2900000;
		textures[] = {};
		};	

		class Mrshounka_agera_p_noir {
		vItemSpace = 100;
		conditions = "";
		price = 3250000;
		textures[] = {};
		};	

		class bv_caressa_gt_2tone {
		vItemSpace = 100;
		conditions = "";
		price = 3475000;
		textures[] = {};
		};	


		class Mrshounka_pagani_c {
		vItemSpace = 50;
		conditions = "";
		price = 3650000;
		textures[] = {};
		};	

		class A3L_Veyron__black {
		vItemSpace = 50;
		conditions = "";
		price = 5575000;
		textures[] = {};
		};	

		class ivory_ip560 {
		vItemSpace = 50;
		conditions = "";
		price = 4720000;
		textures[] = {};
		};	

		class Urbanized_LP700_black {
		vItemSpace = 50;
		conditions = "";
		price = 6250000;
		textures[] = {};
		};	

		/* OFF Road */

		class S_Rangover_Black  {
		vItemSpace = 150;
		conditions = "";
		price = 600000;
		textures[] = {};
		};	

		class shounka_h2_noir {
		vItemSpace = 300;
		conditions = "";
		price = 895000;
		textures[] = {};
		};

		class A3L_Ford_Raptor_Pink {
		vItemSpace = 100;
		conditions = "";
		price = 950000;
		textures[] = {};
		};	

		class Mrshounka_hummer_civ_jaune {
		vItemSpace = 500;
		conditions = "";
		price = 1200000;
		textures[] = {};
		};		

		class Mrshounka_Bowler_c_orange {
		vItemSpace = 350;
		conditions = "";
		price = 1420000;
		textures[] = {};
		};	

		class A3l_Touareg_Red {
		vItemSpace = 100;
		conditions = "";
		price = 1650000;
		textures[] = {};
		};	

		class CC_JeepCerokee_Black {
		vItemSpace = 150;
		conditions = "";
		price = 1780000;
		textures[] = {};
		};	

		class Urbanized_G65_black {
		vItemSpace = 250;
		conditions = "";
		price = 2000000;
		textures[] = {};
		};	

		class Mrshounka_cayenne_p_rouge {
		vItemSpace = 150;
		conditions = "";
		price = 2450000;
		textures[] = {};
		};	

		class shounka_avalanche_bleufonce {
		vItemSpace = 100;
		conditions = "";
		price = 750000;
		textures[] = {};
		};	

		class shounka_monsteur_noir {
		vItemSpace = 300;
		conditions = "";
		price = 4200000;
		textures[] = {};
		};	








		// Apex DLC
		class C_Boat_Transport_02_F {
		vItemSpace = 100;
		conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
		price = 22000;
		textures[] = {
		{ "Civilian", "civ", {
		"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa"
		}, "" },
		{ "Black", "cop", {
		"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa"
		}, "" }
		};
		};

		// Apex DLC
		class C_Offroad_02_unarmed_F {
		vItemSpace = 65;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 13500;
		textures[] = {
		{ "Black", "civ", {
		"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa"
		}, "" },
		{ "Blue", "civ", {
		"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa"
		}, "" },
		{ "Green", "civ", {
		"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa"
		}, "" },
		{ "Orange", "civ", {
		"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa"
		}, "" },
		{ "Red", "civ", {
		"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa"
		}, "" },
		{ "White", "civ", {
		"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa"
		}, "" },
		};
		};

		// Apex DLC
		class C_Plane_Civil_01_F {
		vItemSpace = 75;
		conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
		price = 250000;
		textures[] = {
		{ "Racing (Tan Interior)", "civ", {
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
		}, "" },
		{ "Racing", "civ", {
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
		}, "" },
		{ "Red Line (Tan Interior)", "civ", {
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
		}, "" },
		{ "Red Line", "civ", {
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
		}, "" },
		{ "Tribal (Tan Interior)", "civ", {
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
		}, "" },
		{ "Tribal", "civ", {
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
		}, "" },
		{ "Blue Wave (Tan Interior)", "civ", {
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
		}, "" },
		{ "Blue Wave", "civ", {
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
		}, "" }
		};
		};

		// Apex DLC
		class C_Scooter_Transport_01_F {
		vItemSpace = 30;
		conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
		price = 2500;
		textures[] = {
		{ "Black", "civ", {
		"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa",
		"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"
		}, "" },
		{ "Blue", "civ", {
		"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa",
		"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"
		}, "" },
		{ "Grey", "civ", {
		"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa",
		"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"
		}, "" },
		{ "Green", "civ", {
		"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa",
		"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"
		}, "" },
		{ "Red", "civ", {
		"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa",
		"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
		}, "" },
		{ "White", "civ", {
		"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa",
		"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
		}, "" },
		{ "Yellow", "civ", {
		"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa",
		"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"
		}, "" }
		};
		};

		// Apex DLC
		class O_T_LSV_02_unarmed_F {
		vItemSpace = 100;
		conditions = "";
		price = 100000;
		textures[] = {
		{ "Arid", "civ", {
		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
		}, "" },
		{ "Black", "civ", {
		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
		}, "" },
		{ "Green Hex", "civ", {
		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
		"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
		}, "" }
		};
		};

		/* Trucks */ 

		class C_Van_01_box_white_F {
		vItemSpace = 600;
		conditions = "";
		price = 950000;
		textures[] = {};
		};

		class A3L_GMC_Van_Black {
		vItemSpace = 800;
		conditions = "";
		price = 1500000;
		textures[] = {};
		};

		class C_Truck_02_transport_F {
		vItemSpace = 500;
		conditions = "";
		price = 2100000;
		textures[] = {};
		};

		class Jonzie_Flat_Bed {
		vItemSpace = 1200;
		conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
		price = 3250000;
		textures[] = { };
		};

		class Jonzie_Box_Truck {
		vItemSpace = 1600;
		conditions = "license_cop_cAir || {!(playerSide isEqualTo west)}";
		price = 5200000;
		textures[] = {};
		};

		class A3L_Dumptruck {
		vItemSpace = 1850;
		conditions = "";
		price = 5800000;
		textures[] = {
		{ "Black", "cop", {
		"#(argb,8,8,3)color(0.05,0.05,0.05,1)",
		"#(argb,8,8,3)color(0.05,0.05,0.05,1)",
		"#(argb,8,8,3)color(0.05,0.05,0.05,1)"
		}, "" }
		};
		};

		class A3L_Renault_Magnum_Black {
		vItemSpace = 2400;
		conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
		price = 7800000;
		textures[] = { };
		};

		class B_Boat_Transport_01_F {
		vItemSpace = 45;
		conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
		price = 3000;
		textures[] = { };
		};

		class O_Truck_03_transport_F {
		vItemSpace = 285;
		conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
		price = 600000;
		textures[] = { };
		};

		class Jonzie_Western {
		vItemSpace = 25;
		conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
		price = 70000;
		textures[] = { };
		};	

		class Jonzie_Flatbed {
		vItemSpace = 155;
		conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
		price = 70000;
		textures[] = { };
		};	

		class Jonzie_Curtain {
		vItemSpace = 225;
		conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
		price = 70000;
		textures[] = { };
		};		

		class O_Truck_03_device_F {
		vItemSpace = 350;
		conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
		price = 1450000;
		textures[] = { };
		};

		class Jonzie_Forklift {
		vItemSpace = 350;
		conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
		price = 25000;
		textures[] = { };
		};

		class B_LSV_01_armed_black_F {
		vItemSpace = 35;
		conditions = "";
		price = 7500000;
		textures[] = { };
		};	

		class Land_CargoBox_V1_F {
		vItemSpace = 5000;
		conditions = "";
		price = -1;
		textures[] = {};
		};

		class Box_IND_Grenades_F {
		vItemSpace = 350;
		conditions = "";
		price = -1;
		textures[] = {};
		};

		class B_supplyCrate_F {
		vItemSpace = 700;
		conditions = "";
		price = -1;
		textures[] = {};
		};

		class riten_jetpack_bp {
		vItemSpace = 10;
		conditions = "";
		price = 75000;
		textures[] = {};
		};

		class B_G_Offroad_01_F {
		vItemSpace = 65;
		conditions = "";
		price = 12500;
		textures[] = { };
		};

		class B_G_Offroad_01_armed_F {
		vItemSpace = 65;
		conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
		price = 750000;
		textures[] = { };
		};

		class C_Boat_Civil_01_F {
		vItemSpace = 85;
		conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
		price = 10000;
		textures[] = { };
		};

		class C_Boat_Civil_01_police_F {
		vItemSpace = 85;
		conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
		price = 20000;
		textures[] = { };
		};

		class B_Truck_01_box_F {
		vItemSpace = 450;
		conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
		price = 950000;
		textures[] = { };
		};

		class Jonzie_Ambulance {
		vItemSpace = 15;
		conditions = "";
		price = 1000;
		textures[] = { };
		};				

		class O_MRAP_02_F {
		vItemSpace = 60;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 150000;
		textures[] = { };
		};

		class C_Offroad_01_F {
		vItemSpace = 65;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 3500;
		textures[] = {
		{ "Red", "civ", {
		"\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
		"\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
		}, "" },
		{ "Yellow", "civ", {
		"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
		"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
		}, "" },
		{ "White", "civ", {
		"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
		"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
		}, "" },
		{ "Blue", "civ", {
		"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
		"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
		}, "" },
		{ "Dark Red", "civ", {
		"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
		"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
		}, "" },
		{ "Blue / White", "civ", {
		"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
		"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
		}, "" },
		{ "Taxi", "civ", {
		"#(argb,8,8,3)color(0.6,0.3,0.01,1)"
		}, "" },
		{ "Police", "cop",{
			"textures\offroad.jpg"
		}, "" },
		{ "Police White", "cop",{
			"textures\police_co.jpg"
		}, "" },
		{ "High Way Patrol", "cop",{
			"textures\police_hwp_co.jpg"
		}, "" },
		{ "Inteceptor", "cop",{
			"textures\sa_offroad.jpg"
		}, "" }
		};
		};

		class C_Kart_01_Blu_F {
		vItemSpace = 20;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 15000;
		textures[] = {};
		};
		/*
		To edit another information in this classes you can use this exemple.
		class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
		vItemSpace = 40;
		price = ;
		};

		will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
		*/
		class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
		class C_Kart_01_Red_F : C_Kart_01_Blu_F{};
		class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

		class C_Hatchback_01_sport_F {
		vItemSpace = 45;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 75000;
		textures[] = {
		{ "Red", "civ", {
		"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
		}, "" },
		{ "Dark Blue", "civ", {
		"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
		}, "" },
		{ "Orange", "civ", {
		"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
		}, "" },
		{ "Black / White", "civ", {
		"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
		}, "" },
		{ "Beige", "civ", {
		"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
		}, "" },
		{ "Green", "civ", {
		"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
		}, "" },
		{ "Inteceptor", "cop",{
			"textures\sa_hatchback.jpg"
		}, "" },
		{ "Police", "cop",{
			"textures\hatch_cop_sport.jpg"
		}, "" }
		};
		};

		class B_Quadbike_01_F {
		vItemSpace = 25;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 2500;
		textures[] = {
		{ "Brown", "cop", {
		"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
		}, "" },
		{ "Digi Desert", "reb", {
		"\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
		}, "" },
		{ "Black", "civ", {
		"\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
		}, "" },
		{ "Blue", "civ", {
		"\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
		}, "" },
		{ "Red", "civ", {
		"\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
		}, "" },
		{ "White", "civ", {
		"\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
		}, "" },
		{ "Digi Green", "civ", {
		"\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
		}, "" },
		{ "Hunter Camo", "civ", {
		"\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
		}, "" },
		{ "Rebel Camo", "reb", {
		"\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
		}, "" }
		};
		};

		class C_Hatchback_01_sport_orange_F {
		vItemSpace = 30;
		conditions = "";
		price = 1500;
		textures[] = {};
		};

		class SUV_01_base_red_F {
		vItemSpace = 30;
		conditions = "";
		price = 1500;
		textures[] = {};
		};

		class C_Offroad_02_unarmed_blue_F {
		vItemSpace = 30;
		conditions = "";
		price = 1500;
		textures[] = {};
		};

		class C_Offroad_01_red_F {
		vItemSpace = 30;
		conditions = "";
		price = 1500;
		textures[] = {};
		};

		class I_Truck_02_covered_F {
		vItemSpace = 250;
		conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
		price = 100000;
		textures[] = {
		{ "Orange", "civ", {
		"\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
		"\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
		}, "" },
		{ "Black", "cop", {
		"#(argb,8,8,3)color(0.05,0.05,0.05,1)"
		}, "" }
		};
		};

		class I_Truck_02_transport_F {
		vItemSpace = 200;
		conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
		price = 75000;
		textures[] = {
		{ "Orange", "civ", {
		"\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
		"\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
		}, "" },
		{ "Black", "cop", {
		"#(argb,8,8,3)color(0.05,0.05,0.05,1)"
		}, "" }
		};
		};

		class O_Truck_03_covered_F {
		vItemSpace = 300;
		conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
		price = 150000;
		textures[] = {};
		};

		class C_Hatchback_01_F {
		vItemSpace = 40;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 9500;
		textures[] = {
		{ "Beige", "civ", {
		"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
		}, "" },
		{ "Green", "civ", {
		"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
		}, "" },
		{ "Blue", "civ", {
		"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
		}, "" },
		{ "Dark Blue", "civ", {
		"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
		}, "" },
		{ "Yellow", "civ", {
		"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
		}, "" },
		{ "White", "civ", {
		"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
		}, "" },
		{ "Grey", "civ", {
		"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
		}, "" },
		{ "Black", "civ", {
		"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
		}, "" }
		};
		};

		class C_SUV_01_F {
		vItemSpace = 50;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 15000;
		textures[] = {
		{ "Dark Red", "civ", {
		"\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
		}, "" },
		{ "Silver", "civ", {
		"\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
		}, "" },
		{ "Orange", "civ", {
		"\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
		}, "" },
		{ "Police", "cop", {
		"textures\suv.jpg"
		}, "" },
		{ "Police inteceptor", "cop",{
			"textures\sa_suv.jpg"
		}, "" },
		{ "Police inteceptor black", "cop",{
			"textures\sa_suvblack.jpg"
		}, "" },
		{ "Police HWP black", "cop",{
			"textures\suvhw.jpg"
		}, "" },
		{ "Medic", "cop",{
			"textures\suvhw.jpg"
		}, "" },
		{ "Police HWP", "med",{
			"textures\med\med_suv.jpg"
		}, "" }
		};
		};

		class C_Van_01_transport_F {
		vItemSpace = 100;
		conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
		price = 45000;
		textures[] = {
		{ "White", "civ", {
		"\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
		}, "" },
		{ "Red", "civ", {
		"\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
		}, "" }
		};
		};

		class C_Van_01_box_F {
		vItemSpace = 150;
		conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
		price = 60000;
		textures[] = {
		{ "White", "civ", {
		"\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
		}, "" },
		{ "Red", "civ", {
		"\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
		}, "" }
		};
		};

		class B_MRAP_01_F {
		vItemSpace = 65;
		conditions = "";
		price = 30000;
		textures[] = {
		{ "NZ Import Police", "cop", {
		"textures\hunter.jpg"
		}, "" },
		{ "SCO-19 Hunter", "cop",{
			"textures\police_hunter_co.jpg"
		}, "" }
		};
		};

		class B_Heli_Light_01_stripped_F {
		vItemSpace = 90;
		conditions = "";
		price = 275000;
		textures[] = {
		{ "Rebel Digital", "reb", {
		"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
		}, "" }
		};
		};

		class B_Heli_Light_01_F {
		vItemSpace = 90;
		conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
		price = 245000;
		textures[] = {
		{ "Police", "cop", {
		"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
		}, "" },
		{ "Sheriff", "civ", {
		"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
		}, "" },
		{ "Civ Blue", "civ", {
		"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
		}, "" },
		{ "Civ Red", "civ", {
		"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
		}, "" },
		{ "Blueline", "civ", {
		"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
		}, "" },
		{ "Elliptical", "civ", {
		"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
		}, "" },
		{ "Furious", "civ", {
		"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
		}, "" },
		{ "Jeans Blue", "civ", {
		"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
		}, "" },
		{ "Speedy Redline", "civ", {
		"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
		}, "" },
		{ "Sunset", "civ", {
		"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
		}, "" },
		{ "Vrana", "civ", {
		"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
		}, "" },
		{ "Waves Blue", "civ", {
		"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
		}, "" },
		{ "Rebel Digital", "reb", {
		"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
		}, "" },
		{ "Digi Green", "reb", {
		"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
		}, "" },
		{ "EMS White", "med", {
		"textures\med\heli_med.jpg"
		}, "" }
		};
		};

		class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
		vItemSpace = 75;
		price = 245000;
		};

		class I_Heli_light_03_unarmed_F {
		vItemSpace = 175;
		price = 550000;
		};

		class B_T_VTOL_01_vehicle_F {
		vItemSpace = 1075;
		price = 8550000;
		};

		class B_Heli_Transport_03_unarmed_F {
		vItemSpace = 775;
		price = 3550000;
		};	

		class O_Heli_Light_02_unarmed_F {
		vItemSpace = 140;
		conditions = "license_civ_pilot || {license_med_mAir} || {(playerSide isEqualTo west)}";
		price = 350000;
		textures[] = {
		{ "Black", "cop", {
		"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
		}, "" },
		{ "White / Blue", "civ", {
		"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
		}, "" },
		{ "Digi Green", "civ", {
		"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
		}, "" },
		{ "Desert Digi", "reb", {
		"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
		}, "" },
		{ "EMS White", "med", {
		"textures\med\med_orca.jpg"
		}, "" }
		};
		};

		class B_SDV_01_F {
		vItemSpace = 50;
		conditions = "license_civ_boat || {license_cop_cg} || {(playerSide isEqualTo independent)}";
		price = 150000;
		textures[] = {};
		};

		class C_Van_01_fuel_F {
		vItemSpace = 20;
		vFuelSpace = 19500;
		conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
		price = 120000;
		textures[] = {
		{ "White", "civ", {
		"\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
		"\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
		}, "" },
		{ "Red", "civ", {
		"\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
		"\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
		}, "" }
		};
		};

		class I_Truck_02_fuel_F {
		vItemSpace = 40;
		vFuelSpace = 42000;
		conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
		price = 200000;
		textures[] = {
		{ "White", "civ", {
		"\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
		"\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
		}, "" }
		};
		};

		class B_Truck_01_fuel_F {
		vItemSpace = 50;
		vFuelSpace = 50000;
		conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
		price = 250000;
		textures[] = {};
		};
		};
