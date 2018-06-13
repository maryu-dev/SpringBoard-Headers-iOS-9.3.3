
#import "SBUIMainScreenAnimationController.h"

@interface SBUIAnimationForAlertAnimationProvider : SBUIMainScreenAnimationController
{
    id <SBWorkspaceAlertAnimationProviding> _alert;
    _Bool _visible;
}

- (void)_startAnimation;
- (id)initWithTransitionContextProvider:(id)arg1 alert:(id)arg2 visible:(_Bool)arg3;

@end

