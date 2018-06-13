
#import "NSObject.h"

@protocol UIViewControllerInteractiveTransitioning <NSObject>
- (void)startInteractiveTransition:(id <UIViewControllerContextTransitioning>)arg1;

@optional
- (long long)completionCurve;
- (double)completionSpeed;
@end

