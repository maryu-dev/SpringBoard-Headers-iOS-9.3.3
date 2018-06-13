
#import "SBLaunchAlertItem.h"

@interface SBTelephonyAirplaneModeAlertItem : SBLaunchAlertItem
{
    _Bool _wasDeviceLocked;
}

- (_Bool)reappearsAfterLock;
- (_Bool)dismissOnLock;

@end

