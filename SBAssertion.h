
#import "NSObject.h"

@class NSObject<OS_dispatch_source>, NSString;

@interface SBAssertion : NSObject
{
    id <SBAssertionDelegate> _delegate;
    NSString *_reason;
    unsigned int _clientPort;
    NSObject<OS_dispatch_source> *_source;
}

- (id)description;
- (void)dealloc;
- (id)initWithClientPort:(unsigned int)arg1 reason:(id)arg2;

@end

