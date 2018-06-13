
#import "NSObject.h"

@class NSString, SBAppView;

@protocol SBAppViewHostRequester <NSObject>
- (long long)appViewRequesterPriority:(SBAppView *)arg1;
- (NSString *)appViewRequesterIdentifier:(SBAppView *)arg1;
@end

