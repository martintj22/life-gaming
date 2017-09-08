/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/



				/* Jagt tegn */
				class WeaponShops {
				class gun {
				name = "Billy Joe's Firearms";
				side = "civ";
				conditions = "license_civ_gun";
				items[] = {
				{ "hgun_Rook40_F", "", 5000, 1250, "" },
				{ "hgun_PDW2000_F", "", 13000, 10000, "" }
				};
				mags[] = {
				{ "16Rnd_9x21_Mag", "", 125, 60, "" },
				{ "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
				{ "6Rnd_RedSignal_F", "", 50, 25, "" },
				{ "30Rnd_45ACP_Mag_SMG_01", "", 50, 25, "" },
				{ "9Rnd_45ACP_Mag", "", 20, 10, "" },
				{ "30rnd_556x45_stanag", "", 100, 50, "" },
				{ "30Rnd_9x21_Mag", "", 250, 125, "" },
				{ "11Rnd_45ACP_Mag", "", 250, 125, "" },
				{ "30Rnd_9x21_Mag_SMG_02", "", 250, 125, "" }, //Apex DLC
				{ "10Rnd_9x21_Mag", "", 250, 125, "" } //Apex DLC
				};		
				accs[] = {
				{ "muzzle_snds_acp", "", 1500, 1250, "" },
				{ "optic_ACO_grn_smg", "", 700, 1250, "" }
				};
				};
				/* Jagt slut  */
					

					
				/*Rebelshop start */ 	
				class rebel {
				name = "Mohammed's Jihadi Shop";
				side = "civ";
				conditions = "license_civ_rebel";
				items[] = {
				{ "arifle_TRG20_F", "", 40000, 20000, "" },
				{ "arifle_Katiba_F", "", 65000, 32500, "" },
				{ "arifle_SDAR_F", "", 10000, 5000, "" },
				{ "arifle_spar_01_blk_f", "", 60000, 30000 "" },//Apex DLC
				{ "arifle_AKS_F", "", 20000, 10000, "" }, //Apex DLC
				{ "arifle_AKM_F", "", 30000, 15000, "" }, //Apex DLC
				{ "arifle_ARX_blk_F", "", 40000, 20000, "" }, //Apex DLC
				{ "arifle_mk20_plain_f", "", 25000, 12500, "" },
				{ "arifle_SPAR_01_blk_F", "", 50000, 25000, "" }, 			//Apex DLC
				{ "arifle_CTAR_blk_F", "", 30000, 15000, "" } //Apex DLC
				};
				mags[] = {
				{ "30Rnd_556x45_Stanag", "", 300, 150, "" },
				{ "30Rnd_762x39_Mag_F", "", 300, 150, "" },
				{ "30Rnd_545x39_Mag_F", "", 300, 150, "" }, //Apex DLC
				{ "30Rnd_65x39_caseless_green", "", 275, 140, "" },
				{ "20Rnd_556x45_UW_mag", "", 125, 60, "" },
				{ "30Rnd_580x42_Mag_F", "", 125, 60, "" } //Apex DLC
				};
				accs[] = {
				{ "optic_ACO_grn", "", 3500, 1750, "" },
				{ "optic_Holosight", "", 3600, 1800, "" },
				{ "acc_flashlight", "", 1000, 500, "" }
				};
				};

				class advrebel {
				name = "Mohammed's Advanced Jihadi Weapon";
				side = "civ";
				conditions = "license_civ_advrebel";	
				items[] = {
				{ "srifle_EBR_F", "", 220000, 110000, "" },
				{ "arifle_SPAR_03_blk_F", "", 180000, 90000, "" },//Apex DLC
				{ "arifle_AK12_F", "", 140000, 70000, "" }, //Apex DLC
				{ "arifle_MX_SW_F", "", 120000, 60000, "" },
				{ "arifle_MX_SW_Black_F", "", 120000, 60000, "" },
				{ "arifle_MX_SW_khk_F", "", 120000, 60000, "" }, //Apex DLC
				{ "arifle_mxm_f", "", 120000, 60000, "" },
				{ "arifle_mxm_Black_f", "", 120000, 60000, "" },
				{ "mmg_01_hex_f", "", 350000, 175000, "" }, //Marksmen DLC
				{ "arifle_mxc_F", "", 120000, 60000, "" },
				{ "mmg_01_tan_f", "", 350000, 175000, "" }, //Marksmen DL
				{ "arifle_arx_blk_f", "", 125000, 62500, "" }, //Apex DLC
				{ "arifle_arx_ghex_f", "", 125000, 62500, "" }, //Apex DLC
				{ "arifle_arx_hex_f", "", 125000, 62500, "" },//Apex DLC
				{ "lmg_zafir_f", "", 250000, 125000, "" },
				{ "srifle_dmr_05_hex_f", "", 500000, 250000, "" }, //Marksmen DLC
				{ "srifle_dmr_03_f", "", 175000, 87500, "" }, //Marksmen DLC
				{ "lmg_03_f", "", 200000, 100000, "" }, //Apex DLC
				{ "srifle_dmr_07_hex_f", "", 150000, 75000, "" }, //Apex DLC
				{ "arifle_ctars_hex_f", "", 125000, 62500, "" }, //Apex DLC
				{ "srifle_DMR_01_F", "", 150000, 75000, "" },
				{ "arifle_mxc_Black_F", "", 120000, 60000, "" },
				{ "srifle_dmr_02_f", "", 350000, 175000, "" }, //Marksmen DLC
				{ "srifle_dmr_06_olive_f", "", 150000, 75000, "" }, //Marksmen DLC
				{ "MMG_02_Black_f", "", 350000, 175000, "" }, //Marksmen DLC
				{ "launch_RPG7_F", "", 600000, 300000, "" }, //Apex DLC
				{ "srifle_LRR_F", "", 350000, 175000, "" } //Apex DLC
				};
				mags[] = {
				{ "100Rnd_65x39_caseless_mag", "", 300, 150, "" },
				{ "150Rnd_556x45_Drum_Mag_F", "", 300, 150, "" },
				{ "10rnd_762x54_mag", "", 500, 250, "" },
				{ "30Rnd_65x39_caseless_mag_Tracer", "", 500, 250, "" },
				{ "150Rnd_93x64_Mag", "", 1000, 500, "" },
				{ "10Rnd_93x64_DMR_05_Mag", "", 1000, 500, "" },
				{ "150Rnd_762x51_Box", "", 750, 375, "" },
				{ "20Rnd_762x51_Mag", "", 1000, 500, "" },
				{ "200Rnd_556x45_Box_Tracer_F", "", 1000, 500, "" },
				{ "20Rnd_650x39_Cased_Mag_F", "", 1000, 500, "" },
				{ "100Rnd_580x42_Mag_F", "",1000, 500, "" },
				{ "10Rnd_338_Mag", "", 1000, 500, "" },
				{ "29rnd_300blk_stanag_t", "", 500, 250, "" },
				{ "130Rnd_338_Mag", "", 1500, 750 "" },
				{ "20Rnd_762x51_Mag", "", 300, 150, "" },
				{ "30Rnd_556x45_Stanag", "", 300, 150, "" },
				{ "30Rnd_762x39_Mag_F", "", 700, 150, "" }, //Apex DLC
				{ "30Rnd_545x39_Mag_F", "", 300, 150, "" }, //Apex DLC
				{ "30Rnd_65x39_caseless_green", "", 275, 140, "" },
				{ "20Rnd_556x45_UW_mag", "", 125, 60, "" },
				{ "RPG7_F", "", 10000, 5000, "" },
				{ "7Rnd_408_Mag", "", 1250, 60, "" }
				};
				accs[] = {
				{ "optic_DMS", "", 10000, 5000, "" },
				{ "optic_ERCO_blk_F", "", 5000, 2500, "" },
				{ "optic_MRCO", "", 3500, 1750, "" },
				{ "optic_Nightstalker", "", 250000, 125000, "" }
				};
				};

				class hali {
				name = "Hali Weapons Goods dealer";
				side = "civ";
				conditions = "license_civ_hali";
				items[] = {
				{ "srifle_EBR_F", "", 220000, 110000, "" },
				{ "arifle_SPAR_03_blk_F", "", 180000, 90000, "" },//Apex DLC
				{ "arifle_AK12_F", "", 140000, 70000, "" }, //Apex DLC
				{ "arifle_MX_SW_F", "", 120000, 60000, "" },
				{ "arifle_MX_SW_Black_F", "", 120000, 60000, "" },
				{ "arifle_MX_SW_khk_F", "", 120000, 60000, "" }, //Apex DLC
				{ "arifle_mxm_f", "", 120000, 60000, "" },
				{ "arifle_mxm_Black_f", "", 120000, 60000, "" },
				{ "mmg_01_hex_f", "", 350000, 175000, "" }, //Marksmen DLC
				{ "arifle_mxc_F", "", 120000, 60000, "" },
				{ "mmg_01_tan_f", "", 350000, 175000, "" }, //Marksmen DL
				{ "arifle_arx_blk_f", "", 125000, 62500, "" }, //Apex DLC
				{ "arifle_arx_ghex_f", "", 125000, 62500, "" }, //Apex DLC
				{ "arifle_arx_hex_f", "", 125000, 62500, "" },//Apex DLC
				{ "lmg_zafir_f", "", 250000, 125000, "" },
				{ "srifle_dmr_05_hex_f", "", 500000, 250000, "" }, //Marksmen DLC
				{ "srifle_dmr_03_f", "", 175000, 87500, "" }, //Marksmen DLC
				{ "lmg_03_f", "", 200000, 100000, "" }, //Apex DLC
				{ "srifle_dmr_07_hex_f", "", 150000, 75000, "" }, //Apex DLC
				{ "arifle_ctars_hex_f", "", 125000, 62500, "" }, //Apex DLC
				{ "srifle_DMR_01_F", "", 150000, 75000, "" },
				{ "arifle_mxc_Black_F", "", 120000, 60000, "" },
				{ "srifle_dmr_02_f", "", 350000, 175000, "" }, //Marksmen DLC
				{ "srifle_dmr_06_olive_f", "", 150000, 75000, "" }, //Marksmen DLC
				{ "MMG_02_Black_f", "", 350000, 175000, "" }, //Marksmen DLC
				{ "launch_RPG7_F", "", 600000, 300000, "" }, //Apex DLC
				{ "srifle_LRR_F", "", 350000, 175000, "" },
				{ "arifle_TRG20_F", "", 40000, 20000, "" },
				{ "arifle_Katiba_F", "", 65000, 32500, "" },
				{ "arifle_SDAR_F", "", 10000, 5000, "" },
				{ "arifle_spar_01_blk_f", "", 60000, 30000 "" },//Apex DLC
				{ "arifle_AKS_F", "", 20000, 10000, "" }, //Apex DLC
				{ "arifle_AKM_F", "", 30000, 15000, "" }, //Apex DLC
				{ "arifle_ARX_blk_F", "", 40000, 20000, "" }, //Apex DLC
				{ "arifle_mk20_plain_f", "", 25000, 12500, "" },
				{ "arifle_SPAR_01_blk_F", "", 50000, 25000, "" }, 			//Apex DLC
				{ "arifle_CTAR_blk_F", "", 30000, 15000, "" }			//Apex DLC //Apex DLC
				};		
				mags[] = {
				{ "100Rnd_65x39_caseless_mag", "", 300, 150, "" },
				{ "150Rnd_556x45_Drum_Mag_F", "", 300, 150, "" },
				{ "10rnd_762x54_mag", "", 500, 250, "" },
				{ "30Rnd_556x45_Stanag", "", 300, 150, "" },
				{ "30Rnd_762x39_Mag_F", "", 300, 150, "" },
				{ "30Rnd_545x39_Mag_F", "", 300, 150, "" }, //Apex DLC
				{ "30Rnd_65x39_caseless_green", "", 275, 140, "" },
				{ "20Rnd_556x45_UW_mag", "", 125, 60, "" },
				{ "30Rnd_580x42_Mag_F", "", 125, 60, "" },
				{ "30Rnd_65x39_caseless_mag_Tracer", "", 500, 250, "" },
				{ "150Rnd_93x64_Mag", "", 1000, 500, "" },
				{ "10Rnd_93x64_DMR_05_Mag", "", 1000, 500, "" },
				{ "150Rnd_762x51_Box", "", 750, 375, "" },
				{ "20Rnd_762x51_Mag", "", 1000, 500, "" },
				{ "200Rnd_556x45_Box_Tracer_F", "", 1000, 500, "" },
				{ "20Rnd_650x39_Cased_Mag_F", "", 1000, 500, "" },
				{ "100Rnd_580x42_Mag_F", "",1000, 500, "" },
				{ "10Rnd_338_Mag", "", 1000, 500, "" },
				{ "29rnd_300blk_stanag_t", "", 500, 250, "" },
				{ "130Rnd_338_Mag", "", 1500, 750 "" },
				{ "20Rnd_762x51_Mag", "", 300, 150, "" },
				{ "30Rnd_556x45_Stanag", "", 300, 150, "" },
				{ "30Rnd_762x39_Mag_F", "", 700, 150, "" }, //Apex DLC
				{ "30Rnd_545x39_Mag_F", "", 300, 150, "" }, //Apex DLC
				{ "30Rnd_65x39_caseless_green", "", 275, 140, "" },
				{ "20Rnd_556x45_UW_mag", "", 125, 60, "" },
				{ "RPG7_F", "", 10000, 5000, "" },
				{ "7Rnd_408_Mag", "", 1250, 60, "" }			//Apex DLC
				};	
				accs[] = {
				{ "optic_DMS", "", 10000, 5000, "" },
				{ "optic_ERCO_blk_F", "", 5000, 2500, "" },
				{ "optic_MRCO", "", 3500, 1750, "" },
				{ "optic_Nightstalker", "", 250000, 125000, "" },
				{ "optic_ACO_grn", "", 3500, 1750, "" },
				{ "optic_Holosight", "", 3600, 1800, "" },
				{ "optic_Hamr", "", 7500, 3750, "" },
				{ "acc_flashlight", "", 1000, 500, "" }
				};
				};

				class ion {
				name = "ION Weapons Dealer";
				side = "civ";
				conditions = "license_civ_ion";
				items[] = {
				{ "srifle_EBR_F", "", 220000, 110000, "" },
				{ "arifle_SPAR_03_blk_F", "", 180000, 90000, "" },//Apex DLC
				{ "arifle_AK12_F", "", 140000, 70000, "" }, //Apex DLC
				{ "arifle_MX_SW_F", "", 120000, 60000, "" },
				{ "arifle_MX_SW_Black_F", "", 120000, 60000, "" },
				{ "arifle_MX_SW_khk_F", "", 120000, 60000, "" }, //Apex DLC
				{ "arifle_mxm_f", "", 120000, 60000, "" },
				{ "arifle_mxm_Black_f", "", 120000, 60000, "" },
				{ "mmg_01_hex_f", "", 350000, 175000, "" }, //Marksmen DLC
				{ "arifle_mxc_F", "", 120000, 60000, "" },
				{ "mmg_01_tan_f", "", 350000, 175000, "" }, //Marksmen DL
				{ "arifle_arx_blk_f", "", 125000, 62500, "" }, //Apex DLC
				{ "arifle_arx_ghex_f", "", 125000, 62500, "" }, //Apex DLC
				{ "arifle_arx_hex_f", "", 125000, 62500, "" },//Apex DLC
				{ "lmg_zafir_f", "", 250000, 125000, "" },
				{ "srifle_dmr_05_hex_f", "", 500000, 250000, "" }, //Marksmen DLC
				{ "srifle_dmr_03_f", "", 175000, 87500, "" }, //Marksmen DLC
				{ "lmg_03_f", "", 200000, 100000, "" }, //Apex DLC
				{ "srifle_dmr_07_hex_f", "", 150000, 75000, "" }, //Apex DLC
				{ "arifle_ctars_hex_f", "", 125000, 62500, "" }, //Apex DLC
				{ "srifle_DMR_01_F", "", 150000, 75000, "" },
				{ "arifle_mxc_Black_F", "", 120000, 60000, "" },
				{ "srifle_dmr_02_f", "", 350000, 175000, "" }, //Marksmen DLC
				{ "srifle_dmr_06_olive_f", "", 150000, 75000, "" }, //Marksmen DLC
				{ "MMG_02_Black_f", "", 350000, 175000, "" }, //Marksmen DLC
				{ "launch_RPG7_F", "", 600000, 300000, "" }, //Apex DLC
				{ "srifle_LRR_F", "", 350000, 175000, "" },
				{ "arifle_TRG20_F", "", 40000, 20000, "" },
				{ "arifle_Katiba_F", "", 65000, 32500, "" },
				{ "arifle_SDAR_F", "", 10000, 5000, "" },
				{ "arifle_spar_01_blk_f", "", 60000, 30000 "" },//Apex DLC
				{ "arifle_AKS_F", "", 20000, 10000, "" }, //Apex DLC
				{ "arifle_AKM_F", "", 30000, 15000, "" }, //Apex DLC
				{ "arifle_ARX_blk_F", "", 40000, 20000, "" }, //Apex DLC
				{ "arifle_mk20_plain_f", "", 25000, 12500, "" },
				{ "arifle_SPAR_01_blk_F", "", 50000, 25000, "" }, 			//Apex DLC
				{ "arifle_CTAR_blk_F", "", 30000, 15000, "" }			//Apex DLC //Apex DLC
				};		
				mags[] = {
				{ "100Rnd_65x39_caseless_mag", "", 300, 150, "" },
				{ "150Rnd_556x45_Drum_Mag_F", "", 300, 150, "" },
				{ "10rnd_762x54_mag", "", 500, 250, "" },
				{ "30Rnd_556x45_Stanag", "", 300, 150, "" },
				{ "30Rnd_762x39_Mag_F", "", 300, 150, "" },
				{ "30Rnd_545x39_Mag_F", "", 300, 150, "" }, //Apex DLC
				{ "30Rnd_65x39_caseless_green", "", 275, 140, "" },
				{ "20Rnd_556x45_UW_mag", "", 125, 60, "" },
				{ "30Rnd_580x42_Mag_F", "", 125, 60, "" },
				{ "30Rnd_65x39_caseless_mag_Tracer", "", 500, 250, "" },
				{ "150Rnd_93x64_Mag", "", 1000, 500, "" },
				{ "10Rnd_93x64_DMR_05_Mag", "", 1000, 500, "" },
				{ "150Rnd_762x51_Box", "", 750, 375, "" },
				{ "20Rnd_762x51_Mag", "", 1000, 500, "" },
				{ "200Rnd_556x45_Box_Tracer_F", "", 1000, 500, "" },
				{ "20Rnd_650x39_Cased_Mag_F", "", 1000, 500, "" },
				{ "100Rnd_580x42_Mag_F", "",1000, 500, "" },
				{ "10Rnd_338_Mag", "", 1000, 500, "" },
				{ "29rnd_300blk_stanag_t", "", 500, 250, "" },
				{ "130Rnd_338_Mag", "", 1500, 750 "" },
				{ "20Rnd_762x51_Mag", "", 300, 150, "" },
				{ "30Rnd_556x45_Stanag", "", 300, 150, "" },
				{ "30Rnd_762x39_Mag_F", "", 700, 150, "" }, //Apex DLC
				{ "30Rnd_545x39_Mag_F", "", 300, 150, "" }, //Apex DLC
				{ "30Rnd_65x39_caseless_green", "", 275, 140, "" },
				{ "20Rnd_556x45_UW_mag", "", 125, 60, "" },
				{ "RPG7_F", "", 10000, 5000, "" },
				{ "7Rnd_408_Mag", "", 1250, 60, "" }			//Apex DLC
				};	
				accs[] = {
				{ "optic_DMS", "", 10000, 5000, "" },
				{ "optic_ERCO_blk_F", "", 5000, 2500, "" },
				{ "optic_MRCO", "", 3500, 1750, "" },
				{ "optic_Nightstalker", "", 250000, 125000, "" },
				{ "optic_ACO_grn", "", 3500, 1750, "" },
				{ "optic_Holosight", "", 3600, 1800, "" },
				{ "optic_Hamr", "", 7500, 3750, "" },
				{ "acc_flashlight", "", 1000, 500, "" }
				};
				};


				class donator {
				name = "Donator VIP Weapon Store";
				side = "civ";
				conditions = "license_civ_donator";
				items[] = {
				{ "arifle_TRG20_F", "", 22500, 12500, "" },
				{ "arifle_Katiba_F", "", 30000, 15000, "" },
				{ "arifle_SDAR_F", "", 5000, 2000, "" },
				{ "srifle_EBR_F", "", 220000, 110000, "" },
				{ "arifle_SPAR_03_blk_F", "", 180000, 90000, "" },//Apex DLC
				{ "arifle_AK12_F", "", 140000, 70000, "" }, //Apex DLC
				{ "arifle_MX_SW_F", "", 120000, 60000, "" },
				{ "arifle_MX_SW_Black_F", "", 120000, 60000, "" },
				{ "arifle_MX_SW_khk_F", "", 120000, 60000, "" }, //Apex DLC
				{ "arifle_mxm_f", "", 120000, 60000, "" },
				{ "arifle_mxm_Black_f", "", 120000, 60000, "" },
				{ "mmg_01_hex_f", "", 350000, 175000, "" }, //Marksmen DLC
				{ "arifle_mxc_F", "", 120000, 60000, "" },
				{ "mmg_01_tan_f", "", 350000, 175000, "" }, //Marksmen DLC
				{ "arifle_arx_blk_f", "", 125000, 62500, "" }, //Apex DLC
				{ "arifle_arx_ghex_f", "", 125000, 62500, "" }, //Apex DLC
				{ "arifle_arx_hex_f", "", 125000, 62500, "" },//Apex DLC
				{ "lmg_zafir_f", "", 250000, 125000, "" },
				{ "srifle_dmr_05_hex_f", "", 500000, 250000, "" }, //Marksmen DLC
				{ "srifle_dmr_03_f", "", 175000, 87500, "" }, //Marksmen DLC
				{ "lmg_03_f", "", 200000, 100000, "" }, //Apex DLC
				{ "srifle_dmr_07_hex_f", "", 150000, 75000, "" }, //Apex DLC
				{ "arifle_ctars_hex_f", "", 125000, 62500, "" }, //Apex DLC
				{ "srifle_DMR_01_F", "", 150000, 75000, "" },
				{ "arifle_mxc_Black_F", "", 120000, 60000, "" },
				{ "srifle_dmr_02_f", "", 350000, 175000, "" }, //Marksmen DLC
				{ "srifle_dmr_06_olive_f", "", 150000, 75000, "" }, //Marksmen DLC
				{ "MMG_02_Black_f", "", 350000, 175000, "" }, //Marksmen DLC
				{ "launch_RPG7_F", "", 600000, 300000, "" }, //Apex DLC
				{ "srifle_LRR_F", "", 350000, 175000, "" } //Apex DLC//Apex DLC			//Apex DLC
				};	
				mags[] = {
				{ "30Rnd_556x45_Stanag", "", 300, 150, "" },
				{ "30Rnd_762x39_Mag_F", "", 700, 150, "" }, //Apex DLC
				{ "30Rnd_545x39_Mag_F", "", 300, 150, "" }, //Apex DLC
				{ "30Rnd_65x39_caseless_green", "", 275, 140, "" },
				{ "20Rnd_556x45_UW_mag", "", 125, 60, "" },
				{ "30Rnd_580x42_Mag_F", "", 125, 60, "" },
				{ "30Rnd_556x45_Stanag", "", 300, 150, "" },
				{ "30Rnd_762x39_Mag_F", "", 700, 150, "" }, //Apex DLC
				{ "RPG7_F", "", 10000, 5000, "" },
				{ "7Rnd_408_Mag", "", 1250, 60, "" },
				{ "5Rnd_127x108_Mag", "", 1250, 60, "" },
				{ "100Rnd_65x39_caseless_mag", "", 300, 150, "" },
				{ "150Rnd_556x45_Drum_Mag_F", "", 300, 150, "" },
				{ "10rnd_762x54_mag", "", 500, 250, "" },
				{ "30Rnd_65x39_caseless_mag_Tracer", "", 500, 250, "" },
				{ "150Rnd_93x64_Mag", "", 1000, 500, "" },
				{ "10Rnd_93x64_DMR_05_Mag", "", 1000, 500, "" },
				{ "150Rnd_762x51_Box", "", 750, 375, "" },
				{ "20Rnd_762x51_Mag", "", 1000, 500, "" },
				{ "200Rnd_556x45_Box_Tracer_F", "", 1000, 500, "" },
				{ "20Rnd_650x39_Cased_Mag_F", "", 1000, 500, "" },
				{ "100Rnd_580x42_Mag_F", "",1000, 500, "" },
				{ "10Rnd_338_Mag", "", 1000, 500, "" },
				{ "29rnd_300blk_stanag_t", "", 500, 250, "" },
				{ "130Rnd_338_Mag", "", 1500, 750 "" },
				{ "20Rnd_762x51_Mag", "", 300, 150, "" },
				{ "30Rnd_556x45_Stanag", "", 300, 150, "" },
				{ "30Rnd_762x39_Mag_F", "", 700, 150, "" }, //Apex DLC
				{ "30Rnd_545x39_Mag_F", "", 300, 150, "" }, //Apex DLC
				{ "30Rnd_65x39_caseless_green", "", 275, 140, "" },
				{ "20Rnd_556x45_UW_mag", "", 125, 60, "" },
				{ "RPG7_F", "", 10000, 5000, "" },
				{ "7Rnd_408_Mag", "", 1250, 60, "" }		//Apex DLC
				};	
				accs[] = {
				{ "optic_ACO_grn", "", 3500, 1750, "" },
				{ "optic_Holosight", "", 3600, 1800, "" },
				{ "optic_Hamr", "", 7500, 3750, "" },
				{ "acc_flashlight", "", 1000, 500, "" },
				{ "optic_DMS", "", 10000, 5000, "" },
				{ "optic_ERCO_blk_F", "", 5000, 2500, "" },
				{ "optic_MRCO", "", 3500, 1750, "" },
				{ "optic_Nightstalker", "", 250000, 125000, "" }
				};
				};

				class SCO19 {
				name = "SCO19 Weapon Shop";
				side = "cop";
				conditions = "license_cop_sco19";
				items[] = {
				{ "Rangefinder", "", 25, 20, "" },
				{ "ItemGPS", "", 75, 50, "" },
				{ "FirstAidKit", "", 100, 55, "" },
				{ "pmc_earpiece", "", 100, 50, "" },
				{ "HandGrenade_Stone", $STR_W_items_Flashbang, 100, 50, "" },
				{ "SmokeShell", "", 100, 50, "" },
				{ "RH_M4A6", "", 100, 50, "" },
				{ "RH_Mk11", "", 100, 50, "" },
				{ "RH_M4_ris", "", 500, 250, "" }
				};
				mags[] = {
				{ "RH_20Rnd_762x51_Mk316LR", "", 100, 50, "" },
				{ "RH_30Rnd_556x45_Mk318", "", 100, 50, "" },
				{ "RH_30Rnd_68x43_Match", "", 100, 50, "" }
				};
				accs[] = {
				{ "muzzle_snds_M", "", 150, 75, "" },
				{ "RH_saker", "", 150, 75, "" },
				{ "bipod_01_F_blk", "", 250, 100, "" },
				{ "acc_pointer_IR", "", 250, 100, "" },
				{ "FHG_optic_ACOG", "", 300, 150, "" }
				};
				};

				class Undercover {
				name = "Undercover Weapon Shop";
				side = "cop";
				conditions = "license_cop_undercover";
				items[] = {
				{ "Binocular", "", 25, 20, "" },
				{ "ItemGPS", "", 75, 50, "" },
				{ "FirstAidKit", "", 100, 55, "" },
				{ "pmc_earpiece", "", 100, 50, "" },
				{ "arifle_SPAR_01_blk_F", "", 100, 50, "" },
				{ "HandGrenade_Stone", $STR_W_items_Flashbang, 100, 50, "" },
				{ "RH_kimber_nw", "", 500, 250, "" }
				};
				mags[] = {
				{ "RH_7Rnd_45cal_m1911", "", 100, 50, "" },
				{ "30Rnd_556x45_Stanag_red", "", 100, 50, "" }
				};
				accs[] = {
				{ "muzzle_snds_L", "", 250, 100, "" },
				{ "muzzle_snds_M", "", 250, 100, "" },
				{ "muzzle_snds_H", "", 250, 100, "" },
				{ "optic_Arco", "", 650, 325, "" },
				{ "optic_Holosight", "", 650, 325, "" },
				{ "optic_Aco", "", 650, 325, "" },
				{ "optic_MRD", "", 1000, 500, "" },
				{ "acc_flashlight", "", 750, 375, "" },
				{ "optic_Holosight", "", 1200, 600, "" },
				{ "optic_SOS", "", 1500, 1050, "" },
				{ "muzzle_snds_H", "", 250, 100, "" }
				};
				};

				class gang {
				name = "Hideout Armament";
				side = "civ";
				conditions = "";
				items[] = {
				{ "hgun_Rook40_F", "", 1500, 750, "" },
				{ "hgun_Pistol_heavy_02_F", "", 2500, 1250, "" },
				{ "hgun_ACPC2_F", "", 4500, 2250, "" },
				{ "smg_01_f", "", 15000, 7500, ""},
				{ "hgun_pistol_heavy_01_f", "", 7000, 3500 "" },
				{ "hgun_PDW2000_F", "", 9500, 4750, "" }
				};
				mags[] = {
				{ "16Rnd_9x21_Mag", "", 125, 60, "" },
				{ "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
				{ "30rnd_556x45_stanag", "", 1000, 500, "" },
				{ "9Rnd_45ACP_Mag", "", 200, 100, "" },
				{ "11Rnd_45ACP_Mag", "", 250, 125, "" },
				{ "30Rnd_45ACP_Mag_SMG_01", "", 500, 250, "" },
				{ "30Rnd_9x21_Mag", "", 250, 125, "" }
				};
				accs[] = {
				{ "muzzle_snds_acp", "", 1500, 1250, "" },
				{ "optic_ACO_grn_smg", "", 950, 475, "" }
				};
				};

				//Basic Shops
				class genstore {
				name = "Altis General Store";
				side = "civ";
				conditions = "";
				items[] = {
				{ "Binocular", "", 150, 75, "" },
				{ "ItemGPS", "", 100, 50, "" },
				{ "ItemMap", "", 50, 25, "" },
				{ "ItemCompass", "", 50, 25, "" },
				{ "ItemWatch", "", 50, 25, "" },
				{ "FirstAidKit", "", 150, 75, "" },
				{ "NVGoggles", "", 2000, 1000, "" },
				{ "Chemlight_red", "", 300, 150, "" },
				{ "Chemlight_yellow", "", 300, 150, "" },
				{ "Chemlight_green", "", 300, 150, "" },
				{ "Chemlight_blue", "", 300, 150, "" },
				{ "tf_anprc152", "", 500, 150, "" }
				};
				mags[] = {};
				accs[] = {};
				};

				class f_station_store {
				name = "Altis Fuel Station Store";
				side = "";
				conditions = "";
				items[] = {
				{ "Binocular", "", 750, 75, "" },
				{ "ItemGPS", "", 500, 50, "" },
				{ "ItemMap", "", 250, 25, "" },
				{ "ItemCompass", "", 250, 25, "" },
				{ "ItemWatch", "", 250, 25, "" },
				{ "FirstAidKit", "", 750, 75, "" },
				{ "NVGoggles", "", 1000, 100, "" },
				{ "Chemlight_red", "", 1500, 150, "" },
				{ "Chemlight_yellow", "", 1500, 150, "" },
				{ "Chemlight_green", "", 1500, 150, "" },
				{ "Chemlight_blue", "", 1500, 150, "" }
				};
				mags[] = {};
				accs[] = {};
				};

				//Cop Shops
				class cop_basic {
				name = "Altis Cop Shop";
				side = "cop";
				conditions = "";
					
				items[] = {
				{ "Binocular", "", 25, 20, "call life_coplevel >= 0" },
				{ "ItemGPS", "", 75, 50, "call life_coplevel >= 0" },
				{ "FirstAidKit", "", 100, 55, "call life_coplevel >= 0" },
				{ "pmc_earpiece", "", 100, 50, "call life_coplevel >= 0" },
				{ "RH_p226", "", 50, 25, "call life_coplevel >= 1" },
				{ "RH_m9", "", 50, 25, "call life_coplevel >= 1" },
				{ "hlc_smg_mp5a4", "", 50, 25, "call life_coplevel >= 3" },
				{ "tf_anprc152", "", 500, 150, "" },
				{ "RH_fn57_t", "", 50, 25, "call life_coplevel >= 1" }			
				};
				mags[] = {
				{ "RH_15Rnd_9x19_M9", "", 50, 25, "call life_coplevel >= 1" },
				{ "RH_15Rnd_9x19_SIG", "", 50, 25, "call life_coplevel >= 1" },
				{ "hlc_30Rnd_9x19_B_MP5", "", 50, 25, "call life_coplevel >= 1" },
				{ "RH_20Rnd_57x28_FN", "", 50, 25, "call life_coplevel >= 1" }

				};
				accs[] = {
				{ "FHQ_optic_AC11704", "", 250, 100, "call life_coplevel >= 3" },
				{ "muzzle_snds_L", "", 250, 100, "call life_coplevel >= 3" }

				};
				};

				/**** Cop ACC Shop starter her ****/
				class cop_acc {
				name = "Cop acc";
				side = "";
				conditions = "";	
				items[] = {
				{ "muzzle_snds_L", "", 250, 100, "" },
				{ "RH_saker", "", 250, 100, "" },
				{ "bipod_01_F_blk", "", 250, 100, "" },
				{ "FHQ_optic_ACOG", "", 250, 100, "" },
				{ "muzzle_snds_M", "", 250, 100, "" },
				{ "acc_pointer_IR", "", 250, 100, "" },
				{ "RH_leu_mk4", "", 250, 100, "" },
				{ "RH_m110sd", "", 250, 100, "" },
				{ "FHQ_optic_AC11704", "", 350, 150, "" }
				};
				mags[] = {};
				accs[] = {};
				};


				//Medic Shops
				class med_basic {
				name = "store";
				side = "med";
				conditions = "";	
				items[] = {
				{ "ItemGPS", "", 100, 50, "" },
				{ "Binocular", "", 150, 75, "" },
				{ "ItemCompass", "", 250, 25, "" },
				{ "ItemWatch", "", 250, 25, "" },
				{ "FirstAidKit", "", 150, 75, "" },
				{ "NVGoggles", "", 1200, 600, "" },
				{ "Chemlight_red", "", 1500, 150, "" },
				{ "Chemlight_yellow", "", 1500, 150, "" },
				{ "Chemlight_green", "", 1500, 150, "" },
				{ "tf_anprc152", "", 500, 150, "" },
				{ "Chemlight_blue", "", 1500, 150, "" }
				};
				mags[] = {};
				accs[] = {};
				};
				};
