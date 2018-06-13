
#import "SBUIAnimationZoomDownApp.h"

@class SBIconAnimator;

@interface SBUIAnimationZoomDownAppToHome : SBUIAnimationZoomDownApp
{
    SBIconAnimator *_iconAnimator;
}

- (void)cleanupZoom;
- (id)animateZoomWithCompletion:(id)arg1;
- (_Bool)_shouldUpdateStatusBarOnContentRestore;
- (void)prepareZoom;

@end

