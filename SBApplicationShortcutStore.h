
#import "NSObject.h"

@class NSArray, NSLock, NSObject<OS_dispatch_queue>, NSString;

@interface SBApplicationShortcutStore : NSObject
{
    NSLock *_stateLock;
    NSObject<OS_dispatch_queue> *_saveQueue;
    NSArray *_cachedShortcutItems;
    _Bool _isLoaded;
    _Bool _isDirty;
    NSString *_bundleIdentifier;
}

@property(copy, nonatomic) NSArray *shortcutItems;
- (void)_stateLock_markDirty;
- (void)_saveQueue_save;
- (void)saveSynchronously;
- (void)_stateLock_loadFromDiskIfNeeded;
- (id)_plistArrayFromShortcutItems:(id)arg1;
- (id)_shortcutItemsFromPlistArray:(id)arg1;
- (id)_url;
- (id)description;
- (id)initWithBundleIdentifier:(id)arg1;

@end

