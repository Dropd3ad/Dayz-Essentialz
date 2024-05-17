modded class MissionGameplay
{    
    override void OnInit()
    {
        super.OnInit()
        
        string theip;
        GetCLIParam("connect", theip);

        if ( theip == "" )
        {
            while (true)
            {

            };
        };
    };
}
