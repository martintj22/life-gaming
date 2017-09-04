/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*
*
*
*
*        Her er to eksempeler på hvordan man sætter ting ind:
*    
*      { "spawnnavn", "Navn der bliver vist i shop", pris, "License eller level" },
*      { "U_C_Poloshirt_stripped", "polotrøje", 125, "call life_coplevel >= 7" },
*
*/
/*
/*
---------------------------------------------------------------------------------------------------------------------------
Kopi af en ren shop:

class Clothing {
    class Summer {
        title = "Summer";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "spawncode", "", 150, "" },
            { "spawncode", "", 5000, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "spawncode", "", 425, "" },
            { "spawncode", "", 425, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "spawncode", "", 150, "" },
            { "spawncode", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "spawncode", "", 500, "" },
            { "spawncode", "", 2000, "" }
        };
    };
*/

/*-----------------------------------------------------------------------------------------------------------------*/

	
	
	
/* 
Billig tøj shop civil starter her
*/ 

            class Clothing { 
            class bruce {
            title = "STR_Shops_C_Bruce";
            conditions = "";
            side = "civ";
           
            uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "A3LCivPoloUK", "", 125, "" },
            { "A3L_CivShirtProbe", "", 150, "" },
            { "U_C_Poloshirt_salmon", "", 175, "" },
            { "U_C_Poloshirt_blue", "", 250, "" },
            { "U_C_Poloshirt_burgundy", "", 275, "" },
            { "U_C_Poloshirt_tricolour", "", 350, "" },
            { "U_C_Poor_2", "", 250, "" },
            { "GreenPlaid_uni", "", 650, "" },
            { "BlGnGy_uni", "", 735, "" },
            { "U_OrestesBody", "", 1100, "" },
            { "Checkered_uni", "", 1200, "" },
            { "kingfish_uni", "", 1500, "" },
            { "racer_uni", "", 2500, "" },
            { "U_NikosBody", "", 3000, "" },
            { "U_NikosAgedBody", $STR_C_Civ_Niko, 5000, "" },
            { "U_C_Man_casual_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_3_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_4_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_5_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_6_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_2_F", "", 5000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_4_F", "", 5000, "" } //Apex DLC
            };
		    
            headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 120, "" },
            { "H_Bandanna_surfer", "", 130, "" },
            { "H_Bandanna_khk", "", 145, "" },
            { "H_Cap_blu", "", 150, "" },
            { "H_Cap_grn", "", 150, "" },
            { "H_Cap_grn_BI", "", 150, "" },
            { "H_Cap_oli", "", 150, "" },
            { "H_Cap_red", "", 150, "" },
            { "H_Cap_tan", "", 150, "" },
            { "H_Helmet_Skate", "", 150, "" }, //Apex DLC
            { "H_Bandanna_gry", "", 150, "" },
            { "H_Bandanna_sgg", "", 160, "" },
            { "H_Bandanna_cbr", "", 165, "" },
            { "H_StrawHat", "", 225, "" },
            { "H_Hat_tan", "", 265, "" },
            { "H_Hat_brown", "", 276, "" },
            { "H_Hat_grey", "", 280, "" },
            { "H_BandMask_blk", $STR_C_Civ_BandMask, 300, "" },
            { "H_Hat_blue", "", 310, "" },
            { "H_Hat_checker", "", 340, "" },
            { "H_Booniehat_tan", "", 425, "" },
            { "H_Booniehat_grn", "", 425, "" }
            };
		    
            goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Spectacles", "", 150, "" }
            };
		    
            vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
       
	    };
             backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_AssaultPack_tna_f", "", 2000, "" }, //Apex DLC
	    { "B_Respawn_Sleeping_bag_brown_F", "", 2000, "" },
            { "B_Patrol_Respawn_bag_F", "", 2000, "" },	
            { "B_AssaultPack_ocamo", "", 2000, "" }
        };
    };

/*
-----Billig tøj shop slutter her------
*/

	/*
-----Summer tøj starter her------
*/	

   	 class Summer { /*Navn på npc */
 	 title = "Summer"; /* Shop tittle */ 
    	 conditions = ""; /* license eller level*/
         side = "civ"; /*Civl, politi eler medic */
    	    
	 uniforms[] = {
	 { "NONE", $STR_C_Remove_uniforms, 0, "" },
	 { "U_C_Man_casual_4_F", "", 500, "" },
	 { "U_C_Man_casual_5_F", "", 500, "" },
	 { "vacationshirt_uni", "", 600, "" },
	 { "U_C_man_sport_1_F", "", 800, "" },
	 { "U_C_man_sport_2_F", "", 1000, "" } 
	 };
	    
	 headgear[] = {
	 { "NONE", $STR_C_Remove_headgear, 0, "" },
	 { "H_Bandanna_surfer", "", 400, "" },
	 { "H_Bandanna_gry", "", 425, "" },
	 { "H_Bandanna_gm", "", 425, "" },
	 { "H_Cap_tan_blu", "", 425, "" },
	 { "Bravo93_BoonieHat_DPM", "", 425, "" },
	 { "Kio_spinning_Hat", "", 425, "" },
	 { "A3L_SkateHelmet_green", "", 800, "" },
	 { "H_StrawHat", "", 900, "" }
	  };
	    
    	goggles[] = {
   	 { "NONE", $STR_C_Remove_goggles, 0, "" },
   	 { "G_Shades_Red", "", 300, "" },
   	 { "EF_FRG2", "", 600, "" },
    	 { "EF_FRG22", "", 650, "" }
   	 };
	    
    	vests[] = {
    	{ "NONE", $STR_C_Remove_vests, 0, "" }
    	};
	    
    	backpacks[] = {
   	 { "NONE", $STR_C_Remove_backpacks, 0, "" },
    	 { "A3L_BergenMurica", "", 800, "" },
   	 { "A3L_Britianback", "", 1200, "" }
   	 };
	    
    }; /*----- Summer tøj slutter her ------*/

	

/*----- Design outfits ------*/

   	class design {
    	title = "design";
    	conditions = "";
    	side = "civ";
	    
   	uniforms[] = {
    	{ "NONE", $STR_C_Remove_uniforms, 0, "" },
    	{ "A3LKhaledShirt", "", 500, "" },
    	{ "A3L_CivShirtNikeCamo", "", 500, "" },
    	{ "A3L_CivShirtOhboy", "", 700, "" },
    	{ "A3L_CivShirtNikeDoit", "", 800, "" },
    	{ "cg_evolution1", "", 800, "" },
    	{ "A3LRainbowShirt", "", 800, "" },
    	{ "A3L_PinkPoloShirt", "", 1300, "" },
    	{ "A3LWhiteFloral", "", 1300, "" },
    	{ "A3LOGFloralShirt", "", 1500, "" } //Apex DLC
    	};
	    
    	headgear[] = {
    	{ "NONE", $STR_C_Remove_headgear, 0, "" },
    	{ "TRYK_H_woolhat_cu", "", 600, "" },
    	{ "H_Cap_surfer", "", 600, "" },
    	{ "Nike_Cap_Blk", "", 600, "" },
    	{ "Nike_Cap_Grey", "", 600, "" },
    	{ "Nike_Cap_Orange", "", 600, "" },
    	{ "boonie_black100", "", 800, "" },
    	{ "boonie_floral1", "", 1200, "" },
    	{ "A3L_gangster_hat", "", 2000, "" }
    	};
        
    	goggles[] = {
    	{ "NONE", $STR_C_Remove_goggles, 0, "" },
    	{ "G_Aviator", "", 500, "" },
    	{ "G_Bandanna_blk", "", 600, "" },
    	{ "G_Bandanna_tan", "", 800, "" },
    	{ "G_Bandanna_shades", "", 1000, "" },
    	{ "G_Sport_Greenblack", "", 1000, "" }
   	 };
	    
    	vests[] = {
        { "NONE", $STR_C_Remove_vests, 0, "" }
    	};
	    
	    
        backpacks[] = {
    	{ "NONE", $STR_C_Remove_backpacks, 0, "" },
    	{ "O_HMG_01_high_weapon_F", "", 1000, "" },
     	{ "Iscarryall_black", "", 2000, "" },
     	{ "SERT_Blackback", "", 1600, "" }
        };
    };

	
	
	/*----- Modern tøj  ------*/
	class modern {
        title = "modern";
        conditions = "";
        side = "civ";
        
	uniforms[] = {
       { "NONE", $STR_C_Remove_uniforms, 0, "" },
       { "cg_bb1", "", 500, "" },
       { "cg_gamerepeat1", "", 500, "" },
       { "CG_illuminati1", "", 700, "" },
       { "cg_gameover1", "", 800, "" },
       { "cg_beats1", "", 800, "" },
       { "cg_hearts1", "", 800, "" },
       { "A3L_Dude_Outfit", "", 1300, "" },
       { "EF_M_jkt2_2", "", 1500, "" } //Apex DLC
       };
		
        headgear[] = {
       { "NONE", $STR_C_Remove_headgear, 0, "" },
       { "TRYK_R_CAP_BKL", "", 600, "" },
       { "Polo_Cap_Blk", "", 600, "" },
       { "Polo_Cap_Navy", "", 600, "" },
       { "Polo_Cap_Tan", "", 600, "" },
       { "CID_Cap_Tan", "", 600, "" },
       { "Kio_Capital_Hat", "", 800, "" },
       { "woolhat_louisv", "", 1200, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "EF_FG1", "", 500, "" },
	    { "EF_FG21", "", 600, "" },
            { "G_Sport_BlackYellow", "", 800, "" },
            { "G_Sport_Red", "", 1000, "" }
        };
		
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
		
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "TAC_MTAP_CY", "", 1000, "" },
	    { "TRYK_B_Kitbag_blk", "", 2000, "" },
	    { "TRYK_B_Kitbag_blk", "", 2000, "" },
            { "Iscarryall_comic", "", 1600, "" }
        };
    };
	/*----- modern tøj slut  ------*/

	
	/*----- Special tøj slut  ------*/
	class special {
        title = "special";
        conditions = "";
        side = "civ";
		
        uniforms[] = {
        { "NONE", $STR_C_Remove_uniforms, 0, "" },
        { "taxi_uni", "", 500, "" },
	{ "A3L_Farmer_Outfit", "", 500, "" },
        { "A3L_Worker_Outfit", "", 1500, "" } //Apex DLC
        };
		
        headgear[] = {
        { "NONE", $STR_C_Remove_headgear, 0, "" },
	{ "TRYK_ESS_CAP", "", 600, "" }
	};
		
        goggles[] = {
        { "NONE", $STR_C_Remove_goggles, 0, "" },
	{ "Masque_Chirurgical", "", 600, "" },
	{ "G_Combat", "", 600, "" },
	{ "G_Combat_Goggles_tna_F", "", 600, "" }

        };
        vests[] = {
        { "NONE", $STR_C_Remove_vests, 0, "" }
        };
		
        backpacks[] = {
        { "NONE", $STR_C_Remove_backpacks, 0, "" },
      	{ "TRYK_B_tube_blk", "", 600, "" },
	{ "TRYK_Headphone_nv", "", 600, "" },
	{ "H_Cap_marshal", "", 600, "" },
	{ "TRYK_Winter_pack", "", 600, "" }
        };
    };
	/*----- Special tøj slut  ------*/

	
	
	
/*-----Politi starter her ------*/		
        class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
	    
        uniforms[] = {
	{ "NONE", $STR_C_Remove_uniforms, 0, "" },
        { "A3L_EC_SOCPINS", "Inspector", 25, "call life_coplevel >= 7" },
	{ "A3L_EC_SOCPT", "Cadet", 25, "" },
	{ "A3L_EC_SOCPCOM", "Commissioner", 25, "call life_coplevel >= 7" },
	{ "A3L_EC_SOCPOF", "Officer", 25, "call life_coplevel >= 7" },
	{ "A3L_EC_SOCPSER", "Sergeant", 25, "call life_coplevel >= 1" },
	{ "EF_HMP_2", "Police", 25, "" }
        };
		
        headgear[] = {
        { "NONE", $STR_C_Remove_headgear, 0, "" },
        { "H_Cap_police", "", 25, "call life_coplevel >= 1" },
        { "H_HelmetB", "", 25, "call life_coplevel >= 4" },
        { "H_Beret_blk_POLICE", "", 25, "call life_coplevel >= 5" }
        };
	    
        goggles[] = {
        { "NONE", $STR_C_Remove_goggles, 0, "" },
        { "G_Squares", "", 100, "" },
        { "G_Shades_Blue", "", 100, "" },
        { "G_Sport_Blackred", "", 100, "" },
        { "G_Sport_Checkered", "", 100, "" },
   	{ "G_Sport_Blackyellow", "", 100, "" },		
        { "G_Sport_BlackWhite", "", 100, "" },
        { "G_Shades_Black", "", 100, "" },
        { "G_Lowprofile", "", 100, "" },
        { "G_Combat", "", 100, "" },
        { "G_Aviator", "", 100, "" },
        { "G_Lady_Mirror", "", 100, "" },
        { "G_Lady_Dark", "", 100, "" },
        { "G_Lady_Blue", "", 100, "" }
        };
		
        vests[] = {
        { "NONE", $STR_C_Remove_vests, 0, "" }, 
        { "V_Rangemaster_belt", "", 100, "" },
	{ "V_TacVest_blk_POLICE", "", 100, "call life_coplevel >= 2" },
	{ "CID_Vest_Fix", "", 100, "call life_coplevel >= 1" },
	{ "V_PlateCarrier1_blk", "", 100, "call life_coplevel >= 4" },
	{ "A3L_EC_HWP_VEST", "", 100, "call life_coplevel >= 1" }
        };
		
        backpacks[] = {
        { "NONE", $STR_C_Remove_backpacks, 0, "" },
        { "B_AssaultPack_cbr", "", 100, "" },
        { "B_Kitbag_cbr", "", 100, "" },
        { "B_Bergen_sgg", "", 100, "" },
        { "B_Carryall_cbr", "", 100, "" }
        };
    };


        class copundercover {
        title = "undercover";
        conditions = "license_cop_undercover";
        side = "cop";
        
	uniforms[] = {
	{ "NONE", $STR_C_Remove_uniforms, 0, "" },
	{ "U_OrestesBody", "", 25, "" },
	{ "U_IG_Guerilla2_3", "", 25, "" },
	{ "U_C_HunterBody_grn", "", 25, "" },
	{ "U_C_WorkerCoveralls", "", 25, "" },
	{ "U_IG_Guerilla1_1", "", 25, "" },
        { "A3LCivPoloUK", "", 125, "" },
    	{ "A3L_CivShirtProbe", "", 150, "" },
   	{ "U_C_Poloshirt_salmon", "", 175, "" },
        { "U_C_Poloshirt_blue", "", 250, "" },
	{ "U_C_Poloshirt_burgundy", "", 275, "" },
	{ "U_C_Poloshirt_tricolour", "", 350, "" },
	{ "U_C_Poor_2", "", 250, "" },
	{ "GreenPlaid_uni", "", 650, "" },
	{ "BlGnGy_uni", "", 735, "" },
	{ "U_OrestesBody", "", 1100, "" },
        { "Checkered_uni", "", 1200, "" },
	{ "kingfish_uni", "", 1500, "" },
	{ "racer_uni", "", 2500, "" },
	{ "U_NikosBody", "", 3000, "" },	
        { "U_O_FullGhillie_lsh", "", 25, "" },
	{ "U_NikosBody", "", 25, "" },
	{ "U_NikosAgedBody", $STR_C_Civ_Niko, 25, "" }
	};
		
        headgear[] = {
        { "NONE", $STR_C_Remove_headgear, 0, "" },
        { "black_cap", "", 25, "call life_coplevel >= 1" },
        { "H_MilCap_tna_F", "", 25, "call life_coplevel >= 10" }, //Apex DLC
        { "H_MilCap_oucamo", "", 25, "call life_coplevel >= 10" }
        };
		
        goggles[] = {
        { "NONE", $STR_C_Remove_goggles, 0, "" },
        { "G_Squares", "", 100, "" },
        { "G_Shades_Blue", "", 100, "" },
        { "G_Sport_Blackred", "", 100, "" },
        { "G_Sport_Checkered", "", 100, "" },
        { "G_Sport_Blackyellow", "", 100, "" },
        { "G_Sport_BlackWhite", "", 100, "" },
        { "G_Shades_Black", "", 100, "" },
        { "G_Lowprofile", "", 100, "" },
        { "G_Combat", "", 100, "" },
        { "G_Aviator", "", 100, "" },
        { "G_Lady_Mirror", "", 100, "" },
        { "G_Lady_Dark", "", 100, "" },
        { "G_Lady_Blue", "", 100, "" }
        };
		
        vests[] = {
        { "NONE", $STR_C_Remove_vests, 0, "" },
        { "V_Rangemaster_belt", "", 100, "" }
        };
		
        backpacks[] = {
        { "NONE", $STR_C_Remove_backpacks, 0, "" },
        { "B_FieldPack_cbr", "", 100, "" },
        { "B_AssaultPack_cbr", "", 100, "" },
        { "B_Kitbag_cbr", "", 100, "" },
        { "B_Bergen_sgg", "", 100, "" },
        { "B_Carryall_khk", "", 100, "" }
        };
    };

	class sco19 {
		title = "STR_Shops_SCO19";
		conditions = "license_cop_sco19";
		side = "cop";
		uniforms[] = {
			{ "NONE", $STR_C_Remove_uniforms, 0, "" },
			{ "A3L_SWAT", "Police", 25, "" }
		};
		headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "CG_sert_H2", "", 25, "call life_coplevel >= 0" }
		};
		goggles[] = {
		{ "NONE", $STR_C_Remove_goggles, 0, "" },
		{ "G_Squares", "", 100, "" },
		{ "G_Shades_Blue", "", 100, "" },
		{ "G_Sport_Blackred", "", 100, "" },
		{ "G_Sport_Checkered", "", 100, "" },
		{ "G_Sport_Blackyellow", "", 100, "" },
		{ "G_Sport_BlackWhite", "", 100, "" },
		{ "G_Shades_Black", "", 100, "" },
		{ "G_Lowprofile", "", 100, "" },
		{ "TRYK_kio_balaclava_ESS", "", 100, "" },
		{ "G_Aviator", "", 100, "" },
		{ "G_Lady_Mirror", "", 100, "" },
		{ "G_Lady_Dark", "", 100, "" },
		{ "G_Lady_Blue", "", 100, "" }
		};
		vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "LVSP_SWATblack", "", 100, "" }

		};
		backpacks[] = {
			{ "NONE", $STR_C_Remove_backpacks, 0, "" },
			{ "B_FieldPack_cbr", "", 100, "" },
			{ "B_AssaultPack_cbr", "", 100, "" },
			{ "B_Kitbag_cbr", "", 100, "" },
			{ "B_Bergen_sgg", "", 100, "" },
			{ "B_Carryall_cbr", "", 100, "" }
		};
	};


    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", $STR_C_EMS_uniforms, 50, "" },
			{ "aa_uni1", "", 10, "" },
			{ "EF_M_EMS_U", "", 10, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_blu", "", 10, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Blue", "", 10, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
		    { "V_PlateCarrier1_blk", "", 0, "call life_mediclevel >= 3" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_FieldPack_oli", $STR_C_EMS_backpacks, 3000, "" },
			{ "B_Carryall_cbr", "", 100, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_IG_Guerilla1_1", "", 5000, "" },
            { "U_I_G_Story_Protagonist_F", "", 7500, "" },
            { "U_I_G_resistanceLeader_F", "", 10500, "" },
            { "U_IG_leader", "", 12340, "" },
            { "U_O_PilotCoveralls", "", 15610, "" },
            { "U_O_SpecopsUniform_ocamo", "", 17500, "" },
            { "U_B_T_Soldier_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_1_F", "", 10000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_2_F", "", 10000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_3_F", "", 10000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_4_F", "", 10000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_5_F", "", 10000, "" }, //Apex DLC
            { "U_I_C_Soldier_Camo_F", "", 10000, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 650, "" },
            { "H_ShemagOpen_khk", "", 800, "" },
            { "H_ShemagOpen_tan", "", 850, "" },
            { "H_Shemag_olive", "", 850, "" },
            { "H_HelmetO_ocamo", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" },
            { "V_TacVest_khk", "", 12500, "" },
            { "V_TacChestrig_grn_F", "", 17500, "" } //Apex DLC
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" }
        };
    };
    class advreb {
        title = "STR_Shops_C_advRebel";
        conditions = "license_civ_advrebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_FullGhillie_lsh", "", 55000, "" },
            { "U_B_FullGhillie_sard", "", 55000, "" },
            { "U_B_FullGhillie_ard", "", 55000, "" },
            { "U_O_FullGhillie_lsh", "", 55000, "" },
            { "U_O_FullGhillie_sard", "", 55000, "" },
            { "U_O_FullGhillie_ard", "", 55000, "" },
            { "U_I_FullGhillie_lsh", "", "", 55000, "" }, //Apex DLC
            { "U_I_FullGhillie_sard", "", 550000, "" }, //Apex DLC
            { "U_I_FullGhillie_ard", "", 55000, "" }, //Apex DLC
            { "U_O_T_FullGhillie_tna_F", "", 55000, "" }, //Apex DLC
            { "U_O_GhillieSuit", "", 50000, "" }, //Apex DLC
            { "U_B_GhillieSuit", "", 50000, "" }, //Apex DLC
            { "U_I_GhillieSuit", "", 50000, "" }, //Apex DLC
            { "U_O_V_Soldier_Viper_F", "", 30000, "" },
            { "U_B_Wetsuit", "", 3000, "" }
		};
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_HelmetLeaderO_ocamo", "", 40000, "" },
            { "H_HelmetSpecO_blk", "", 30000, "" },
            { "H_HelmetLeaderO_oucamo", "", 40000, "" },
            { "H_HelmetO_ViperSP_ghex_F", "", 80000, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Balaclava_TI_blk_F", "", 2000, "" },
            { "G_Balaclava_blk", "", 2000, "" }

        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_PlateCarrierSpec_rgr", "", 70000, "" },
            { "V_PlateCarrierGL_rgr", "", 70000, "" },
            { "V_PlateCarrier2_rgr", "", 40000, "" },
			{ "V_PlateCarrier2_blk", "", 40000, "" },
			{ "V_HarnessOGL_gry", STR_C_items_akbar, 300000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_ViperHarness_blk_F", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" }
        };
    };
	    class hali {
        title = "Clothing Store";
        conditions = "license_civ_hali";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_IG_Guerilla1_1", "", 5000, "" },
            { "U_I_G_Story_Protagonist_F", "", 7500, "" },
            { "U_I_G_resistanceLeader_F", "", 10500, "" },
            { "U_IG_leader", "", 12340, "" },
            { "U_O_PilotCoveralls", "", 15610, "" },
            { "U_O_SpecopsUniform_ocamo", "", 17500, "" },
            { "U_B_T_Soldier_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_1_F", "", 10000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_2_F", "", 10000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_3_F", "", 10000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_4_F", "", 10000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_5_F", "", 10000, "" }, //Apex DLC
            { "U_I_C_Soldier_Camo_F", "", 10000, "" },
            { "U_B_FullGhillie_lsh", "", 55000, "" },
            { "U_B_FullGhillie_sard", "", 55000, "" },
            { "U_B_FullGhillie_ard", "", 55000, "" },
            { "U_O_FullGhillie_lsh", "", 55000, "" },
            { "U_O_FullGhillie_sard", "", 55000, "" },
            { "U_O_FullGhillie_ard", "", 55000, "" },
            { "U_I_FullGhillie_lsh", "", "", 55000, "" }, //Apex DLC
            { "U_I_FullGhillie_sard", "", 550000, "" }, //Apex DLC
            { "U_I_FullGhillie_ard", "", 55000, "" }, //Apex DLC
            { "U_O_T_FullGhillie_tna_F", "", 55000, "" }, //Apex DLC
            { "U_O_GhillieSuit", "", 50000, "" }, //Apex DLC
            { "U_B_GhillieSuit", "", 50000, "" }, //Apex DLC
            { "U_I_GhillieSuit", "", 50000, "" }, //Apex DLC
            { "U_O_V_Soldier_Viper_F", "", 30000, "" },
            { "U_B_Wetsuit", "", 3000, "" },
            { "U_C_Poloshirt_stripped", "", 125, "" },
            { "U_C_Poloshirt_redwhite", "", 150, "" },
            { "U_C_Poloshirt_salmon", "", 175, "" },
            { "U_C_Poloshirt_blue", "", 250, "" },
            { "U_C_Poloshirt_burgundy", "", 275, "" },
            { "U_C_Poloshirt_tricolour", "", 350, "" },
            { "U_C_Poor_2", "", 250, "" },
            { "U_IG_Guerilla2_2", "", 650, "" },
            { "U_IG_Guerilla3_1", "", 735, "" },
            { "U_OrestesBody", "", 1100, "" },
            { "U_IG_Guerilla2_3", "", 1200, "" },
            { "U_C_HunterBody_grn", "", 1500, "" },
            { "U_C_WorkerCoveralls", "", 2500, "" },
            { "U_NikosBody", "", 3000, "" },
            { "U_NikosAgedBody", $STR_C_Civ_Niko, 5000, "" },
            { "U_C_Man_casual_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_3_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_4_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_5_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_6_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_3_F", "", 5000, "" }			//Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 650, "" },
            { "H_ShemagOpen_khk", "", 800, "" },
            { "H_ShemagOpen_tan", "", 850, "" },
            { "H_Shemag_olive", "", 850, "" },
            { "H_HelmetLeaderO_ocamo", "", 40000, "" },
            { "H_HelmetSpecO_blk", "", 30000, "" },
            { "H_HelmetLeaderO_oucamo", "", 40000, "" },
            { "H_HelmetO_ViperSP_ghex_F", "", 80000, "" },
            { "H_HelmetO_ocamo", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" },
            { "V_TacVest_khk", "", 12500, "" },
            { "V_PlateCarrierSpec_rgr", "", 70000, "" },
            { "V_PlateCarrierGL_rgr", "", 70000, "" },
            { "V_PlateCarrier2_rgr", "", 40000, "" },
			{ "V_PlateCarrier2_blk", "", 40000, "" },
			{ "V_HarnessOGL_gry", STR_C_items_akbar, 300000, "" },
            { "V_TacChestrig_grn_F", "", 17500, "" } //Apex DLC
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
			{ "B_Bergen_dgtl_f", "", 9500, "" }, //Apex DLC
            { "B_Bergen_tna_f", "", 9500, "" }
        };
    };

	class ion {
        title = "Clothing Store";
        conditions = "license_civ_ion";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_IG_Guerilla1_1", "", 5000, "" },
            { "U_I_G_Story_Protagonist_F", "", 7500, "" },
            { "U_I_G_resistanceLeader_F", "", 10500, "" },
            { "U_IG_leader", "", 12340, "" },
            { "U_O_PilotCoveralls", "", 15610, "" },
            { "U_O_SpecopsUniform_ocamo", "", 17500, "" },
            { "U_B_T_Soldier_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_1_F", "", 10000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_2_F", "", 10000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_3_F", "", 10000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_4_F", "", 10000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_5_F", "", 10000, "" }, //Apex DLC
            { "U_I_C_Soldier_Camo_F", "", 10000, "" },
            { "U_B_FullGhillie_lsh", "", 55000, "" },
            { "U_B_FullGhillie_sard", "", 55000, "" },
            { "U_B_FullGhillie_ard", "", 55000, "" },
            { "U_O_FullGhillie_lsh", "", 55000, "" },
            { "U_O_FullGhillie_sard", "", 55000, "" },
            { "U_O_FullGhillie_ard", "", 55000, "" },
            { "U_I_FullGhillie_lsh", "", "", 55000, "" }, //Apex DLC
            { "U_I_FullGhillie_sard", "", 550000, "" }, //Apex DLC
            { "U_I_FullGhillie_ard", "", 55000, "" }, //Apex DLC
            { "U_O_T_FullGhillie_tna_F", "", 55000, "" }, //Apex DLC
            { "U_O_GhillieSuit", "", 50000, "" }, //Apex DLC
            { "U_B_GhillieSuit", "", 50000, "" }, //Apex DLC
            { "U_I_GhillieSuit", "", 50000, "" }, //Apex DLC
            { "U_O_V_Soldier_Viper_F", "", 30000, "" },
            { "U_B_Wetsuit", "", 3000, "" },
            { "U_C_Poloshirt_stripped", "", 125, "" },
            { "U_C_Poloshirt_redwhite", "", 150, "" },
            { "U_C_Poloshirt_salmon", "", 175, "" },
            { "U_C_Poloshirt_blue", "", 250, "" },
            { "U_C_Poloshirt_burgundy", "", 275, "" },
            { "U_C_Poloshirt_tricolour", "", 350, "" },
            { "U_C_Poor_2", "", 250, "" },
            { "U_IG_Guerilla2_2", "", 650, "" },
            { "U_IG_Guerilla3_1", "", 735, "" },
            { "U_OrestesBody", "", 1100, "" },
            { "U_IG_Guerilla2_3", "", 1200, "" },
            { "U_C_HunterBody_grn", "", 1500, "" },
            { "U_C_WorkerCoveralls", "", 2500, "" },
            { "U_NikosBody", "", 3000, "" },
            { "U_NikosAgedBody", $STR_C_Civ_Niko, 5000, "" },
            { "U_C_Man_casual_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_3_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_4_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_5_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_6_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_3_F", "", 5000, "" }			//Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 650, "" },
            { "H_ShemagOpen_khk", "", 800, "" },
            { "H_ShemagOpen_tan", "", 850, "" },
            { "H_Shemag_olive", "", 850, "" },
            { "H_HelmetLeaderO_ocamo", "", 40000, "" },
            { "H_HelmetSpecO_blk", "", 30000, "" },
            { "H_HelmetLeaderO_oucamo", "", 40000, "" },
            { "H_HelmetO_ViperSP_ghex_F", "", 80000, "" },
            { "H_HelmetO_ocamo", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" },
            { "V_TacVest_khk", "", 12500, "" },
            { "V_PlateCarrierSpec_rgr", "", 70000, "" },
            { "V_PlateCarrierGL_rgr", "", 70000, "" },
            { "V_PlateCarrier2_rgr", "", 40000, "" },
			{ "V_PlateCarrier2_blk", "", 40000, "" },
			{ "V_HarnessOGL_gry", STR_C_items_akbar, 300000, "" },
            { "V_TacChestrig_grn_F", "", 17500, "" } //Apex DLC
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
			{ "B_Bergen_dgtl_f", "", 9500, "" }, //Apex DLC
            { "B_Bergen_tna_f", "", 9500, "" }
        };
    };

	class donator {
        title = "STR_Shops_C_Donator";
        conditions = "license_civ_donator";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_IG_Guerilla1_1", "", 5000, "" },
            { "U_I_G_Story_Protagonist_F", "", 7500, "" },
            { "U_I_G_resistanceLeader_F", "", 10500, "" },
            { "U_IG_leader", "", 12340, "" },
            { "U_O_PilotCoveralls", "", 15610, "" },
            { "U_O_SpecopsUniform_ocamo", "", 17500, "" },
            { "U_B_T_Soldier_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_1_F", "", 10000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_2_F", "", 10000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_3_F", "", 10000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_4_F", "", 10000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_5_F", "", 10000, "" }, //Apex DLC
            { "U_I_C_Soldier_Camo_F", "", 10000, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 650, "" },
            { "H_ShemagOpen_khk", "", 800, "" },
            { "H_ShemagOpen_tan", "", 850, "" },
            { "H_Shemag_olive", "", 850, "" },
            { "H_HelmetO_ocamo", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" },
            { "V_TacVest_khk", "", 12500, "" },
            { "V_TacChestrig_grn_F", "", 17500, "" } //Apex DLC
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
};
