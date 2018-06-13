
#import "NSObject.h"

@class PCPersistentTimer, SBLockScreenViewController, SBMediaController;

@interface SBLockScreenNowPlayingPluginController : NSObject
{
    SBLockScreenViewController *_viewController;
    SBMediaController *_mediaController;
    PCPersistentTimer *_disableTimer;
    _Bool _enabled;
}

- (void)_startDisableTimer;
- (void)_disableNowPlayingPlugin;
- (void)_enableNowPlayingPlugin;
- (void)_updateNowPlayingPlugin;
- (void)_addObservers;
- (void)invalidateDisableTimer;
- (_Bool)isNowPlayingPluginActive;
- (void)dealloc;
- (id)initWithLockScreenViewController:(id)arg1 mediaController:(id)arg2;

@end

