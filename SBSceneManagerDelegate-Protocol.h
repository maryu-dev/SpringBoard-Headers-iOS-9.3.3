
#import "NSObject.h"

@class FBScene, SBSceneManager;

@protocol SBSceneManagerDelegate <NSObject>
- (void)sceneManager:(SBSceneManager *)arg1 scene:(FBScene *)arg2 willTransitionToState:(unsigned long long)arg3;
@end

