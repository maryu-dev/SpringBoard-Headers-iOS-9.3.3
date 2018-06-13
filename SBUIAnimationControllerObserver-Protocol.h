
#import "BSTransactionObserver.h"

@class SBUIAnimationController;

@protocol SBUIAnimationControllerObserver <BSTransactionObserver>

@optional
- (void)animationControllerDidRevealApplication:(SBUIAnimationController *)arg1;
- (void)animationControllerDidFinishAnimation:(SBUIAnimationController *)arg1;
- (void)animationController:(SBUIAnimationController *)arg1 willBeginAnimation:(_Bool)arg2;
@end

