
#import "SBWorkspaceTransaction.h"

#import "SBAlertManagerObserver.h"

@class FBDisplayLayoutTransition, NSString, SBAlertManager, SBStarkScreenController;

@interface SBStarkWorkspaceTransaction : SBWorkspaceTransaction <SBAlertManagerObserver>
{
    FBDisplayLayoutTransition *_rootLayoutTransition;
    SBStarkScreenController *_starkScreenController;
    SBAlertManager *_starkScreenAlertManager;
}

- (void)_didComplete;
- (void)_willBegin;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

