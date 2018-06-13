
#import "SBUIMainScreenAnimationController.h"

@class SBAlertManager, SBAppStatusBarSettingsAssertion, SBRemoteAlertAdapter, SBWindowSelfHostWrapper, UIView;

@interface SBUIAnimationFadeRemoteAlertToApps : SBUIMainScreenAnimationController
{
    SBRemoteAlertAdapter *_alert;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    SBAlertManager *_alertManager;
    SBWindowSelfHostWrapper *_appContextHostWrapper;
    UIView *_alertContextHostView;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)_setHidden:(_Bool)arg1;
- (id)_getTransitionWindow;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

