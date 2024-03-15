class CfgPatches
{
	class DD_Stuff
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","ModularVestSystem","DZ_Sounds_Effects","DZ_Gear_Camping","BaseBuildingPlus","DZ_Characters","DZ_Scripts","DZ_Data"};
	};
};
class CfgMods
{
	class DD_Stuff
	{
		dir = "DD_Stuff";
		hideName = 1;
		hidePicture = 1;
		name = "DD_Stuff";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"DD/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"DD/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"DD/Scripts/5_Mission"};
			};
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class PowerGenerator: Inventory_Base
	{
		fuelTankCapacity = 100000;
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOff = 1;
			energyStorageMax = 100000;
			energyUsagePerSecond = 1e-06;
			reduceMaxEnergyByDamageCoef = 0.5;
			energyAtSpawn = 100000;
			powerSocketsCount = 4;
			compatiblePlugTypes[] = {2,6};
		};
	};
	class Bottle_Base;
	class CanisterGasoline: Bottle_Base
	{
		varQuantityInit = 100000;
		varQuantityMin = 0;
		varQuantityMax = 100000;
	};
	class ItemOptics_Base;
	class StarlightOptic: ItemOptics_Base
	{
		inventorySlot[] = {"weaponOpticsHunting","weaponOptics","sniperOptics"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 800;
				};
			};
		};
	};
	class BBP_DOOR_BASE;
	class BBP_BWindow: BBP_DOOR_BASE
	{
		scope = 2;
		attachments[] = {"BBP_Wallpaper","Wall_BarbedWire_1","Wall_BarbedWire_2","Material_BBP_Concrete_Brick_Pile","Material_Mortar","Lights","Wall_Camonet","Wall_Flashlight","Material_Nails","Material_FPole_WoodenLog2","Material_WoodenPlanks","Material_MetalSheets","Material_Wallpaper_01","Material_Wallpaper_02","Material_Wallpaper_03","Material_Wallpaper_04","Material_Wallpaper_05","Material_Wallpaper_06","Material_Wallpaper_07","Material_Wallpaper_08"};
	};
	class BBP_SWindow: BBP_DOOR_BASE
	{
		scope = 2;
		attachments[] = {"Material_BBP_Concrete_Brick_Pile","Material_Mortar","Material_Nails","Material_FPole_WoodenLog2","Material_WoodenPlanks","Material_MetalSheets"};
	};
	class Clothing;
	class FeetCover_Improvised: Clothing
	{
		durability = 0.5;
	};
	class CombinationLock;
	class CodeLock: CombinationLock
	{
		itemSize[] = {2,2};
	};
	class Container_Base;
	class Barrel_ColorBase: Container_Base
	{
		itemSize[] = {6,10};
	};
	class GhillieSuit_ColorBase: Clothing
	{
		inventorySlot[] = {"Back","Hips"};
		itemInfo[] = {"Clothing","Hips"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1200;
				};
			};
		};
	};
	class M65Jacket_ColorBase: Clothing
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10000;
				};
			};
		};
	};
	class TrackSuitJacket_ColorBase: Clothing
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10000;
				};
			};
		};
	};
	class TrackSuitPants_ColorBase: Clothing
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10000;
				};
			};
		};
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class powerGeneratorLoop_Soundshader: baseCharacter_SoundShader
	{
		volume = 0.05;
		range = 20;
	};
	class powerGeneratorTurnOn_Soundshader: baseCharacter_SoundShader
	{
		volume = 0.1;
		range = 20;
	};
	class powerGeneratorTurnOff_Soundshader: baseCharacter_SoundShader
	{
		volume = 0.1;
		range = 20;
	};
};

