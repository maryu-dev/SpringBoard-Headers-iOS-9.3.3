
#import "NSObject.h"

@class NSLock, NSMutableDictionary;

@interface SBApplicationShortcutStoreManager : NSObject
{
    NSLock *_stateLock;
    NSMutableDictionary *_storesKeyedByBundleIdentifier;
}

+ (id)sharedManager;
- (id)_stateLock_storeForBundleIdentifier:(id)arg1;
- (void)_installedAppsDidChange:(id)arg1;
- (void)saveSynchronously;
- (void)setShortcutItems:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)shortcutItemsForBundleIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;

@end

