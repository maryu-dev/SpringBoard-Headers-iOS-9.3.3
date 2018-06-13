
#import "NSObject.h"

@class SBLockOverlayViewController;

@interface SBLockOverlayContext : NSObject
{
    SBLockOverlayViewController *_viewController;
    unsigned long long _priority;
    id _activationBlock;
    id _deactivationBlock;
}

- (id)initWithOverlayViewController:(id)arg1 priority:(unsigned long long)arg2;

@end

