
#import "NSObject.h"

@class NSSet, NSString;

@protocol SBStatusBarStyleOverridesAssertionServer <NSObject>
- (void)setStatusString:(NSString *)arg1 forAssertionWithIdentifier:(NSString *)arg2;
- (void)deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(NSSet *)arg1;
- (void)activateStatusBarStyleOverridesAssertions:(NSSet *)arg1 reply:(void (^)(NSDictionary *))arg2;
@end

