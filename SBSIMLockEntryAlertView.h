
#import "SBPasscodeEntryAlertView.h"

#import "SBSIMLockEntryViewInterface.h"
#import "SBUIPasscodeLockViewDelegate.h"

@class NSString;

@interface SBSIMLockEntryAlertView : SBPasscodeEntryAlertView <SBUIPasscodeLockViewDelegate, SBSIMLockEntryViewInterface>
{
    NSString *_languageCode;
    NSString *_code;
}

- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)_doUnlock;
- (id)_failureLabel;
- (id)_failureTitle;
- (id)_pinAttemptsRemainingLabel;
- (void)_unlock;
- (id)_passcodeView;
- (void)alertDisplayWillBecomeVisible;
- (id)_passcodeViewGenerator;
- (void)setupUnlockAttemptState;
- (void)setupSuccess;
- (void)setupCurrentLockAttemptState;
- (void)setupFailureState;
- (id)label;
- (id)titleText;
- (id)localizedStringWithKey:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 languageCode:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

