modded class MissionGameplay
{
    //all units are in meters
    int m_ViewDistance            = 1250;
    int m_PreferredViewDistanc = 1250;
    int m_ObjectViewDistance   = 1200;

    override void OnUpdate(float timeslice)
    {
        super.OnUpdate(timeslice);
        GetGame().GetWorld().SetViewDistance(m_ViewDistance);
        GetGame().GetWorld().SetPreferredViewDistance(m_PreferredViewDistanc);
        GetGame().GetWorld().SetObjectViewDistance(m_ObjectViewDistance);
    }

    override void OnMissionStart()
    {
        super.OnMissionStart();
        string param;
        GetCLIParam("potatomode", param);
        param.ToLower();

        if (param == "true" || param == "1")
        {
            //sets lower numbers for clients who add -potatomode 1 OR -potatomode true to their startup parameters
            m_ViewDistance            = 1250;
            m_PreferredViewDistanc = 1250;
            m_ObjectViewDistance   = 1200;
            Print("Potato mode enabled! View distance tweaked.");
        }
    }
};