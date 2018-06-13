
#import "SBUIStarkZoomUpAppFromHomeAnimation.h"

@class NSNumber;

@interface SBUIStarkZoomUpNowPlayingFromHomeAnimation : SBUIStarkZoomUpAppFromHomeAnimation
{
    NSNumber *_activated;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (id)_viewToAnimate;
- (void)_setupStartDependencies;
- (_Bool)_waitsForApplicationActivationIfNecessary;
- (id)initWithActivatingApp:(id)arg1 alertImpersonator:(id)arg2 starkScreenController:(id)arg3;

@end

