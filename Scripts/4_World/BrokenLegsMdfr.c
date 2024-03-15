modded class BrokenLegsMdfr: ModifierBase
{
	private const 	float	HEALTHY_LEG = 0; //Health at which legs are no longer considered broken
	
	override bool  ActivateCondition(PlayerBase player)
	{
		return false;
	}
	
	override void OnActivate(PlayerBase player)
	{
		player.SetBrokenLegs(eBrokenLegs.NO_BROKEN_LEGS);
	}
};