
#import "SBFDeviceLockController.h"

@class SecureBackup;

@interface SBDeviceLockController : SBFDeviceLockController
{
    SecureBackup *_secureBackupHelper;
    _Bool _inSecureMode;
}

+ (id)_selectDeviceLockModel;
+ (id)sharedController;
+ (id)_sharedControllerCreateIfNecessary:(_Bool)arg1;
- (void)_uncachePasscodeIfNecessary;
- (void)_cachePassword:(id)arg1;
- (_Bool)shouldAllowUnlockToApplication:(id)arg1;
- (void)_wipeDevice;
- (_Bool)attemptDeviceUnlockWithPassword:(id)arg1 appRequested:(_Bool)arg2;
- (void)_keybagLockStateChangedTo:(int)arg1;
- (void)_lockStateChangedFrom:(int)arg1 to:(int)arg2;
- (_Bool)_shouldVetoPasscodeLock;
- (_Bool)_isInSecureMode;
- (void)_setSecureMode:(_Bool)arg1 postNotification:(_Bool)arg2;
- (void)setBlockedForThermalCondition:(_Bool)arg1;
- (id)init;

@end

