
#import "SBUIMainScreenAnimationController.h"

@class SBWorkspaceApplication, UIView;

@interface SBUIStaticAnimationController : SBUIMainScreenAnimationController
{
    UIView *_staticAppView;
    UIView *_hostView;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (_Bool)_shouldDismissBanner;
- (void)_hideAppHostView;
- (void)_willBeginWaitingForStartDependencies;
- (void)_setupStartDependencies;
- (_Bool)_willAnimate;
@property(readonly, nonatomic) SBWorkspaceApplication *app;
- (void)_applicationDependencyStateChanged;
- (id)_animationProgressDependencies;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

