
#import "NSObject.h"

@class FBSceneHostManager, NSString;

@protocol FBSceneHostManagerDelegate <NSObject>

@optional
- (_Bool)sceneHostManager:(FBSceneHostManager *)arg1 shouldEnableHostingForRequester:(NSString *)arg2 priority:(long long)arg3;
- (NSString *)sceneHostManager:(FBSceneHostManager *)arg1 overrideRequester:(NSString *)arg2;
@end

