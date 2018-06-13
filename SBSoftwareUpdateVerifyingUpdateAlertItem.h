
#import "SBBaseSoftwareUpdateAlertItem.h"

@class SBSoftwareUpdateVerifyingUpdateAlertViewController;

@interface SBSoftwareUpdateVerifyingUpdateAlertItem : SBBaseSoftwareUpdateAlertItem
{
    SBSoftwareUpdateVerifyingUpdateAlertViewController *_activityViewController;
}

- (_Bool)allowInSetup;
- (_Bool)dismissesAutomatically;
- (_Bool)dismissOnLock;
- (_Bool)allowMenuButtonDismissal;
- (_Bool)shouldShowInLockScreen;
- (_Bool)behavesSuperModally;
- (_Bool)reappearsAfterLock;
- (_Bool)reappearsAfterUnlock;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithDescriptor:(id)arg1 softwareUpdateController:(id)arg2;

@end

