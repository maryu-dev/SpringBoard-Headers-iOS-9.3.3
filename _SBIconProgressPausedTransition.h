
#import "_SBIconProgressTransition.h"

@class CAMediaTimingFunction;

@interface _SBIconProgressPausedTransition : _SBIconProgressTransition
{
    double _totalElapsedTime;
    double _duration;
    CAMediaTimingFunction *_timingFunction;
    _Bool _toPaused;
    double _fraction;
}

+ (id)newTransitionToPaused:(_Bool)arg1;
- (void)_updateElapsedTimeFromFraction;
- (void)_updateTimingFunction;
- (void)_updateView:(id)arg1;
- (_Bool)isCompleteWithView:(id)arg1;
- (void)completeTransitionAndUpdateView:(id)arg1;
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;
- (void)updateToPaused:(_Bool)arg1;
- (id)_initToPaused:(_Bool)arg1;

@end

