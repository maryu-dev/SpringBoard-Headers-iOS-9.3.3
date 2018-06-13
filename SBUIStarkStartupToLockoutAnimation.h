
#import "SBUIStarkStartupAnimation.h"

@class NSMutableArray, SBStarkLockOutView;

@interface SBUIStarkStartupToLockoutAnimation : SBUIStarkStartupAnimation
{
    NSMutableArray *_viewsToSlideUp;
    SBStarkLockOutView *_toLockoutView;
    unsigned long long _significantAnimationsRemaining;
}

- (void)_noteSignificantAnimationFinished;
- (void)_slideUpViewsWithSlideFactory:(id)arg1 fadeFactory:(id)arg2 delayIncrement:(double)arg3;
- (void)_finishViewForSlideUp:(id)arg1;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (id)initFromLockoutView:(id)arg1 toLockoutView:(id)arg2 starkScreenController:(id)arg3;

@end

