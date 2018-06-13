
#import "NSObject.h"

@class FBProcess, FBProcessManager;

@protocol FBProcessManagerObserver <NSObject>
- (void)processManager:(FBProcessManager *)arg1 didRemoveProcess:(FBProcess *)arg2;
- (void)processManager:(FBProcessManager *)arg1 didAddProcess:(FBProcess *)arg2;
@end

