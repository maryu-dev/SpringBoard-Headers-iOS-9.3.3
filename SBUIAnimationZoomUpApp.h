
#import "SBUIMainScreenAnimationController.h"

#import "SBUIAnimationZoomUpDown.h"

@class BSAnimationSettings, BSUIAnimationFactory, FBWindowContextHostManager, NSString, SBAppStatusBarSettingsAssertion, SBAppStatusBarTransitionInfo, SBSceneLayoutElementAnimationWrapperView, UIView;

@interface SBUIAnimationZoomUpApp : SBUIMainScreenAnimationController <SBUIAnimationZoomUpDown>
{
    BSAnimationSettings *_animationSettings;
    UIView *_contextHostView;
    _Bool _zoomHostView;
    FBWindowContextHostManager *_activatingContextHostManager;
    SBAppStatusBarTransitionInfo *_appStatusBarTransitionInfo;
    long long _animationTransition;
    SBSceneLayoutElementAnimationWrapperView *_placeholderView;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    _Bool _finishedZooming;
    _Bool _finishedActivating;
    _Bool _finishedCrossfadingToHostView;
    _Bool _animationFinished;
    UIView *_viewToAnimate;
}

@property(readonly, nonatomic) SBAppStatusBarTransitionInfo *appStatusBarTransitionInfo;
- (void)setAnimatableWrapperView:(id)arg1;
- (_Bool)_shouldWaitForSiriDismissBeforeZooming;
- (void)_maybeReportAnimationFinished;
- (void)_noteContextHostCrossfadeDidFinish;
- (void)_maybeStartCrossfade;
- (void)_noteZoomDidFinish;
- (void)_applicationDependencyStateChanged;
- (_Bool)isReasonableMomentToInterrupt;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (id)_animationProgressDependencies;
- (_Bool)_waitsForApplicationActivationIfNecessary;
- (void)_willSetupStartDependencies;
- (void)cleanupZoom;
- (id)animateZoomWithCompletion:(id)arg1;
- (void)prepareZoom;
- (void)noteDependencyDidInvalidate;
- (double)animationDelay;
- (double)animationDuration;
- (id)appStatusBarTransitionInfoWithStartStyleRequest:(id)arg1 startOrientation:(long long)arg2;
@property(readonly, nonatomic) BSUIAnimationFactory *crossfadeAnimationFactory;
- (void)dealloc;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

