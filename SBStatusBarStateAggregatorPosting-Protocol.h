
#import "NSObject.h"

@class SBStatusBarStateAggregator;

@protocol SBStatusBarStateAggregatorPosting <NSObject>
- (void)statusBarStateAggregatorDidFinishPost:(SBStatusBarStateAggregator *)arg1 withData:(const id *)arg2 actions:(int)arg3;
- (void)statusBarStateAggregator:(SBStatusBarStateAggregator *)arg1 didUpdateNonItemData:(const id *)arg2;
- (void)statusBarStateAggregator:(SBStatusBarStateAggregator *)arg1 didVisitItem:(int)arg2 withUpdates:(_Bool)arg3 toData:(const id *)arg4;
- (void)statusBarStateAggregatorDidStartPost:(SBStatusBarStateAggregator *)arg1;
@end

