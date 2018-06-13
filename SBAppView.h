
#import "UIView.h"

#import "FBSceneMonitorDelegate.h"
#import "SBAppViewHostRequester.h"
#import "SBMainAppSwitcherPageContentView.h"

@class FBSDisplay, FBSceneMonitor, NSString, SBAppViewStatusBarDescriptor, SBApplication, SBSceneViewAppIconView, UIApplicationSceneClientSettingsDiffInspector, UIView<FBSceneHostView>, UIView<SBAppViewBackgroundView>;

@interface SBAppView : UIView <FBSceneMonitorDelegate, SBAppViewHostRequester, SBMainAppSwitcherPageContentView>
{
    SBApplication *_application;
    struct CGSize _referenceSize;
    long long _orientation;
    FBSDisplay *_display;
    long long _displayMode;
    long long _effectiveDisplayMode;
    unsigned long long _options;
    FBSceneMonitor *_sceneMonitor;
    UIApplicationSceneClientSettingsDiffInspector *_clientSettingsInspector;
    _Bool _invalidated;
    long long _contextHostingPriority;
    NSString *_contextHostingRequester;
    UIView *_clientPlaceholderView;
    UIView *_staticContentView;
    UIView *_sceneSnapshotView;
    UIView<FBSceneHostView> *_contextHostView;
    UIView *_crossfadeView;
    UIView<SBAppViewBackgroundView> *_backgroundView;
    SBSceneViewAppIconView *_cachedResizeIconView;
    SBAppViewStatusBarDescriptor *_statusBarDescriptor;
}

+ (id)defaultDisplayModeAnimationFactory;
- (long long)appViewRequesterPriority:(id)arg1;
- (id)appViewRequesterIdentifier:(id)arg1;
- (void)_activationStateDidChange:(id)arg1;
- (void)_recheckLiveContentDependencies;
- (void)_hotSwapLiveSnapshotView;
- (void)_hotSwapStaticContentView;
- (void)_updateStatusBarVisibilityForContextHostView;
- (void)_updateStatusBarVisibility;
- (void)_configureContextHostView;
- (void)updateReferenceSize:(struct CGSize)arg1 andOrientation:(long long)arg2;
- (void)updateSceneSnapshotViewOnQueue:(id)arg1 completionHandler:(id)arg2;
- (void)_clearSnapshotViews;
- (void)_makeSceneContentSnapshotViewOnBackgroundQueue:(id)arg1 completionHandler:(id)arg2;
- (id)_sceneContentSnapshotView;
- (void)makeLiveSnapshotViewOnBackgroundQueue:(id)arg1 completionHandler:(id)arg2;
- (id)liveSnapshotView;
- (_Bool)_hasLiveContent;
- (void)_configureSceneSnapshotView;
- (id)_snapshotOrDefaultImageView;
- (struct CGSize)_naturalSize;
- (void)_configureStaticContentView;
- (void)_updateBackgroundViewTinting;
- (id)_newDefaultBackgroundView;
- (void)_crossfadeFromDisplayMode:(long long)arg1 showingView:(id)arg2 toDisplayMode:(long long)arg3 showingView:(id)arg4 options:(unsigned long long)arg5 withAnimationFactory:(id)arg6 completion:(id)arg7;
- (id)_viewForDisplayMode:(long long)arg1;
- (long long)_bestDisplayModeLessThanMode:(long long)arg1;
- (void)_configureViewForEffectiveDisplayMode:(long long)arg1;
- (void)_setEffectiveDisplayMode:(long long)arg1 options:(unsigned long long)arg2 withAnimationFactory:(id)arg3 completion:(id)arg4;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (void)sceneMonitor:(id)arg1 sceneClientSettingsDidChangeWithDiff:(id)arg2 transitionContext:(id)arg3;
- (void)sceneMonitor:(id)arg1 sceneWasDestroyed:(id)arg2;
- (void)sceneMonitor:(id)arg1 sceneWasCreated:(id)arg2;
- (void)_disableContextHosting;
- (void)_enableContextHosting;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setForcesStatusBarHidden:(_Bool)arg1;
- (_Bool)_forcesStatusBarHidden;
- (long long)setDisplayMode:(long long)arg1 options:(unsigned long long)arg2 withAnimationFactory:(id)arg3 completion:(id)arg4;
- (void)setDisplayMode:(long long)arg1 withAnimationFactory:(id)arg2 completion:(id)arg3;
- (void)setPlaceholderView:(id)arg1 withAnimationFactory:(id)arg2;
@property(retain, nonatomic) UIView *placeholderView;
- (void)invalidate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithApp:(id)arg1 referenceSize:(struct CGSize)arg2 orientation:(long long)arg3 display:(id)arg4 hostRequester:(id)arg5;
- (id)initWithApp:(id)arg1 referenceSize:(struct CGSize)arg2 orientation:(long long)arg3 display:(id)arg4;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

