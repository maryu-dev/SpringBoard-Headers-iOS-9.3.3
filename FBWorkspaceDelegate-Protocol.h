
#import "NSObject.h"

@class FBSSceneClientSettings, FBWorkspace, NSString;

@protocol FBWorkspaceDelegate <NSObject>
- (void)workspace:(FBWorkspace *)arg1 didReceiveDestroySceneRequestForIdentifier:(NSString *)arg2 withCompletion:(void (^)(void))arg3;
- (void)workspace:(FBWorkspace *)arg1 didReceiveCreateSceneRequestForIdentifier:(NSString *)arg2 initialClientSettings:(FBSSceneClientSettings *)arg3 withCompletion:(void (^)(FBScene *))arg4;
@end

