modded class PowerGenerator
{

	override void StartLoopSound()
	{
		if ( GetGame().IsClient()  ||  !GetGame().IsMultiplayer() )
		{
			if ( GetCompEM().IsWorking() )
			{ PlaySoundSetLoop( m_EngineLoop, LOOP_SOUND, 0, 0 );}
		}
	}
}