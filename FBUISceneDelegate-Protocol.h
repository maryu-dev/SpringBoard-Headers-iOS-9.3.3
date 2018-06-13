
#import "NSObject.h"

@class FBSMutableSceneClientSettings, FBSSceneClientSettingsDiff, FBSSceneTransitionContext, FBUIScene, NSError, NSSet;

@protocol FBUISceneDelegate <NSObject>

@optional
- (void)scene:(FBUIScene *)arg1 didDeactivateWithError:(NSError *)arg2;
- (void)scene:(FBUIScene *)arg1 willActivateWithTransitionContext:(FBSSceneTransitionContext *)arg2;
- (_Bool)scene:(FBUIScene *)arg1 handleIncomingActions:(NSSet *)arg2;
- (void)scene:(FBUIScene *)arg1 didUpdateClientSettingsWithDiff:(FBSSceneClientSettingsDiff *)arg2;
- (void)scene:(FBUIScene *)arg1 configureInitialClientSettings:(FBSMutableSceneClientSettings *)arg2;
@end

