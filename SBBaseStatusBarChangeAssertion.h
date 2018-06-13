
#import "NSObject.h"

@class NSString;

@interface SBBaseStatusBarChangeAssertion : NSObject
{
    NSString *_reason;
}

- (void)invalidate;
- (id)description;
- (id)_initWithReason:(id)arg1;
- (id)init;

@end

