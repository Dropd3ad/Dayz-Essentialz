modded class MissionServer
{
    override void OnInit()
    {
        super.OnInit();

        if(GetGame().IsServer())
        {
            #ifdef GAMELABS
            GetGameLabs().AddMonitoredAction("ActionDismantleBBP");
            #endif
        }
    }
};
