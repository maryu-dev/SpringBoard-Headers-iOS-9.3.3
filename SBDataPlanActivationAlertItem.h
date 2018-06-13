
#import "SBDataPlanAccountAlertItem.h"

@interface SBDataPlanActivationAlertItem : SBDataPlanAccountAlertItem
{
    _Bool _newAccount;
    _Bool _promptToDisable;
}

- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithAccountURL:(id)arg1 newAccount:(_Bool)arg2 promptToDisable:(_Bool)arg3;

@end

