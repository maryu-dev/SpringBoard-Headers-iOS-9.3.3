
#import "SBMainWorkspaceTransaction.h"

@class SBStarkScreenController;

@interface SBStarkConnectWorkspaceTransaction : SBMainWorkspaceTransaction
{
    SBStarkScreenController *_screenController;
}

- (void)_begin;
- (id)initWithTransitionRequest:(id)arg1 starkScreenController:(id)arg2;
- (id)initWithTransitionRequest:(id)arg1;

@end

