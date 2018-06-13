
#import "NSObject.h"

@interface SBLockScreenActionContextFactory : NSObject
{
}

+ (id)sharedInstance;
- (id)lockScreenActionContextForActivityBlock:(id)arg1;
- (id)lockScreenActionContextForContinuityApp:(id)arg1 withUniqueIdentifier:(id)arg2 andActivityTypeIdentifier:(id)arg3 appSuggestion:(id)arg4;
- (id)lockScreenActionContextForWidgetRequest:(id)arg1;
- (id)lockScreenActionContextForSnoozedAlarmItem:(id)arg1;
- (id)lockScreenActionContextForCardItem:(id)arg1;
- (id)lockScreenActionContextForAlertItem:(id)arg1;
- (id)lockScreenActionContextForBulletin:(id)arg1 action:(id)arg2 origin:(int)arg3 pluginActionsAllowed:(_Bool)arg4 context:(id)arg5 completion:(id)arg6;
- (id)lockScreenActionContextForBulletin:(id)arg1 withOrigin:(int)arg2 pluginActionsAllowed:(_Bool)arg3;

@end

