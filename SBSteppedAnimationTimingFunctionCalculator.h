
#import "NSObject.h"

@class NSMutableDictionary;

@interface SBSteppedAnimationTimingFunctionCalculator : NSObject
{
    NSMutableDictionary *_functionsByName;
    double _percentComplete;
}

- (double)valueForFunctionWithName:(id)arg1;
- (id)timingFunctionNames;
- (void)addTimingFunctionWithName:(id)arg1 fromNormalizedAnimationSettings:(id)arg2;
- (void)addTimingFunction:(id)arg1 withName:(id)arg2 constrainedToIntervalBetween:(double)arg3 and:(double)arg4;
- (id)init;

@end

