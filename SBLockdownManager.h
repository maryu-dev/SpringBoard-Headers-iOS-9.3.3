
#import "NSObject.h"

@class NSString, SBDismissOnlyAlertItem;

@interface SBLockdownManager : NSObject
{
    int _state;
    _Bool _settingUpActivationState;
    _Bool _isBricked;
    _Bool _hasShownMismatchedSIM;
    SBDismissOnlyAlertItem *_activatingAlertItem;
    NSString *_unqiueDeviceIdentifier;
}

+ (_Bool)_isDeveloperDevice;
+ (id)sharedInstance;
- (int)lockdownState;
- (_Bool)brickedDevice;
- (void)_setupActivationState;
- (void)_serviceAvailabilityChanged:(id)arg1;
- (void)_activationFailed;
- (void)_resetActivationState;
- (void)_postAlertsIfNeeded;
- (_Bool)_shouldShowTelephonyAlerts;
- (void)_setCurrentAlertItem:(id)arg1;
- (_Bool)_isRegisteredToNetwork;
- (void)_setHasEverRegistered:(_Bool)arg1;
- (_Bool)_hasEverRegistered;
- (id)init;

@end

