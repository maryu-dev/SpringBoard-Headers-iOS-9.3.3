
#import "SBUIMainScreenAnimationController.h"

@class SBAlertManager, SBAppStatusBarSettingsAssertion, SBRemoteAlertAdapter, SBWindowSelfHostWrapper;

@interface SBUIAnimationFadeRemoteAlertToHome : SBUIMainScreenAnimationController
{
    SBAlertManager *_alertManager;
    SBRemoteAlertAdapter *_alert;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    SBWindowSelfHostWrapper *_appHostWrapper;
    long long _targetStatusBarStyle;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

