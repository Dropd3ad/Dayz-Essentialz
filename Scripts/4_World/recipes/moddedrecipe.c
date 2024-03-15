modded class PluginRecipesManagerBase extends PluginBase
{
	void RegisterRecipies()
	{
		super.RegisterRecipies();
		// ---VANILLA AMMO---
		RegisterRecipe(new Repack9MM_VANILLA);
		RegisterRecipe(new Repack9x39MM_VANILLA);
		RegisterRecipe(new Repack9x39AP_VANILLA);
		RegisterRecipe(new Repack357_VANILLA);
		RegisterRecipe(new Repack12GA_VANILLA);
		RegisterRecipe(new Repack12GA_SLUG_VANILLA);
		RegisterRecipe(new Repack12GA_RUBBERSLUG_VANILLA);
		RegisterRecipe(new Repack12GA_BEANBAG_VANILLA);
		RegisterRecipe(new Repack22LR_VANILLA);
		RegisterRecipe(new Repack308WIN_VANILLA);
		RegisterRecipe(new Repack308WIN_TRACER_VANILLA);
		RegisterRecipe(new Repack380ACP_VANILLA);
		RegisterRecipe(new Repack45ACP_VANILLA);
		RegisterRecipe(new Repack545x39MM_VANILLA);
		RegisterRecipe(new Repack545x39MM_TRACER_VANILLA);
		RegisterRecipe(new Repack556x49MM_VANILLA);
		RegisterRecipe(new Repack556x49MM_TRACER_VANILLA);
		RegisterRecipe(new Repack762x39MM_VANILLA);
		RegisterRecipe(new Repack762x39MM_TRACER_VANILLA);
		RegisterRecipe(new Repack762x54MM_VANILLA);
		RegisterRecipe(new Repack762x54MM_TRACER_VANILLA);
		// ---END VANILLA AMMO---
	}
};