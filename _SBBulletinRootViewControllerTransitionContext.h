
#import "NSObject.h"

@class UIView, UIViewController;

@interface _SBBulletinRootViewControllerTransitionContext : NSObject
{
    _Bool _animated;
    _Bool _presenting;
    UIView *_containerView;
    UIViewController *_presentingViewController;
    UIViewController *_presentedViewController;
    id _presentationCompletion;
    id _dismissalCompletion;
}


@end

