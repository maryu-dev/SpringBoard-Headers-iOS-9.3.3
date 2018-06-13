
#import "SBLayoutElementViewController.h"

#import "FBSceneMonitorDelegate.h"

@class FBSSceneSettingsDiffInspector, FBScene, FBSceneMonitor, NSCountedSet, NSString, SBApplication, UIApplicationSceneClientSettingsDiffInspector;

@interface SBAppContainerViewController : SBLayoutElementViewController <FBSceneMonitorDelegate>
{
    SBApplication *_application;
    NSString *_sceneIdentifier;
    FBScene *_scene;
    FBSceneMonitor *_monitor;
    FBSSceneSettingsDiffInspector *_settingsInspector;
    FBSSceneSettingsDiffInspector *_effectiveSettingsInspector;
    UIApplicationSceneClientSettingsDiffInspector *_clientSettingsInspector;
    NSCountedSet *_sideSwitcherHiddenRequesters;
}

- (void)sceneMonitor:(id)arg1 pairingStatusDidChangeForExternalSceneIDs:(id)arg2;
- (void)sceneMonitor:(id)arg1 sceneClientSettingsDidChangeWithDiff:(id)arg2 transitionContext:(id)arg3;
- (void)sceneMonitor:(id)arg1 effectiveSceneSettingsDidChangeWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)sceneMonitor:(id)arg1 sceneSettingsDidChangeWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)sceneMonitor:(id)arg1 sceneWasCreated:(id)arg2;
- (void)_updateSideSwitcherGrabber;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)_layoutTransitionDidEnd;
- (void)_invalidateSceneDerivedObjects;
- (void)_configureWithScene:(id)arg1;
- (void)_updateEffectiveLayoutElementVisibility;
- (_Bool)isSideSwitcherGrabberHidden;
- (void)setSideSwitcherGrabberHidden:(_Bool)arg1 forRequester:(id)arg2;
- (id)snapshotView;
- (void)prepareForReuse;
- (_Bool)supportsReuse;
- (void)configureWithEntity:(id)arg1 forElement:(id)arg2 layoutState:(id)arg3;
@property(readonly, nonatomic) long long displayMode;
- (void)setDisplayMode:(long long)arg1 options:(unsigned long long)arg2 withAnimationFactory:(id)arg3 completion:(id)arg4;
- (id)view;
@property(readonly, copy) NSString *description;
- (void)dealloc;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

