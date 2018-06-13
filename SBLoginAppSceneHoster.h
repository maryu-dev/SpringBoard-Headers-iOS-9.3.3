
#import "NSObject.h"

#import "FBUISceneDelegate.h"
#import "SBLoginAppSceneHoster.h"

@class FBUIScene, FBUISceneWorkspace, NSString, SBApplication, SBSUILoginUISceneClientSettingsDiffInspector, UIView;

@interface SBLoginAppSceneHoster : NSObject <FBUISceneDelegate, SBLoginAppSceneHoster>
{
    FBUISceneWorkspace *_sceneWorkspace;
    FBUIScene *_loginScene;
    long long _cachedActivationOrientationForInitialClientSettings;
    SBSUILoginUISceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
    _Bool _deferHIDEvents;
    _Bool _hidEventDeferralsInstalled;
    id <SBLoginAppSceneHosterDelegate> _delegate;
}

- (void)scene:(id)arg1 didDeactivateWithError:(id)arg2;
- (void)scene:(id)arg1 willActivateWithTransitionContext:(id)arg2;
- (_Bool)scene:(id)arg1 handleIncomingActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2;
- (void)scene:(id)arg1 configureInitialClientSettings:(id)arg2;
- (void)_updateHIDEventDeferralsIfNecessary;
- (id)_appClientSettingsDiffInspector;
@property(readonly, nonatomic) NSString *hostedSceneIdentifier;
@property(readonly, nonatomic) NSString *hostedAppBundleID;
@property(readonly, nonatomic) UIView *contentView;
- (void)updateSettingsWithTransitionBlock:(id)arg1 completion:(id)arg2;
- (void)killLoginApp;
- (void)launchLoginAppWithCompletion:(id)arg1;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

