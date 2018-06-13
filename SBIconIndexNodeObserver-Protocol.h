
#import "NSObject.h"

@class NSSet;

@protocol SBIconIndexNodeObserver <NSObject>
- (void)node:(id <SBIconIndexNode>)arg1 didRemoveContainedNodeIdentifiers:(NSSet *)arg2;
- (void)node:(id <SBIconIndexNode>)arg1 didAddContainedNodeIdentifiers:(NSSet *)arg2;
@end

