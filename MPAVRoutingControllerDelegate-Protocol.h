
#import "NSObject.h"

@class MPAVRoutingController, NSError;

@protocol MPAVRoutingControllerDelegate <NSObject>

@optional
- (void)routingControllerDidPauseFromActiveRouteChange:(MPAVRoutingController *)arg1;
- (void)routingController:(MPAVRoutingController *)arg1 didFailToPickRouteWithError:(NSError *)arg2;
- (void)routingControllerExternalScreenTypeDidChange:(MPAVRoutingController *)arg1;
- (void)routingControllerAvailableRoutesDidChange:(MPAVRoutingController *)arg1;
@end

