
#import "SBUIMainScreenAnimationController.h"

@class NSArray, SBAppStatusBarSettingsAssertion, SBMainAlertManager, SBRemoteAlertAdapter, SBWindowSelfHostWrapper, UIView;

@interface SBUIAnimationFadeAppsToRemoteAlert : SBUIMainScreenAnimationController
{
    SBMainAlertManager *_alertManager;
    SBRemoteAlertAdapter *_alert;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    SBWindowSelfHostWrapper *_appContextHostWrapper;
    UIView *_alertContextHostView;
    NSArray *_accessoryHostViews;
}

- (void)_animationFinished;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)_setHidden:(_Bool)arg1;
- (id)_getTransitionWindow;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

