
#import "SBUIAnimationControllerGroup.h"

@interface SBUISteppableAnimationControllerGroup : SBUIAnimationControllerGroup
{
    double _percentage;
}

- (void)finishSteppingBackwardToStart;
- (void)finishSteppingForwardToEnd;
- (void)setStepPercentage:(double)arg1;
- (double)stepPercentage;
- (_Bool)isStepped;
- (void)addAnimation:(id)arg1;
- (id)initWithAnimations:(id)arg1;

@end

