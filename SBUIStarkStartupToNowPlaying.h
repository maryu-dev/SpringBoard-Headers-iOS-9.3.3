
#import "SBUIStarkStartupToAppAnimation.h"

@class NSNumber;

@interface SBUIStarkStartupToNowPlaying : SBUIStarkStartupToAppAnimation
{
    NSNumber *_activated;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_willSetupStartDependencies;
- (id)_createViewToAnimate;
- (void)_setupStartDependencies;
- (id)initWithActivatingApp:(id)arg1 fromLockoutView:(id)arg2 starkScreenController:(id)arg3;

@end

