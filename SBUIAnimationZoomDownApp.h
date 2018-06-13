
#import "SBUIMainScreenAnimationController.h"

#import "SBUIAnimationZoomUpDown.h"

@class BSAnimationSettings, FBWindowContextHostManager, NSString, SBAppStatusBarSettingsAssertion, SBAppStatusBarTransitionInfo, SBSceneLayoutAnimationWrapperView, UIView;

@interface SBUIAnimationZoomDownApp : SBUIMainScreenAnimationController <SBUIAnimationZoomUpDown>
{
    UIView *_viewToAnimate;
    SBAppStatusBarTransitionInfo *_appStatusBarTransitionInfo;
    BSAnimationSettings *_animationSettings;
    FBWindowContextHostManager *_deactivatingContextHostManager;
    SBSceneLayoutAnimationWrapperView *_wrapperView;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    _Bool _zoomFullLayoutBounds;
}

- (void)setAnimatableWrapperView:(id)arg1;
- (double)_animationDelay;
- (double)_animationDuration;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (id)_viewsForAnimationStepping;
- (void)cleanupZoom;
- (id)animateZoomWithCompletion:(id)arg1;
- (void)_animateWallpaperWithFactory:(id)arg1;
- (void)prepareZoom;
- (_Bool)prefersLayerHostSnapshot;
- (id)appStatusBarTransitionInfoWithStartEffectivelyHidden:(_Bool)arg1 endStyleRequest:(id)arg2 endOrientation:(long long)arg3;
- (id)deactivatingApp;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1 zoomFullLayoutBounds:(_Bool)arg2;
- (id)initWithTransitionContextProvider:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

