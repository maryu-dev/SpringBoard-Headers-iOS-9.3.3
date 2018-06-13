
#import "NSObject.h"

@protocol SBBulletinWindowClient <NSObject>

@optional
- (void)bulletinWindowDidResignKey;
- (void)bulletinWindowDidBecomeKey;
- (_Bool)requiresKeyWindow;
@end

