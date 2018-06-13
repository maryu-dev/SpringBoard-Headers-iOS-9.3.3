
#import "SBUIAnimationController.h"

#import "SBUIAnimationControllerObserver.h"

@class NSArray, NSMutableArray, NSString;

@interface SBUIAnimationControllerGroup : SBUIAnimationController <SBUIAnimationControllerObserver>
{
    _Bool _finished;
    NSMutableArray *_animations;
}

@property(readonly, copy) NSString *description;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (void)_forEachAnimation:(id)arg1;
- (void)_startAnimation;
- (_Bool)_willAnimate;
- (_Bool)waitingToStart;
- (void)addAnimation:(id)arg1;
- (id)initWithAnimations:(id)arg1;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

