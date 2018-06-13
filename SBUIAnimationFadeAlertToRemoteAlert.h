
#import "SBUIMainScreenAnimationController.h"

@class SBAlert, SBAppStatusBarSettingsAssertion, SBMainAlertManager, SBRemoteAlertAdapter;

@interface SBUIAnimationFadeAlertToRemoteAlert : SBUIMainScreenAnimationController
{
    SBAlert *_fromAlert;
    SBRemoteAlertAdapter *_remoteAlert;
    SBMainAlertManager *_alertManager;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    _Bool _initialFakeStatusBarNeeded;
    double _animationDuration;
}

- (void)_animationFinished;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

