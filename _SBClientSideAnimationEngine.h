
#import "NSObject.h"

@class CADisplayLink, NSMutableSet;

@interface _SBClientSideAnimationEngine : NSObject
{
    NSMutableSet *_animations;
    CADisplayLink *_displayLink;
    NSMutableSet *_finishedAnimations;
}

+ (id)sharedEngine;
- (void)_onDisplayLink:(id)arg1;
- (void)_tearDownDisplayLink;
- (void)_ensureDisplayLink;
- (void)_updateDisplayLink;
- (_Bool)isRunningAnimation:(id)arg1;
- (void)stopAnimation:(id)arg1;
- (void)updateAnimation:(id)arg1;
- (void)startAnimation:(id)arg1;
- (id)init;

@end

