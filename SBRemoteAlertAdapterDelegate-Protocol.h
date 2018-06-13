
#import "NSObject.h"

@class NSError, SBRemoteAlertAdapter;

@protocol SBRemoteAlertAdapterDelegate <NSObject>
- (void)remoteAlertAdapter:(SBRemoteAlertAdapter *)arg1 didTerminateWithError:(NSError *)arg2;
- (void)remoteAlertAdapterDidRequestDismissal:(SBRemoteAlertAdapter *)arg1;
- (void)remoteAlertAdapterDidDeactivate:(SBRemoteAlertAdapter *)arg1;
- (void)remoteAlertAdapterDidActivate:(SBRemoteAlertAdapter *)arg1;
@end

