
#import "NSObject.h"

@class BSUIAnimationFactory, NSArray, SBAlert, SBAlertManager, SBAlertWindow;

@protocol SBAlertManagerObserver <NSObject>

@optional
- (void)alertManager:(SBAlertManager *)arg1 didRemoveAlert:(SBAlert *)arg2 fromWindow:(SBAlertWindow *)arg3;
- (void)alertManager:(SBAlertManager *)arg1 didTearDownAlertWindow:(SBAlertWindow *)arg2;
- (void)alertManager:(SBAlertManager *)arg1 willTearDownAlertWindow:(SBAlertWindow *)arg2;
- (void)alertManager:(SBAlertManager *)arg1 didCreateAlertWindow:(SBAlertWindow *)arg2;
- (void)alertManager:(SBAlertManager *)arg1 topAlertDidChangeOrientationEventsEnabled:(SBAlert *)arg2;
- (void)alertManager:(SBAlertManager *)arg1 topAlert:(SBAlert *)arg2 didChangeStatusBarVisibility:(_Bool)arg3;
- (void)alertManager:(SBAlertManager *)arg1 topAlert:(SBAlert *)arg2 requestsWallpaperStyleChangeWithAnimationFactory:(BSUIAnimationFactory *)arg3;
- (void)alertManager:(SBAlertManager *)arg1 didChangeTopAlertFromAlert:(SBAlert *)arg2 toAlert:(SBAlert *)arg3;
- (void)alertManager:(SBAlertManager *)arg1 didDeactivateAlert:(SBAlert *)arg2 top:(_Bool)arg3;
- (void)alertManager:(SBAlertManager *)arg1 willDeactivateAlert:(SBAlert *)arg2 top:(_Bool)arg3;
- (void)alertManager:(SBAlertManager *)arg1 didActivateAlert:(SBAlert *)arg2 overAlerts:(NSArray *)arg3;
- (void)alertManager:(SBAlertManager *)arg1 willActivateAlert:(SBAlert *)arg2 overAlerts:(NSArray *)arg3;
@end

