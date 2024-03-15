modded class MissionGameplay
{
	override void OnUpdate(float timeslice)
	{
		super.OnUpdate(timeslice);
		
		PPERequester_TacticalGoggles req = PPERequester_TacticalGoggles.Cast(PPERequesterBank.GetRequester(PPERequester_TacticalGoggles));
		if (!req) {
			return;
		}
		
		req.Start();
	}
}