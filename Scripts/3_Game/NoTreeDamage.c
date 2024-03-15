modded class Plant
{
    void Plant()
    {
        if (GetGame().IsServer()) {
			SetAllowDamage(false);
		}
    }
}