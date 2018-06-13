
#import "SBUIMainScreenAnimationController.h"

@class SBAlertManager, SBUIFullscreenAlertAdapter;

@interface SBUIAnimationFadeHomeToPluginAlert : SBUIMainScreenAnimationController
{
    SBAlertManager *_alertManager;
    SBUIFullscreenAlertAdapter *_alert;
    _Bool _alertIsTransparent;
    _Bool _alertViewIsAnimatingItself;
    _Bool _finishedPrimaryFadeAnimation;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_alertViewFinishedAnimatingItself;
- (void)_fadeAnimationFinished;
- (void)_evaluateTotalAnimationCompletion;
- (void)_animationFinished;
- (void)_prepareAnimation;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

