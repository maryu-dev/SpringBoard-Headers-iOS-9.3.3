
#import "NSObject.h"

@class SBLockScreenActionContext;

@protocol SBLockScreenActionHandler <NSObject>
- (void)handleLockScreenActionWithContext:(SBLockScreenActionContext *)arg1;
@end

