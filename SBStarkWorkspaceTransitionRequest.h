
#import "SBWorkspaceTransitionRequest.h"

@class SBStarkScreenController;

@interface SBStarkWorkspaceTransitionRequest : SBWorkspaceTransitionRequest
{
    SBStarkScreenController *_screenController;
}

+ (id)requestWithScreenController:(id)arg1;
- (id)initWithScreenController:(id)arg1;
- (id)initWithWorkspace:(id)arg1 display:(id)arg2;

@end

