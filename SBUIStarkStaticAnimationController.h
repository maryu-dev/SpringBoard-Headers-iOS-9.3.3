
#import "SBUIStarkScreenAnimationController.h"

@class SBWorkspaceApplication, UIView;

@interface SBUIStarkStaticAnimationController : SBUIStarkScreenAnimationController
{
    _Bool _relaunchExpected;
    _Bool _appWasActivating;
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
- (id)initWithApp:(id)arg1 starkScreenController:(id)arg2;

@end

