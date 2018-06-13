
#import "SBUIStarkStartupAnimation.h"

@class FBWindowContextHostManager, UIStatusBar, UIView;

@interface SBUIStarkStartupToAppAnimation : SBUIStarkStartupAnimation
{
    FBWindowContextHostManager *_contextHostManager;
    UIView *_viewToAnimate;
    UIStatusBar *_fakeStatusBar;
    _Bool _finished;
}

- (void)_finishedAnimation:(_Bool)arg1;
- (void)_cleanupAnimation;
- (void)_cancelAnimation;
- (void)_startAnimation;
- (void)_reallyPrepareAnimation;
- (void)_applicationDependencyStateChanged;
- (id)_animationProgressDependencies;
- (void)_setupStartDependencies;
- (id)_createViewToAnimate;

@end

