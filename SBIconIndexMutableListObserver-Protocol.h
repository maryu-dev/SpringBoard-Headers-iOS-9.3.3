
#import "NSObject.h"

@class NSSet, SBIconIndexMutableList;

@protocol SBIconIndexMutableListObserver <NSObject>
- (void)list:(SBIconIndexMutableList *)arg1 didRemoveContainedNodeIdentifiers:(NSSet *)arg2;
- (void)list:(SBIconIndexMutableList *)arg1 didAddContainedNodeIdentifiers:(NSSet *)arg2;
@end

