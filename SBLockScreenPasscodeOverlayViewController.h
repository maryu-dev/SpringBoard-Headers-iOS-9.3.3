
#import "SBLockOverlayViewController.h"

#import "SBUIPasscodeLockViewDelegate.h"

@class NSString, SBUIPasscodeViewWithLockScreenStyle;

@interface SBLockScreenPasscodeOverlayViewController : SBLockOverlayViewController <SBUIPasscodeLockViewDelegate>
{
    SBUIPasscodeViewWithLockScreenStyle *_passcodeView;
    _Bool _attemptingUnlock;
    id _completionBlock;
}

- (void)_passcodeLockViewPasscodeEntered:(id)arg1 viaMesa:(_Bool)arg2;
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)passcodeLockViewPasscodeDidChange:(id)arg1;
- (id)_newPasscodeView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

