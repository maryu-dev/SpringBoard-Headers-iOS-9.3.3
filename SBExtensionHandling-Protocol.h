
#import "NSObject.h"

@class NSDictionary, NSString;

@protocol SBExtensionHandling <NSObject>
- (void)launchExtensionWithBundleID:(NSString *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(_Bool))arg3;
@end

