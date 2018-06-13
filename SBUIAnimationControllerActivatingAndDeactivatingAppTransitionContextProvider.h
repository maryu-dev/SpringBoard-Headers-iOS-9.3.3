
#import "NSObject.h"

#import "SBUIAnimationControllerTransitionContextProvider.h"

@class NSSet, NSString, SBWorkspaceApplication;

@interface SBUIAnimationControllerActivatingAndDeactivatingAppTransitionContextProvider : NSObject <SBUIAnimationControllerTransitionContextProvider>
{
    SBWorkspaceApplication *_activatingApp;
    SBWorkspaceApplication *_deactivatingApp;
}

+ (id)transitionContextProviderWithActivatingApp:(id)arg1 deactivatingApp:(id)arg2;
@property(readonly, copy, nonatomic) NSSet *deactivatingApps;
@property(readonly, copy, nonatomic) NSSet *activatingApps;
- (id)initWithActivatingApp:(id)arg1 deactivatingApp:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

