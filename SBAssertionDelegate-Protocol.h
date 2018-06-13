
#import "NSObject.h"

@class SBAssertion;

@protocol SBAssertionDelegate <NSObject>
- (void)assertionExpired:(SBAssertion *)arg1;
@end

