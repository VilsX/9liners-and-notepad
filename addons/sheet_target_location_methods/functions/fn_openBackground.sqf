
if (!nln_target_location_methods_disable) then
{
    if (isNull (uiNamespace getVariable ["nln_target_location_methods", displayNull])) then
    {
        "nln_target_location_methods" cutRsc ["nln_target_location_methods", "PLAIN"];
    };
};
