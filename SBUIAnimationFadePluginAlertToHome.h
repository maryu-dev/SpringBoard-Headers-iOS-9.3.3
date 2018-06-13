
#import "SBUIMainScreenAnimationController.h"

@class SBAlert, SBAlertManager, UIView;

@interface SBUIAnimationFadePluginAlertToHome : SBUIMainScreenAnimationController
{
    SBAlertManager *_alertManager;
    SBAlert *_alert;
    UIView *_viewToAnimate;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (double)animationDelay;
- (double)animationDuration;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

