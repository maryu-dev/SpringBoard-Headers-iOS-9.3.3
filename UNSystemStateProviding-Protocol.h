
#import "NSObject.h"

@class NSDate, NSDictionary, NSString;

@protocol UNSystemStateProviding <NSObject>
- (void)handleNewsstandNotificationForApplication:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (_Bool)shouldThrottleContentNotificationForApplicatin:(NSString *)arg1 onDate:(NSDate *)arg2 withLastCount:(unsigned long long *)arg3 onDay:(long long *)arg4;
- (_Bool)isNewsstandContentBackgroundModeSupportedForApplication:(NSString *)arg1;
- (_Bool)isNewsstandApplication:(NSString *)arg1;
- (void)handleContentAvailableNotificationForApplication:(NSString *)arg1 userInfo:(NSDictionary *)arg2 priority:(long long)arg3 completion:(void (^)(void))arg4;
- (_Bool)isRemoteNotificationBackgroundModeSupportedForApplication:(NSString *)arg1;
- (_Bool)isBackgroundAppRefreshSupportedForApplication:(NSString *)arg1;
- (_Bool)isApplicationRestricted:(NSString *)arg1;
- (_Bool)isApplicationInstalled:(NSString *)arg1;
@end

