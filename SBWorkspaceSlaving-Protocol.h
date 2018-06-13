
#import "NSObject.h"

@class NSSet, SBWorkspace, SBWorkspaceTransitionRequest;

@protocol SBWorkspaceSlaving <NSObject>
- (NSSet *)master:(SBWorkspace *)arg1 slaveTransactionsForTransitionRequest:(SBWorkspaceTransitionRequest *)arg2;
@end

