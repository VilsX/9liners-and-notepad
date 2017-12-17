/* ----------------------------------------------------------------------------
Function: nln_fnc_sharePageReceived

Description:
    The destination function for the function nln_fnc_sharePage.
	Is called by execution from another player.

Parameters:
	_unit - the sender player <OBJNULL>
	_type - a predefined type <STRING>
    _values - values to append to a sheet variable <ARRAY>

Returns:

Examples:
    (begin example)
    (end)

Author:
    TheMysteriousVincent
---------------------------------------------------------------------------- */

params [
	["_unit", objNull, [objNull]],
	["_type", "", [""]],
	["_values", [], [[]]]
];

if (isNull _unit || !isPlayer _unit) exitWith {};

if ([_type, _values] call nln_fnc_addPage) then
{
	hint (format["You got a new page from %1", profileName]);
};