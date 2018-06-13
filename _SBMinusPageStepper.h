
#import "SBSteppedAnimationTimingFunctionCalculator.h"

@interface _SBMinusPageStepper : SBSteppedAnimationTimingFunctionCalculator
{
}

@property(readonly, nonatomic) double pageControlAlpha;
@property(readonly, nonatomic) double backgroundBlurAlpha;
- (id)init;

@end

