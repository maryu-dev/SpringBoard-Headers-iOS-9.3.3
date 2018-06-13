
#import "NSObject.h"

@class FBSSceneTransitionContext, FBScene, SBApplication, UIApplicationSceneClientSettings, UIApplicationSceneSettings;

@interface SBAppClientSettingObserverContext : NSObject
{
    FBScene *_scene;
    SBApplication *_app;
    UIApplicationSceneSettings *_settings;
    UIApplicationSceneClientSettings *_oldClientSettings;
    UIApplicationSceneClientSettings *_updatedClientSettings;
    FBSSceneTransitionContext *_transition;
}


@end

