
#import "SBWorkspaceTransitionContext.h"

@class SBWorkspaceAlert;

@interface SBWorkspaceAlertTransitionContext : SBWorkspaceTransitionContext
{
    SBWorkspaceAlert *_alertToActivate;
    SBWorkspaceAlert *_alertToDeactivate;
    _Bool _transitionIsAlertActivation;
}

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end

