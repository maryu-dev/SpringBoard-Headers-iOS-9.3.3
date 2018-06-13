
#import "SBWorkspaceTransitionRequest.h"

@class SBMainWorkspace;

@interface SBMainWorkspaceTransitionRequest : SBWorkspaceTransitionRequest
{
    long long _source;
    id _transactionProvider;
}

- (_Bool)isMainWorkspaceTransitionRequest;
- (id)succinctDescriptionBuilder;
- (void)declineWithReason:(id)arg1;
- (id)initWithWorkspace:(id)arg1 display:(id)arg2;
- (id)initWithDisplay:(id)arg1;


@end

