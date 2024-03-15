modded class DayZPlayerImplement extends DayZPlayer 
{
    override void ShowDeadScreen(bool show, float duration)
    {    
        #ifndef NO_GUI
            if ( show && IsPlayerSelected() )
            {
            #ifdef PLATFORM_CONSOLE
                GetGame().GetUIManager().ScreenFadeIn(duration, "", FadeColors.DARK_RED, FadeColors.WHITE);
            #else
                GetGame().GetUIManager().ScreenFadeIn(duration, "", FadeColors.BLACK, FadeColors.WHITE);
                GetGame().GetUIManager().EnterScriptedMenu(MENU_INGAME, null);     
            #endif
            }
            else
            {
                GetGame().GetUIManager().ScreenFadeOut(0);
            }
            
            if (duration > 0)
            {
                GetGame().GetCallQueue( CALL_CATEGORY_GUI ).CallLater( StopDeathDarkeningEffect, duration*1000, false );
                m_ShowDeadScreen = true;
            }
            else
            {
                GetGame().GetCallQueue( CALL_CATEGORY_GUI ).Call( StopDeathDarkeningEffect );
                m_ShowDeadScreen = false;
            }
        #endif
    }
};