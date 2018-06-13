
#import "NSObject.h"

@class NSMutableDictionary;

@interface SBStarkFakeIconOperationController : NSObject
{
    NSMutableDictionary *_launchOperationForDisplayIDMap;
}

- (void)addLaunchOperation:(id)arg1 withDisplayID:(id)arg2;
- (_Bool)performOperationForFakeIconWithDisplayID:(id)arg1;
- (id)init;

@end

