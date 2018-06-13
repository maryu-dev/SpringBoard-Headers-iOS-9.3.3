
#import "NSObject.h"

@class CADisplayLink, NSObject<OS_dispatch_group>, SBLockScreenViewController;

@interface SBUILockScreenNotificationAnimationHandler : NSObject
{
    SBLockScreenViewController *_lockScreenViewController;
    CADisplayLink *_displayLink;
    NSObject<OS_dispatch_group> *_dispatchGroup;
}

- (void)_displayLinkDidFire:(id)arg1;
- (void)performAnimationWithAdditionalAnimations:(id)arg1 completion:(id)arg2;
- (void)dealloc;
- (id)initWithLockScreenViewController:(id)arg1;

@end

