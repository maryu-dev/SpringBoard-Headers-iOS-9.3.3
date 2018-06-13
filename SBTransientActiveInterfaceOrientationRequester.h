
#import "NSObject.h"

@class NSString;

@interface SBTransientActiveInterfaceOrientationRequester : NSObject
{
    long long _orientation;
    NSString *_reason;
}

- (id)initWithOrientation:(long long)arg1 andReason:(id)arg2;

@end

