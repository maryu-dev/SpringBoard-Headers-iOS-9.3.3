
#import "NSObject.h"

@class FBDisplayManager, FBSDisplay;

@protocol FBDisplayManagerObserver <NSObject>

@optional
- (void)displayManager:(FBDisplayManager *)arg1 didDisconnectDisplay:(FBSDisplay *)arg2;
- (void)displayManager:(FBDisplayManager *)arg1 didConnectDisplay:(FBSDisplay *)arg2;
- (void)displayManager:(FBDisplayManager *)arg1 willConnectDisplay:(FBSDisplay *)arg2;
@end

