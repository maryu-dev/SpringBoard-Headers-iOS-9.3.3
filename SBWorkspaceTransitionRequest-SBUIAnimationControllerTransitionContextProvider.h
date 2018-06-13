
#import "SBWorkspaceTransitionRequest.h"

#import "SBUIAnimationControllerTransitionContextProvider.h"

@class NSSet, NSString;

@interface SBWorkspaceTransitionRequest (SBUIAnimationControllerTransitionContextProvider) <SBUIAnimationControllerTransitionContextProvider>
@property(readonly, copy, nonatomic) NSSet *deactivatingApps;
@property(readonly, copy, nonatomic) NSSet *activatingApps;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

