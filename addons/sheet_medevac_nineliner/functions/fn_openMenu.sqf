
if (!nln_medevac_nineliner_disable) then
{
    call nln_medevac_nineliner_fnc_closeBackground;
    closeDialog 0;
    private _lP = (profileNamespace getVariable ["nln_medevac_nineliner_currentPage", -1]);

    createDialog "nln_medevac_nineliner";

    [_lP] call nln_medevac_nineliner_fnc_updateMenu;
};
