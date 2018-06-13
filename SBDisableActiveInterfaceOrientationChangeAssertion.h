
#import "NSObject.h"

@class NSString;

@interface SBDisableActiveInterfaceOrientationChangeAssertion : NSObject
{
    NSString *_reason;
}

- (void)invalidate;
- (id)description;
- (void)dealloc;
- (id)initWithReason:(id)arg1;

@end

