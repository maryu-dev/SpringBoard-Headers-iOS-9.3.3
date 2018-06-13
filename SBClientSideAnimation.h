
#import "NSObject.h"

@class CAMediaTimingFunction;

@interface SBClientSideAnimation : NSObject
{
    double _duration;
    CAMediaTimingFunction *_timingFunction;
    id _applier;
    id _completion;
    long long _frameInterval;
    double _startTime;
    double _lastFireTime;
}

+ (void)animateWithDuration:(double)arg1 timingFunction:(id)arg2 applier:(id)arg3 completion:(id)arg4;
+ (void)animateWithDuration:(double)arg1 curve:(long long)arg2 applier:(id)arg3 completion:(id)arg4;
- (double)_solveForInput:(double)arg1;
- (void)_reset;
- (void)_getEffectiveElapsedTime:(double *)arg1 finished:(_Bool *)arg2;
@property(readonly, nonatomic) double elapsedTime;
- (void)_invokeCompletionWithFinished:(_Bool)arg1;
- (void)_invokeApplierWithProgress:(double)arg1;
- (_Bool)isRunning;
- (void)stop;
- (void)start;
- (void)setTimingFunctionFromAnimationCurve:(long long)arg1;
- (id)init;

@end

