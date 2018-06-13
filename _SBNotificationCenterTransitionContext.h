
#import "NSObject.h"

@interface _SBNotificationCenterTransitionContext : NSObject
{
    _Bool _presenting;
    _Bool _interactive;
    _Bool _fromCurrentState;
    id _stepper;
    id _setupPrelude;
    id _setupPostlude;
    id _animationPrelude;
    id _presentationBegunHandler;
    id _animationPostlude;
    id _pendingTransition;
    id _completion;
    struct CGPoint _initialTouchLocation;
}


@end

