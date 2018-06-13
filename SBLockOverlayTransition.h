
#import "NSObject.h"

@class SBLockOverlayContext, SBLockScreenViewController;

@interface SBLockOverlayTransition : NSObject
{
    SBLockOverlayContext *_from;
    SBLockOverlayContext *_to;
    SBLockScreenViewController *_lockScreenVC;
}

+ (id)underlayRequesterNameForContext:(id)arg1;
- (void)_hideLockContent;
- (void)performTransitionWithAnimationFactory:(id)arg1 completion:(id)arg2;
- (id)initFromOverlay:(id)arg1 toOverlay:(id)arg2 inside:(id)arg3;

@end

