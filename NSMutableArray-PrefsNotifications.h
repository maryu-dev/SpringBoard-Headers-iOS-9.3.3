
#import "NSMutableArray.h"

@interface NSMutableArray (PrefsNotifications)
- (id)prefsNotificationsAlertString;
- (id)_alertStringForPref:(id)arg1;
- (id)_callingNamePresentationString:(id)arg1;
- (id)_ssPasswordString:(id)arg1;
- (id)_serviceCenterAddressString:(id)arg1;
- (id)_simLockString:(id)arg1;
- (id)_callingLineIDRestrictionString:(id)arg1;
- (id)_connectedLineIDRestrictionString:(id)arg1;
- (id)_callingLinePresentationString:(id)arg1;
- (id)_connectedLinePresentationString:(id)arg1;
- (id)_fixedDialingString:(id)arg1;
- (id)_callBarringString:(id)arg1;
- (id)_callWaitingString:(id)arg1;
- (id)_callForwardingString:(id)arg1;
- (void)addPrefNotification:(id)arg1 withUserInfo:(id)arg2;
@end

