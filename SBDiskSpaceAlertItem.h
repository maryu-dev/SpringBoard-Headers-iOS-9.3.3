
#import "SBAlertItem.h"

@interface SBDiskSpaceAlertItem : SBAlertItem
{
    long long _usageButtonIndex;
}

- (_Bool)shouldShowInEmergencyCall;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_showUsagePrefs;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)performUnlockAction;
- (id)init;

@end

