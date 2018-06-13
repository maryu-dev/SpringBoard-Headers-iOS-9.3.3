
#import "SBMainWorkspaceTransaction.h"

@class SBStarkScreenController;

@interface SBStarkDisconnectWorkspaceTransaction : SBMainWorkspaceTransaction
{
    SBStarkScreenController *_screenController;
}

- (void)_didComplete;
- (void)_begin;
- (id)initWithTransitionRequest:(id)arg1 starkScreenController:(id)arg2;
- (id)initWithTransitionRequest:(id)arg1;

@end

