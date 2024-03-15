modded class PlayerConstants 
{
	static const float METABOLIC_SPEED_ENERGY_BASAL		= 0.001;	//energy loss per second while idle
	
	static const float METABOLIC_SPEED_ENERGY_WALK		= 0.03;		//energy loss per second
	static const float METABOLIC_SPEED_ENERGY_JOG		= 0.18;		//energy loss per second
	static const float METABOLIC_SPEED_ENERGY_SPRINT	= 0.32;		//energy loss per second
	
	static const float METABOLIC_SPEED_WATER_BASAL		= 0.001;	//water loss per second while idle
	
	static const float METABOLIC_SPEED_WATER_WALK		= 0.03;		//water loss per second
	static const float METABOLIC_SPEED_WATER_JOG		= 0.18;		//water loss per second
	static const float METABOLIC_SPEED_WATER_SPRINT		= 0.32;		//water loss per second

	static const float UNCONSCIOUS_THRESHOLD            = 25.0;      //player goes unconscious when we get under this threshold
    static const float CONSCIOUS_THRESHOLD              = 50.0;     //player regains consciousness when he gets above this threshold

    static const float SHOCK_REFILL_CONSCIOUS_SPEED     = 25;        //shock refill speed when the player is conscious
    static const float SHOCK_REFILl_UNCONSCIOUS_SPEED   = 4;        //shock refill speed when the player is unconscious

    static const float SHOCK_DAMAGE_BLOOD_THRESHOLD_HIGH    = 3000;     // we start dealing shock damage over time when we get at this value or lower
    static const float SHOCK_DAMAGE_BLOOD_THRESHOLD_LOW     = 2500;     // the closer we get to this value, the higher the over time shock damage we deal

    static const float SHOCK_DAMAGE_HIGH                    = 5.5;      // shock damage per second when the blood is near the upper blood threshold
    static const float SHOCK_DAMAGE_LOW                     = 6.25;     // shock damage per second when the blood is near the lower blood threshold

    static const float SHOCK_REFILL_COOLDOWN_AFTER_HIT      = 1000;     // duration of cooldown (ms) during which shock regeneration is paused
	
	static const float IMMUNITY_THRESHOLD_LEVEL_HIGH = 0.95;
    static const float IMMUNITY_THRESHOLD_LEVEL_NORMAL = 0.65;
    static const float IMMUNITY_THRESHOLD_LEVEL_LOW = 0.35;
    static const float IMMUNITY_THRESHOLD_LEVEL_CRITICAL = 0.15;
}