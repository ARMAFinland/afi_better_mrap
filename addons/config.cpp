class CfgPatches {
	class afi_better_rhs_mrap {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhsusf_c_rg33"};
	};
};

class CfgVehicles {
	class MRAP_01_base_F;
	class rhsusf_rg33_base: MRAP_01_base_F {
		armor = 100;
	};	
};


class cfgMods {
	author = "Johnson";
	authorUrl = "www.armafinland.fi";
};