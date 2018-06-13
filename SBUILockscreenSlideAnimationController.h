
#import "SBUIMainScreenAnimationController.h"

@class NSMutableArray, SBLockScreenClippedSlideController, SBLockScreenViewControllerBase, SBSceneLayoutAnimationWrapperView;

@interface SBUILockscreenSlideAnimationController : SBUIMainScreenAnimationController
{
    int _transitionStyle;
    SBLockScreenViewControllerBase *_lockscreenViewController;
    SBLockScreenClippedSlideController *_lockscreenClippedSlideController;
    SBSceneLayoutAnimationWrapperView *_animationWrapperView;
    NSMutableArray *_appsNeedingContextHosting;
    double _animationDuration;
    _Bool _fromCC;
    _Bool _fromNC;
    _Bool _finishedSliding;
    _Bool _waitForAppActivationForContextHostView;
}

- (id)description;
- (void)_maybeReportAnimationFinished;
- (void)_finishedSliding;
- (_Bool)_areApplicationLaunchesFinished;
- (void)_applicationDependencyStateChanged;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (id)_animationProgressDependencies;
- (_Bool)_waitsForApplicationActivationIfNecessary;
- (void)_willSetupStartDependencies;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;
- (void)_setup:(id)arg1 transitionStyle:(int)arg2;

@end

