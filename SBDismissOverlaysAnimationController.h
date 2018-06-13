
#import "SBUIAnimationController.h"

@interface SBDismissOverlaysAnimationController : SBUIAnimationController
{
    unsigned long long _dismissOptions;
}

+ (_Bool)willDismissOverlaysForDismissOptions:(unsigned long long)arg1;
- (void)_startAnimation;
- (id)initWithTransitionContextProvider:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

