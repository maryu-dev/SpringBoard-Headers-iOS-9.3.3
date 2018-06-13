
#import "NSObject.h"

@class NSError, SBRemoteAlertController;

@protocol SBRemoteAlertControllerDelegate <NSObject>
- (void)queue_remoteAlertController:(SBRemoteAlertController *)arg1 didInvalidateWithReason:(long long)arg2 underlyingError:(NSError *)arg3;
- (void)queue_remoteAlertControllerDidChangeActivationState:(SBRemoteAlertController *)arg1;
@end

