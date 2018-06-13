
#import "SBUIMainScreenAnimationController.h"

@class BKSDisplayRenderOverlay;

@interface SBUIBootToHomescreenAnimationController : SBUIMainScreenAnimationController
{
    BKSDisplayRenderOverlay *_persistentSnapshotOverlay;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (_Bool)_shouldDismissBanner;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

