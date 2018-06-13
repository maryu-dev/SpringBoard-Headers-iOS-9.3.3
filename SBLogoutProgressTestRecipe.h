
#import "NSObject.h"

#import "SBLogoutProgressDataSource.h"
#import "SBTestRecipe.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, SBLogoutProgressAlertViewController;

@interface SBLogoutProgressTestRecipe : NSObject <SBLogoutProgressDataSource, SBTestRecipe>
{
    NSMutableArray *_tasks;
    SBLogoutProgressAlertViewController *_logoutProgressAlert;
    NSArray *_remainingApplications;
    NSDictionary *_remainingBlockingTasks;
}

+ (id)title;
- (id)_defaultPendingApplications;
- (id)_defaultBlockingTasks;
- (id)debugBlockingTasksForLogoutProgressAlertViewController:(id)arg1;
- (id)pendingApplicationsForLogoutProgressAlertViewController:(id)arg1;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

