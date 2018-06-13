
#import "NSObject.h"

#import "SBAlertObserver.h"
#import "SBLogoutProgressDataSource.h"
#import "UMCriticalUserSwitchStakeholder.h"

@class NSDictionary, NSMutableArray, NSMutableSet, NSString, SBLogoutProgressAlertViewController, SBPolicyAggregator, UMUser, UMUserManager, UMUserSwitchBlockingTask;

@interface SBUserSessionController : NSObject <SBLogoutProgressDataSource, SBAlertObserver, UMCriticalUserSwitchStakeholder>
{
    UMUserManager *_userManager;
    UMUser *_lazy_user;
    SBPolicyAggregator *_lazy_policyAggregator;
    SBLogoutProgressAlertViewController *_progressAlert;
    NSMutableArray *_displayApplications;
    NSMutableSet *_terminatingApplications;
    UMUserSwitchBlockingTask *_terminateApplicationsTask;
    NSDictionary *_debugBlockingTasks;
    _Bool _loginSession;
    _Bool _loggingOut;
}

- (struct CGPoint)_portraitOrientedProgressLocationForOrientation:(long long)arg1;
- (void)_noteApplicationDidExit:(id)arg1;
- (id)_massageApplicationListForDisplay:(id)arg1;
- (void)_displayProgressAlertIfNeeded;
- (void)_evaluateRunningApplications;
- (id)policyAggregator;
- (void)userSwitchBlockingTasksDidUpdate:(id)arg1;
- (void)readyToSwitchToUser:(id)arg1;
- (void)willSwitchToUser:(id)arg1;
- (void)alertDidDeactivate:(id)arg1;
- (id)debugBlockingTasksForLogoutProgressAlertViewController:(id)arg1;
- (id)pendingApplicationsForLogoutProgressAlertViewController:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)disableCurrentUser;
- (void)logoutWithCompletion:(id)arg1;
- (void)logout;
@property(readonly, nonatomic) long long sessionType;
@property(readonly, nonatomic) _Bool canLogout;
@property(readonly, nonatomic) _Bool isMultiUserSupported;
@property(readonly, retain, nonatomic) UMUser *user;
- (void)dealloc;
- (id)_initWithUserManager:(id)arg1;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

