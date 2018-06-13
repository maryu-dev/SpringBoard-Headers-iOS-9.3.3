
#import "SBUIMainScreenAnimationController.h"

@class SBAlertManager, SBRemoteAlertAdapter;

@interface SBUIAnimationSwitcherDismissToRemoteAlert : SBUIMainScreenAnimationController
{
    SBRemoteAlertAdapter *_alert;
    SBAlertManager *_alertManager;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (double)animationDuration;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

