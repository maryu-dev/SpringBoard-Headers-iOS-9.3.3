
#import "SBBaseSoftwareUpdateAlertItem.h"

@interface SBSoftwareUpdateAvailableAlertItem : SBBaseSoftwareUpdateAlertItem
{
}

- (_Bool)dismissOnLock;
- (_Bool)reappearsAfterUnlock;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;

@end

