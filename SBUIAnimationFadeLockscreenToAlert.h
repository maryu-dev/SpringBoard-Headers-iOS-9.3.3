
#import "SBUIMainScreenAnimationController.h"

@class SBAlertManager, SBAppStatusBarSettingsAssertion, SBLockScreenViewController, SBUIFullscreenAlertAdapter;

@interface SBUIAnimationFadeLockscreenToAlert : SBUIMainScreenAnimationController
{
    SBLockScreenViewController *_lockScreenViewController;
    SBAlertManager *_alertManager;
    SBUIFullscreenAlertAdapter *_toAlert;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    _Bool _alertViewIsAnimatingItself;
    _Bool _alertIsTransparent;
    _Bool _finishedPrimaryFadeAnimation;
    _Bool _needsLockScreenAlphaRestoredOnCompletion;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)_alertViewFinishedAnimatingItself;
- (void)_fadeAnimationFinished;
- (void)_evaluateTotalAnimationCompletion;
- (void)_animationFinished;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

