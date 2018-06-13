
#import "SBPhoneAlertItem.h"

@interface SBNetworkReselectionAlertItem : SBPhoneAlertItem
{
}

- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)performUnlockAction;
- (id)shortLockLabel;
- (id)lockLabel;
- (void)_showPrefs;
- (id)init;

@end

