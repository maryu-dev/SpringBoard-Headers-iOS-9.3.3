
#import "SBClientSideAnimation.h"

@class CASpringAnimation;

@interface SBSpringClientSideAnimation : SBClientSideAnimation
{
    CASpringAnimation *_springAnimation;
    double _completionEpsilon;
}

+ (id)criticallyDampedSpringAnimation;
- (void)_updateDuration;
- (double)_solveForInput:(double)arg1;
- (void)setDuration:(double)arg1;
- (double)duration;
@property(nonatomic) double velocity;
@property(nonatomic) double damping;
@property(nonatomic) double stiffness;
@property(nonatomic) double mass;
- (id)init;

@end

