
#import "NSObject.h"

@class SBLockScreenPlugin, SBLockScreenViewController;

@interface SBLockScreenPluginTransitionContext : NSObject
{
    SBLockScreenViewController *_lockScreenViewController;
    SBLockScreenPlugin *_fromPlugin;
    SBLockScreenPlugin *_toPlugin;
}


@end

