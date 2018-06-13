
#import "NSObject.h"

@class FBUIScene, SBSUILoginUISceneClientSettings, UIApplicationSceneSettings;

@interface SBLoginAppClientSettingObserverContext : NSObject
{
    FBUIScene *_scene;
    UIApplicationSceneSettings *_settings;
    SBSUILoginUISceneClientSettings *_updatedClientSettings;
}


@end

