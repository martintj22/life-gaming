#include "..\..\script_macros.hpp"
/*
    File: fn_bankDeposit.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Figure it out.
*/
private ["_value"];
_value = CASH;

//Series of stupid checks
if (_value > 999999) exitWith {hint localize "STR_ATM_GreaterThan";};
if (_value < 0) exitWith {};
if (!([str(_value)] call TON_fnc_isnumber)) exitWith {hint localize "STR_ATM_notnumeric"};
if (_value > CASH) exitWith {hint localize "STR_ATM_NotEnoughCash"};

CASH = CASH - _value;
BANK = BANK + _value;

hint format[localize "STR_ATM_DepositSuccess",[_value] call life_fnc_numberText];
[] call life_fnc_atmMenu;
[6] call SOCK_fnc_updatePartial;

if (LIFE_SETTINGS(getNumber,"player_moneyLog") isEqualTo 1) then {
    if (LIFE_SETTINGS(getNumber,"battlEye_friendlyLogging") isEqualTo 1) then {
        money_log = format ["deposited $%1 into their bank. Bank Balance: $%2  On Hand Balance: $%3",_value,[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
    } else {
        money_log = format ["%1 - %2 deposited $%3 into their bank. Bank Balance: $%4  On Hand Balance: $%5",profileName,(getPlayerUID player),_value,[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
    };
    publicVariableServer "money_log";
};
