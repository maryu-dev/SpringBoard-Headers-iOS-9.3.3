
#import "FBSceneHostManagerDelegate.h"

@class FBWindowContextHostManager, NSString;

@protocol FBWindowContextHostManagerDelegate <FBSceneHostManagerDelegate>

@optional
- (_Bool)windowContextHostManager:(FBWindowContextHostManager *)arg1 shouldEnableContextHostingForRequester:(NSString *)arg2 priority:(long long)arg3;
- (NSString *)windowContextHostManager:(FBWindowContextHostManager *)arg1 overrideRequester:(NSString *)arg2;
@end

