
#import "SBAlertItem.h"

@interface SBRestoreFailureAlertItem : SBAlertItem
{
}

- (_Bool)allowInSetup;
- (_Bool)forcesModalAlertAppearance;
- (_Bool)shouldShowInLockScreen;
- (_Bool)allowMenuButtonDismissal;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)performUnlockAction;
- (void)restartSystemEvent;
- (void)_rebootNow;
- (double)autoDismissInterval;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;

@end

