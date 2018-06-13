
#import "SBLockOverlayContext.h"

@interface SBLockScreenPluginOverlayContext : SBLockOverlayContext
{
    _Bool _disabledMesaMatching;
}

- (_Bool)_pluginNeedsOverlay:(id)arg1;
- (id)initWithPluginName:(id)arg1 pluginController:(id)arg2 lockScreenViewController:(id)arg3;

@end

