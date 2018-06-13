
#import "SBUIAnimationController.h"

@class SBStarkScreenController;

@interface SBUIStarkScreenAnimationController : SBUIAnimationController
{
    SBStarkScreenController *_starkScreenController;
}

- (id)__waitForAppActivationTransactionForApplication:(id)arg1;
- (void)_cleanupAnimation;
- (void)__startAnimation;
- (_Bool)__wantsInitialProgressStateChange;
- (id)_getTransitionWindow;
- (id)initWithTransitionContextProvider:(id)arg1 starkScreenController:(id)arg2;

@end

