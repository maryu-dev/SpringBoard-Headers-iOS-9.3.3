
#import "SBUIAnimationStepping.h"

@class BSUIAnimationFactory;

@protocol SBDosidoAnimator <SBUIAnimationStepping>
- (void)cancelDosido;
- (void)animateDosidoWithFactory:(BSUIAnimationFactory *)arg1 completion:(void (^)(_Bool))arg2;
@end

