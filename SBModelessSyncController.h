
#import "NSObject.h"

@class ATConnection;

@interface SBModelessSyncController : NSObject
{
    _Bool _isAppSyncing;
    _Bool _isSyncing;
    int _syncRegistrationToken;
    int _iCloudRestoreToken;
    _Bool _restoringFromICloud;
    _Bool _isAutoSyncing;
    _Bool _isWirelessSyncing;
    ATConnection *_airTrafficConnection;
}

+ (id)sharedInstance;
- (void)_endObservingICloudRestoreStatus;
- (void)_beginObservingICloudRestoreStatus;
- (void)_iCloudStatusChanged;
@property(readonly, nonatomic) _Bool isRestoringFromICloud;
- (void)_updateIconsForStateChange;
- (void)_setAppSyncState:(_Bool)arg1;
- (void)_appSyncStateChanged;
- (void)gotLowBatteryWarning;
- (void)endMonitoring;
- (void)beginMonitoring;
- (void)connectionWasInterrupted:(id)arg1;
- (void)connection:(id)arg1 updatedProgress:(id)arg2;
- (void)setIsSyncing:(_Bool)arg1;
- (void)dealloc;
- (id)init;

@end

