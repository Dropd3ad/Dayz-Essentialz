modded class ActionDestroyBBP
{
	//OVERRIDE FOR NO WINDOW DESTROY
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		Object targetObject = target.GetObject();
		
		if (player.GetBrokenLegs() == eBrokenLegs.BROKEN_LEGS)
			return false;
		
		if (targetObject && !targetObject.IsInherited(BBP_BASE))
		{
			return false;
		}
		
		if (targetObject && targetObject.IsInherited(BBP_BASE))
		{
			BBP_BASE bbpbase = BBP_BASE.Cast(targetObject);
			
			if ( bbpbase && bbpbase.isDismantle() )
			{
				return false;
			}
			
			if ( bbpbase && bbpbase.DisableDestroyBBP() )
			{
				return false;
			}

			if ( getDisableDestroyBBP() == 1 )
			{
				return false;
			}
			
			if ( bbpbase && bbpbase.DisableDestroyBBP() )
			{
				return false;
			}
			
			if (bbpbase && bbpbase.BBPGetTier() != 69)
			{	
				if(!bbpbase.isflat() && !bbpbase.HasProperDistanceBBP( "inside", player) || (bbpbase.isflat() && !bbpbase.HasProperDistanceFlatBBP( "inside", player)))
				{
					//door raid
					if ( getBaseRaidOnlyDoorsBBP() == 1 )
					{
						if(bbpbase && bbpbase.IsBBPGate() && !bbpbase.isWindow()) //ONLY LINE THAT WAS CHANGED
						{
							if(bbpbase.BBPGetTier() == 3)
							{
								if ( !HasRaidToolT3(item, target) )
								{
									return false;
								}
								
								SetCustomText(bbpbase.PartGetBBP());
								return true;
							}
							
							//t2
							else if(bbpbase.BBPGetTier() == 2)
							{
								if ( !HasRaidToolT2(item, target) )
								{
									return false;
								}
								
								SetCustomText(bbpbase.PartGetBBP());
								return true;
							}
							
							//t1
							else if(bbpbase.BBPGetTier() == 1)
							{
								if ( !HasRaidToolT1(item, target) )
								{
									return false;
								}
								
								SetCustomText(bbpbase.PartGetBBP());
								return true;
							}
							
							//door only built
							else if(bbpbase.BBPGetTier() == 0)
							{
								if ( !HasRaidToolT1(item, target) )
								{
									return false;
								}
								
								SetCustomText(bbpbase.PartGetBBP());
								return true;
							}								
						}
						return false;	
					}					

					//t3
					if(bbpbase.BBPGetTier() == 3)
					{
						if ( !HasRaidToolT3(item, target) )
						{
							return false;
						}
						
						SetCustomText(bbpbase.PartGetBBP());
						return true;
					}
					
					//t2
					else if(bbpbase.BBPGetTier() == 2)
					{
						if ( !HasRaidToolT2(item, target) )
						{
							return false;
						}
						
						SetCustomText(bbpbase.PartGetBBP());
						return true;
					}
					
					//t1
					else if(bbpbase.BBPGetTier() == 1)
					{
						if ( !HasRaidToolT1(item, target) )
						{
							return false;
						}
						
						SetCustomText(bbpbase.PartGetBBP());
						return true;
					}
					
					//door only
					else if(bbpbase.BBPGetTier() == 0)
					{
						if ( !HasRaidToolT1(item, target) )
						{
							return false;
						}
						
						SetCustomText(bbpbase.PartGetBBP());
						return true;
					}
				}
			}
			return false;
		}		
		return false;
	}
}