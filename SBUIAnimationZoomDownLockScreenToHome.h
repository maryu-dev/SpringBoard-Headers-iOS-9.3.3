
#import "SBUIAnimationZoomDownAppToHome.h"

@class SBIconAnimator, SBLockScreenViewController, SBLockToAppStatusBarAnimator, SBWindowSelfHostWrapper, SBWorkspaceTransitionRequest;

@interface SBUIAnimationZoomDownLockScreenToHome : SBUIAnimationZoomDownAppToHome
{
    SBLockScreenViewController *_lockScreenViewController;
    SBLockToAppStatusBarAnimator *_statusBarAnimator;
    SBIconAnimator *_iconAnimator;
    SBWindowSelfHostWrapper *_alertWindowHostWrapper;
    SBWorkspaceTransitionRequest *_transitionRequest;
}

- (id)animateZoomWithCompletion:(id)arg1;
- (void)cleanupZoom;
- (void)prepareZoom;
- (_Bool)_shouldDismissBanner;
- (void)_prepareAnimation;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

