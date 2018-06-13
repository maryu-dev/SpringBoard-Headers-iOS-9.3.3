
#import "NSObject.h"

@class NSObject<OS_dispatch_group>;

@interface SBReverseCountedSemaphore : NSObject
{
    NSObject<OS_dispatch_group> *_group;
}

- (void)wait;
- (void)decrement;
- (void)increment;
- (id)init;

@end

