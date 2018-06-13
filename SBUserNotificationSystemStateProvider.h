
#import "NSObject.h"

#import "UNSystemStateProviding.h"

@class NSString;

@interface SBUserNotificationSystemStateProvider : NSObject <UNSystemStateProviding>
{
}

- (id)_newsstandApplicationWithBundleIdentifier:(id)arg1;
- (id)_applicationWithBundleIdentifier:(id)arg1;
- (void)handleNewsstandNotificationForApplication:(id)arg1 userInfo:(id)arg2;
- (_Bool)shouldThrottleContentNotificationForApplicatin:(id)arg1 onDate:(id)arg2 withLastCount:(unsigned long long *)arg3 onDay:(long long *)arg4;
- (_Bool)isNewsstandContentBackgroundModeSupportedForApplication:(id)arg1;
- (_Bool)isNewsstandApplication:(id)arg1;
- (_Bool)isSystemApplication:(id)arg1;
- (_Bool)isInternalApplication:(id)arg1;
- (void)setShowAlarmStatusBarItem:(_Bool)arg1;
- (id)displayNameForApplication:(id)arg1;
- (_Bool)shouldShowUserNotificationPermissionAlertForBundleIdentifier:(id)arg1;
- (_Bool)shouldSuppressUserNotificationPermissionAlertForBundleIdentifier:(id)arg1;
- (_Bool)shouldUseDefaultDataProviderForBundleIdentifier:(id)arg1;
- (void)handleContentAvailableNotificationForApplication:(id)arg1 userInfo:(id)arg2 priority:(long long)arg3 completion:(id)arg4;
- (_Bool)isRemoteNotificationBackgroundModeSupportedForApplication:(id)arg1;
- (_Bool)isBackgroundAppRefreshSupportedForApplication:(id)arg1;
- (_Bool)isApplicationRestricted:(id)arg1;
- (_Bool)isApplicationInstalled:(id)arg1;
- (id)bulletinBoardQueue;
- (id)dataProviderConnection;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

