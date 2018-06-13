
#import "NSObject.h"

@class NSMutableSet;

@interface SBOrientationLockManager : NSObject
{
    long long _userLockedOrientation;
    long long _previousLockedOrientation;
    struct __CFRunLoopObserver *_runLoopObserver;
    NSMutableSet *_lockOverrideReasons;
}

+ (id)sharedInstance;
- (void)_handler_runLoopObserverDispose;
- (void)_setupRunLoopObserverIfNecessaryForOrientation:(long long)arg1 andInitialLockState:(_Bool)arg2;
- (void)_updateLockStateWithOrientation:(long long)arg1 forceUpdateHID:(_Bool)arg2 changes:(id)arg3;
- (void)_updateLockStateWithChanges:(id)arg1;
- (void)updateLockOverrideForCurrentDeviceOrientation;
- (_Bool)lockOverrideEnabled;
- (void)enableLockOverrideForReason:(id)arg1 forceOrientation:(long long)arg2;
- (void)enableLockOverrideForReason:(id)arg1 suggestOrientation:(long long)arg2;
- (void)setLockOverrideEnabled:(_Bool)arg1 forReason:(id)arg2;
- (long long)userLockOrientation;
- (long long)effectiveLockedOrientation;
- (_Bool)isUserLocked;
- (_Bool)isEffectivelyLocked;
- (void)unlock;
- (void)lock:(long long)arg1;
- (void)lock;
- (void)dealloc;
- (id)init;
- (void)restoreStateFromPrefs;

@end

