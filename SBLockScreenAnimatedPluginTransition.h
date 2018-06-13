
#import "SBLockScreenPluginTransition.h"

@class SBLockOverlayTransition;

@interface SBLockScreenAnimatedPluginTransition : SBLockScreenPluginTransition
{
    SBLockOverlayTransition *_activeToOverlayTransition;
    SBLockOverlayTransition *_activeFromOverlayTransition;
    SBLockOverlayTransition *_activeOverlayTransition;
}

- (void)_finalizeAndClearPluginAnimationContext;
- (void)beginTransition;

@end

