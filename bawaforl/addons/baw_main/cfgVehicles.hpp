class CfgVehicles
{
    class Flag_White_F;
    class baw_Flag_ORL: Flag_White_F
    {
        author = "$STR_BAW_AUTHOR_FULL";
        displayName = "$STR_BAW_FLAG_ORL";
        scope = 2;
        scopeCurator = 2;

		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\bawaforl\addons\baw_main\data\flag\flag_512_orl.paa'";
		};
    };
};
