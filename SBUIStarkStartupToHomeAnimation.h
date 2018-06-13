
#import "SBUIStarkStartupAnimation.h"

@class SBIconAnimator, UIStatusBar;

@interface SBUIStarkStartupToHomeAnimation : SBUIStarkStartupAnimation
{
    UIStatusBar *_fakeStatusBar;
    SBIconAnimator *_iconAnimator;
    _Bool _finishedCleanup;
}

- (void)_cleanupEverything;
- (void)_cleanupAnimation;
- (void)_cancelAnimation;
- (void)_didComplete;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (id)_getTransitionWindow;

@end

