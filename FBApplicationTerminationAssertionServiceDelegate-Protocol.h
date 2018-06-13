
#import "NSObject.h"

@class FBApplicationTerminationAssertion, FBApplicationTerminationAssertionService;

@protocol FBApplicationTerminationAssertionServiceDelegate <NSObject>
- (void)service:(FBApplicationTerminationAssertionService *)arg1 didRelinquishTerminationAssertion:(FBApplicationTerminationAssertion *)arg2;
- (void)service:(FBApplicationTerminationAssertionService *)arg1 didAcquireTerminationAssertion:(FBApplicationTerminationAssertion *)arg2;
- (void)service:(FBApplicationTerminationAssertionService *)arg1 canAcquireTerminationAssertion:(FBApplicationTerminationAssertion *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

