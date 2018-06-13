
#import "NSObject.h"

@protocol SUNetworkObserver <NSObject>

@optional
- (void)operatorBundleChanged;
- (void)carrierBundleChanged;
- (void)cellularRoamingStatusChanged:(_Bool)arg1;
- (void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2;
@end

