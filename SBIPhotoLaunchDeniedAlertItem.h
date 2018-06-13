
#import "SBAlertItem.h"

@interface SBIPhotoLaunchDeniedAlertItem : SBAlertItem
{
    _Bool _offersMigration;
}

- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (_Bool)ignoreIfAlreadyDisplaying;
- (_Bool)dismissOnLock;

@end

