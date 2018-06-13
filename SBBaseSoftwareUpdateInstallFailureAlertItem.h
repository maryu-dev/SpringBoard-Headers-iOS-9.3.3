
#import "SBBaseSoftwareUpdateAlertItem.h"

@interface SBBaseSoftwareUpdateInstallFailureAlertItem : SBBaseSoftwareUpdateAlertItem
{
    _Bool _actionTaken;
}

- (_Bool)allowInSetup;
- (void)willDeactivateForReason:(int)arg1;

@end

