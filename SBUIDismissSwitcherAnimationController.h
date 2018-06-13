
#import "SBUIMainScreenAnimationController.h"

#import "SBAppViewHostRequester.h"

@class NSString, SBAppSwitcherPageView, SBAppView, SBDisplayItem, SBOrientationTransformWrapperView;

@interface SBUIDismissSwitcherAnimationController : SBUIMainScreenAnimationController <SBAppViewHostRequester>
{
    SBDisplayItem *_activatingDisplayItem;
    SBAppView *_appView;
    SBOrientationTransformWrapperView *_appViewLayoutWrapper;
    SBAppSwitcherPageView *_animatingPageView;
    _Bool _isInteractive;
    _Bool _finishedSwitcherAnimation;
    _Bool _finishedCrossfadingToHostView;
}

- (long long)appViewRequesterPriority:(id)arg1;
- (id)appViewRequesterIdentifier:(id)arg1;
- (void)_reportAnimationFinishedIfNecessary;
- (void)_noteCrossfadeDidFinish;
- (void)_noteSwitcherAnimationFinished;
- (void)_crossfadeApp;
- (void)_evaluateDependenciesForCrossfadeStart;
- (void)_applicationDependencyStateChanged;
- (id)_animationProgressDependencies;
- (_Bool)_isActivatingFromContinuityApp;
- (void)_cleanupAnimation;
- (id)_getTransitionWindow;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)endTransitionWithSuccess:(_Bool)arg1 completion:(id)arg2;
- (void)setTransitionParameters:(id)arg1;
- (id)initWithTransitionContextProvider:(id)arg1 activatingDisplayItem:(id)arg2 interactive:(_Bool)arg3;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

