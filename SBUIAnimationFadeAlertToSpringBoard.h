
#import "SBUIMainScreenAnimationController.h"

@class SBAlert, SBLockToAppStatusBarAnimator;

@interface SBUIAnimationFadeAlertToSpringBoard : SBUIMainScreenAnimationController
{
    SBAlert *_fromAlert;
    SBLockToAppStatusBarAnimator *_statusBarAnimator;
}

- (void)_startAnimation;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

