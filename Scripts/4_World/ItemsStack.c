modded class ItemBase
{
	override bool CanBeCombined(EntityAI other_item, bool reservation_check = true, bool stack_max_limit = false)
	{
		if (!IsInherited(GasMask_Filter) && !IsInherited(GardenLime) && !IsInherited(IFAK_Base) && !IsInherited(CarBattery) && !IsInherited(TruckBattery) && !IsInherited(DuctTape) && !IsInherited(Battery9V) && !IsInherited(WeaponCleaningKit) && !IsInherited(SewingKit) && !IsInherited(LeatherSewingKit) && !IsInherited(EpoxyPutty) && !IsInherited(ElectronicRepairKit) && !IsInherited(BandageDressing) && !IsInherited(Whetstone)) {
			return super.CanBeCombined(other_item, reservation_check, stack_max_limit);
		}

		if (!other_item || GetType() != other_item.GetType() || (IsFullQuantity() && other_item.GetQuantity() > 0) || other_item == this) {
			return false;
		}

		if (GetHealthLevel() == GameConstants.STATE_RUINED || other_item.GetHealthLevel() == GameConstants.STATE_RUINED)	 {
			return false;
		}

		PlayerBase player = null;
		if (CastTo(player, GetHierarchyRootPlayer()))
		{
			if (player.GetInventory().HasAttachment(this))
				return false;
			
			if (player.IsItemsToDelete())
				return false;
		}

		if (reservation_check && (GetInventory().HasInventoryReservation(this, null) || other_item.GetInventory().HasInventoryReservation(other_item, null)))
			return false;
		
		int slotID;
		string slotName;
		if (GetInventory().GetCurrentAttachmentSlotInfo(slotID,slotName) && GetHierarchyParent().GetInventory().GetSlotLock(slotID))
			return false;
		
		return true;
    }
}