
#import "NSObject.h"

@class SBLayoutState, SBWorkspaceEntity, SBWorkspaceTransitionContext;

@protocol SBWorkspaceTransitionLayoutDelegate <NSObject>
- (struct CGRect)transitionContext:(SBWorkspaceTransitionContext *)arg1 referenceFrameForEntity:(SBWorkspaceEntity *)arg2;
- (SBLayoutState *)originalLayoutStateForTransitionContext:(SBWorkspaceTransitionContext *)arg1;
- (SBLayoutState *)layoutStateForTransitionContext:(SBWorkspaceTransitionContext *)arg1;
@end

