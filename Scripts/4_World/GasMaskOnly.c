// Changed to only require Gas Mask while in contaminated zone
modded class VomitSymptom extends SymptomBase
{
    override bool IsContaminationActive()
    {
        return false;
    }
};
modded class AreaExposureMdfr: ModifierBase
{
    override void BleedingSourceCreateCheck(PlayerBase player)
    {
        // Empty Class as we don't want it!
    }
};