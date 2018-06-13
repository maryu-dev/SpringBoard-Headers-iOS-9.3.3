
#import "NSObject.h"

@class SBWorkStore;

@protocol SBWorkStoreObserver <NSObject>
- (void)workDidChange:(SBWorkStore *)arg1;
@end

