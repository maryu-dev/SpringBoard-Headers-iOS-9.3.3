
#import "SBBaseSoftwareUpdateAlertItem.h"

@class NSMutableArray, NSString, SBSoftwareUpdateInstallOperationLifeCycleHandler;

@interface SBSoftwareUpdateInstallLaterAlertItem : SBBaseSoftwareUpdateAlertItem
{
    SBSoftwareUpdateInstallOperationLifeCycleHandler *_tryTonightOperationLifeCycleHandler;
    NSMutableArray *_buttonActionBlocks;
    NSString *_repopReason;
    _Bool _choseInstallTonight;
    _Bool _scheduleInstallAlertRepopOnDismiss;
}

- (void)_scheduleInstallAlertRepopOnDismissWithReason:(id)arg1;
- (void)_addButtonWithTitle:(id)arg1 action:(id)arg2;
- (_Bool)shouldShowInLockScreen;
- (_Bool)undimsScreen;
- (_Bool)dismissOnLock;
- (_Bool)allowLockScreenDismissal;
- (_Bool)allowMenuButtonDismissal;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didDeactivateForReason:(int)arg1;
- (void)willDeactivateForReason:(int)arg1;
- (id)initWithDescriptor:(id)arg1 softwareUpdateController:(id)arg2 tryTonightOperationLifeCycleHandler:(id)arg3;

@end

