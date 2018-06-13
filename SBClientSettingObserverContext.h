
#import "NSObject.h"

@class FBSSceneClientSettings, FBSSceneTransitionContext, FBScene;

@interface SBClientSettingObserverContext : NSObject
{
    FBScene *_scene;
    FBSSceneClientSettings *_oldClientSettings;
    FBSSceneTransitionContext *_transition;
}


@end

