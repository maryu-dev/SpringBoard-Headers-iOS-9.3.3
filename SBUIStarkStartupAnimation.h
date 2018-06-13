
#import "SBUIStarkScreenAnimationController.h"

@class UIView;

@interface SBUIStarkStartupAnimation : SBUIStarkScreenAnimationController
{
    UIView *_fromLockoutView;
}

- (void)_cancelAnimation;
- (void)_cleanupAnimation;
- (void)_begin;
- (id)_getTransitionWindow;
- (id)initWithActivatingApp:(id)arg1 fromLockoutView:(id)arg2 starkScreenController:(id)arg3;
- (id)initFromLockoutView:(id)arg1 starkScreenController:(id)arg2;

@end

