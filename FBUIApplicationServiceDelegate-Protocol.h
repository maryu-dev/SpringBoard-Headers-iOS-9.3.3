
#import "NSObject.h"

@class FBUIApplicationService, NSDate, NSString;

@protocol FBUIApplicationServiceDelegate <NSObject>

@optional
- (void)applicationService:(FBUIApplicationService *)arg1 suspendApplicationWithBundleIdentifier:(NSString *)arg2;
- (void)applicationService:(FBUIApplicationService *)arg1 setNextWakeDate:(NSDate *)arg2 forBundleIdentifier:(NSString *)arg3;
- (void)applicationService:(FBUIApplicationService *)arg1 deleteAllSnapshotsForBundleIdentifier:(NSString *)arg2;
- (void)applicationService:(FBUIApplicationService *)arg1 getBadgeValueForBundleIdentifier:(NSString *)arg2 withCompletion:(void (^)(id))arg3;
- (void)applicationService:(FBUIApplicationService *)arg1 setBadgeValue:(id)arg2 forBundleIdentifier:(NSString *)arg3;
@end

