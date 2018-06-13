
#import "SBBaseSoftwareUpdateAlertItem.h"

@class NSMutableArray, NSString, NSTimer, SBSoftwareUpdateInstallOperationLifeCycleHandler, SBSoftwareUpdateInstallOptions, SUAutoInstallOperation, SUDownload;

@interface SBSoftwareUpdateInstallAlertItem : SBBaseSoftwareUpdateAlertItem
{
    unsigned long long _alertStyle;
    _Bool _undimScreen;
    _Bool _choseInstallTonight;
    SBSoftwareUpdateInstallOptions *_installOptions;
    SUDownload *_download;
    _Bool _scheduleInstallAlertRepopOnDismiss;
    NSString *_repopReason;
    NSMutableArray *_buttonActionBlocks;
    NSTimer *_countdownTimer;
    unsigned long long _timeLeftUntilInstall;
    SBSoftwareUpdateInstallOperationLifeCycleHandler *_tryTonightOperationWrapper;
}

- (void)_countdownTimerFired;
- (void)_updateBodyTextForCountdown;
- (void)_addButtonWithTitle:(id)arg1 action:(id)arg2;
- (id)_bodyTextToModelSpecificLocalizedKey:(id)arg1;
- (void)_scheduleInstallAlertRepopOnDismissWithReason:(id)arg1;
- (void)_installUpdateNowFromTimer:(_Bool)arg1;
- (_Bool)_shouldCountdown;
- (void)_clearCountdownTimer;
- (void)_setTryTonightOperation:(id)arg1;
- (id)_stringFromAlertStyle:(unsigned long long)arg1;
- (void)performUnlockAction;
- (_Bool)shouldShowInLockScreen;
- (id)shortLockLabel;
- (id)lockLabel;
- (_Bool)undimsScreen;
- (_Bool)dismissOnLock;
- (_Bool)allowLockScreenDismissal;
- (_Bool)allowMenuButtonDismissal;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)didDeactivateForReason:(int)arg1;
- (void)willDeactivateForReason:(int)arg1;
- (void)willPresentAlertView:(id)arg1;
- (id)description;
@property(readonly, nonatomic) __weak SUAutoInstallOperation *tryTonightOperation;
- (void)dealloc;
- (id)initWithDownload:(id)arg1 style:(unsigned long long)arg2 softwareUpdateController:(id)arg3 tryTonightInstallOperation:(id)arg4 installOptions:(id)arg5;
- (id)initWithDownload:(id)arg1 softwareUpdateController:(id)arg2;

@end

