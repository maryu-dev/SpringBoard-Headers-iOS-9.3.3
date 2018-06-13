
#import "SBUIMainScreenAnimationController.h"

@class SBAlert, SBAlertManager;

@interface SBUIAnimationFadeAlertToAlert : SBUIMainScreenAnimationController
{
    SBAlertManager *_alertManager;
    SBAlert *_fromAlert;
    SBAlert *_toAlert;
    _Bool _alertIsTransparent;
}

- (void)_startAnimation;
- (void)_prepareAnimation;
- (double)animationDuration;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

