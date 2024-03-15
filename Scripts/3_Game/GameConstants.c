modded class GameConstants
{
    const float ENVIRO_TICK_RATE                         = 30;
    const float ENVIRO_TICKS_TO_WETNESS_CALCULATION     = 21600;
    const float ENVIRO_TICK_ROOF_RC_CHECK                 = 21600;
    const float ENVIRO_ITEM_HEAT_TRANSFER_COEF             = 0.00;
    const float    STAMINA_DRAIN_HOLD_BREATH_START = 0.2; //in units (how much holding breath depletes stamina at the start)
    const float    STAMINA_DRAIN_HOLD_BREATH_END = 1.0; //in units (how much holding breath depletes stamina at the end)
    const float STAMINA_DRAIN_HOLD_BREATH_DURATION = 8.0; //in seconds, time it takes to increase stamina drain from STAMINA_DRAIN_HOLD_BREATH_START to STAMINA_DRAIN_HOLD_BREATH_END
    const float    STAMINA_DRAIN_HOLD_BREATH_EXPONENT = 1.0; //holding breath exponent
    const int CARS_FLUIDS_TICK         = 15;
    const int CARS_LEAK_TICK_MIN     = 1.0;
    const int CARS_LEAK_TICK_MAX     = 2.25;
};