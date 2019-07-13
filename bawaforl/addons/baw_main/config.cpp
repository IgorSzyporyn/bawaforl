#define _ARMA_

class CfgPatches
{
	class baw_main
	{
		units[] = {"baw_Flag_ORL"};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"A3_Structures_F_Mil_Flags"};
		author = "$STR_BAW_AUTHOR_FULL";
		url = "http://baw.badgers.community";
		authorUrl = "http://baw.badgers.community";
		versionDesc = "BAW";
		text = "Dunno bout this one";
	};
};

class CfgMods
{
	class Mod_Base;
	class BAW_FAC_ORL: Mod_Base
	{
		author = "$STR_BAW_AUTHOR_FULL";
		picture = "\bawaforl\addons\baw_main\data\logo.paa";
		logo = "\bawaforl\addons\baw_main\data\logo.paa";
		logoOver = "\bawaforl\addons\baw_main\data\logo.paa";
		logoSmall = "\bawaforl\addons\baw_main\data\logo.paa";
		dlcColor[] = {0,0,0,1};
		fieldManualTopicAndHint[] = {"BAW_FAC_ORL","BAW_FAC_ORL_MAIN"};
		hideName = 1;
		hidePicture = 0;
		tooltip = "$STR_BAW_PRODUCT_TOOLTIP";
		tooltipOwned = "$STR_BAW_PRODUCT_TOOLTIP_OWNED";
		name = "$STR_BAW_PRODUCT_NAME";
		overview = "$STR_BAW_PRODUCT_OVERVIEW";
		action = "http://baw.badgers.community/action";
		dir = "bawaforl";
	};
};