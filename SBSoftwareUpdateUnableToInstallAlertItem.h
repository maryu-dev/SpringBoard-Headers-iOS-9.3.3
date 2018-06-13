
#import "SBBaseSoftwareUpdateInstallFailureAlertItem.h"

@class NSError;

@interface SBSoftwareUpdateUnableToInstallAlertItem : SBBaseSoftwareUpdateInstallFailureAlertItem
{
    _Bool _unableToInstallDueToInsufficientDiskSpace;
    NSError *_error;
}

- (_Bool)allowInSetup;
- (_Bool)dismissOnLock;
- (_Bool)allowMenuButtonDismissal;
- (_Bool)shouldShowInLockScreen;
- (_Bool)reappearsAfterLock;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)buildDefaultSheetWithBody:(id)arg1 isLocked:(_Bool)arg2;
- (void)buildUnavailableSheet;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;

@end

