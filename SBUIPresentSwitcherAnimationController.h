
#import "SBUIMainScreenAnimationController.h"

@interface SBUIPresentSwitcherAnimationController : SBUIMainScreenAnimationController
{
    _Bool _isInteractive;
}

- (void)_startAnimation;
- (id)_getTransitionWindow;
- (void)endTransition:(_Bool)arg1 withSuccess:(_Bool)arg2 completion:(id)arg3;
- (void)endInteractionWithCommitment:(_Bool)arg1;
- (void)setTransitionParameters:(id)arg1;
- (_Bool)canTransitionWithTranslation;
- (id)initWithTransitionContextProvider:(id)arg1 interactive:(_Bool)arg2;

@end

