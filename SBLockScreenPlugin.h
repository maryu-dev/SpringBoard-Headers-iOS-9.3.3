
#import "NSObject.h"

@class NSString, SBAwayViewPluginController, SBLockOverlayContext;

@interface SBLockScreenPlugin : NSObject
{
    SBAwayViewPluginController *_controller;
    SBLockOverlayContext *_overlay;
    NSString *_bundleName;
    id _auxiliaryActivationAnimationBlock;
    id _auxiliaryDeactivationAnimationBlock;
}


@end

