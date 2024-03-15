modded class ActionAttachCodeLockToFence : ActionSingleUseBase
{
    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item) {
        BBP_BWindow bwindow = BBP_BWindow.Cast(target.GetObject());

        if (bwindow) {
            return false;
        }

        BBP_SWindow swindow = BBP_SWindow.Cast(target.GetObject());

        if (swindow) {
            return false;
        }
        return super.ActionCondition(player,target,item);
    }
}