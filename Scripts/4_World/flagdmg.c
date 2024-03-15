modded class Flag_Base
{
    void Flag_Base()
    {
        if ( GetGame().IsServer() )
        {
            this.SetAllowDamage(false);
        }
    }
}