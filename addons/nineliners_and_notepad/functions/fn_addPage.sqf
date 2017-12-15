
params [
    ["_type", "", [""]],
    ["_values", [], [[]]]
];

//nln_availableTypes = all available page/sheet types

if !(_type in nln_availableTypes) exitWith { false; };
if ((count _values) <= 0) exitWith { false; };

private _namespaceVar = (format["nln_pages_%1", _type]);
private _hash = (profileNamespace getVariable [_namespaceVar, []]);

if !([_hash] call CBA_fnc_isHash) exitWith {};

private _keys = ([_hash] call CBA_fnc_hashKeys);

private _id = -1;
while
{
    !(_id in _keys)
}
do
{
    _id = _id + 1;
};

profileNamespace setVariable [_namespaceVar, ([_hash, _id, _values] call CBA_fnc_hashSet)];
//maybe save. But its slow as hell! -> saveProfileNamespace;