
#import "NSObject.h"

@class FBSDisplayLayout, FBSDisplayLayoutMonitor, FBSDisplayLayoutTransitionContext;

@protocol FBSDisplayLayoutObserver <NSObject>

@optional
- (void)layoutMonitor:(FBSDisplayLayoutMonitor *)arg1 didUpdateDisplayLayout:(FBSDisplayLayout *)arg2 withContext:(FBSDisplayLayoutTransitionContext *)arg3;
- (void)layoutMonitor:(FBSDisplayLayoutMonitor *)arg1 didUpdateDisplayLayout:(FBSDisplayLayout *)arg2;
@end

