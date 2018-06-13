
#import "NSObject.h"

@class CAMediaTimingFunction;

@interface _SBSteppedAnimationTimingFunction : NSObject
{
    CAMediaTimingFunction *_timingFunction;
    struct SBNormalizedTransitionInterval _constrainedRange;
}

+ (id)timingFunctionWithTimingFunction:(id)arg1 constrainedToIntervalBetween:(double)arg2 and:(double)arg3;
- (double)valueAtPercentage:(double)arg1;
- (id)initWithTimingFunction:(id)arg1 constrainedToIntervalBetween:(double)arg2 and:(double)arg3;

@end

