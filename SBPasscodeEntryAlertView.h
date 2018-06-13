
#import "SBAlertView.h"

@class SBAppStatusBarSettingsAssertion, SBUIPasscodeViewWithLockScreenStyle, UIView<SBUIPasscodeLockView>;

@interface SBPasscodeEntryAlertView : SBAlertView
{
    SBUIPasscodeViewWithLockScreenStyle *_passcodeView;
    _Bool _dismissing;
    SBAppStatusBarSettingsAssertion *_showStatusBarAssertion;
    id <SBPasscodeEntryAlertViewDelegate> _delegate;
}

- (void)_dismissAnimationCompleted;
- (id)passcodeView;
- (id)_passcodeViewGenerator;
- (void)layoutForInterfaceOrientation:(long long)arg1;
- (_Bool)isReadyToBeRemovedFromView;
- (void)alertDisplayBecameVisible;
- (void)alertDisplayWillBecomeVisible;
- (void)setPasscodeViewsToVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(id)arg3;
@property(readonly, nonatomic) UIView<SBUIPasscodeLockView> *passcodeLockView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

