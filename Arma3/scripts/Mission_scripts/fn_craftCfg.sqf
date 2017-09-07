#include <macro.h>/*  
 File: fn_craftCfg.sqf 
 Author: EdgeKiller   
 edited by Justin Perez 
 Description:   
 Master configuration file for the crafting menu.
 */private["_craft","_return"];_craft = [_this,0,"",[""]] call BIS_fnc_param;if(_craft == "") exitWith {closeDialog 0}; 
 //Bad shop type passed.switch(_craft) 
 
 /*Våben starter her */
 
 do { case "weapon":  {  _return = [  
 
 [Object classname, [item #1,quantity item #1,item #2,quantity item #2]],]        
 ["hgun_P07_F", ["life_inv_goldbar",2,"life_inv_copperr",1]];      
 
 [Object classname, [item #1,quantity item #1,item #2,quantity item #2]],]  
 ["hgun_Pistol_heavy_02_F", ["life_inv_goldbar",1,"life_inv_copperr",1,"life_inv_ironr",3]];  
 
 [Object classname, [item #1,quantity item #1,item #2,quantity item #2]],]     
 ["arifle_Mk20_F02_F", ["life_inv_goldbar",1,"life_inv_copperr",1,"life_inv_ironr",3,"life_inv_diamondr",4]]; ];   
 
 if(__GETC__(life_adminlevel) > 0) then  {  _return pushBack 
 ["SMG_01_F", ["life_inv_goldbar",6,"life_inv_copperr",3,"life_inv_ironr",3,"life_inv_diamondr",1]];  };    
 
 ]; 
 };  
 
  /*Våben slutter her */

 
 /*Uniformer starter her */

 
 case "uniform":  
 { _return = [ [Object classname, [item #1,quantity item #1,item #2,quantity item #2]],]    
 ["U_IG_Guerilla1_1", ["life_inv_goldbar",1]];  
 [Object classname, [item #1,quantity item #1,item #2,quantity item #2]],]  
 ["Item_U_OG_Guerilla3_2", ["life_inv_goldbar",2,"life_inv_diamondr",5]];   
 ]; };   
 
 /*Uniformer slutter her */

 /*backpack starter her */
 
 case "backpack":  
 { _return = [ [Object classname, [item #1,quantity item #1,item #2,quantity item #2]],]  
 ["B_Carryall_oli", ["life_inv_goldbar",1]]; 
 [Object classname, [item #1,quantity item #1,item #2,quantity item #2]],]  
 ["B_Carryall_cbr", ["life_inv_goldbar",1,"life_inv_diamondr",4]]  
 ]; };  
 
  /*Items starter her */
  
 case "item":
 { _return = [ [Object classname, [item #1,quantity item #1,item #2,quantity item #2]],]   
 ["life_inv_pickaxe", ["life_inv_goldbar",1]],    
 ["life_inv_goldbar", ["life_inv_goldbar",1,"life_inv_copperr",1]]  ];    };};_return; 
 
 /*Slutter starter her */

