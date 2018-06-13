
#import "SBBaseSoftwareUpdateInstallFailureAlertItem.h"

@interface SBSoftwareUpdateVerificationFailedAlertItem : SBBaseSoftwareUpdateInstallFailureAlertItem
{
}

- (_Bool)allowInSetup;
- (_Bool)dismissOnLock;
- (_Bool)allowMenuButtonDismissal;
- (_Bool)shouldShowInLockScreen;
- (_Bool)reappearsAfterLock;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;

@end

