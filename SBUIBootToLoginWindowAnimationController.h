
#import "SBUIMainScreenAnimationController.h"

@class BKSDisplayRenderOverlay, SBWindow;

@interface SBUIBootToLoginWindowAnimationController : SBUIMainScreenAnimationController
{
    SBWindow *_transitionWindow;
    BKSDisplayRenderOverlay *_persistentSnapshotOverlay;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_setHidden:(_Bool)arg1;
- (id)_getTransitionWindow;
- (_Bool)_shouldDismissBanner;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

