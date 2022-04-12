class CfgPatches {
	class keko_intercept_test { //Change this
		name = "Kellerkompanie Intercept Test"; //Change this
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.82;
		requiredAddons[] = {"intercept_core"};
		author = "Schwaggot"; //Change this
		authors[] = {"Schwaggot"}; //Change this
		url = "https://github.com/Schwaggot/intercept-test"; //Change this
		version = "1.0";
		versionStr = "1.0";
		versionAr[] = {1,0};
	};
};
class Intercept {
    class keko { //Change this. It's either the name of your project if you have more than one plugin. Or just your name.
        class intercept_test { //Change this.
            pluginName = "keko_intercept_test"; //Change this.
        };
    };
};
