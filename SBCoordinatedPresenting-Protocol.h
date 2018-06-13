
#import "NSObject.h"

@class NSSet, UIGestureRecognizer;

@protocol SBCoordinatedPresenting <NSObject>
@property(readonly, nonatomic) unsigned long long hintEdge;
@property(readonly, nonatomic) double hintDisplacement;
@property(readonly, nonatomic) long long coordinatedPresentingControllerIdentifier;
- (void)abortAnimatedTransition;
- (void)endTransitionWithVelocity:(struct CGPoint)arg1 wasCancelled:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
- (void)updateTransitionWithTouchLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)beginPresentationWithTouchLocation:(struct CGPoint)arg1 presentationBegunHandler:(void (^)(void))arg2;
- (_Bool)isPresentingControllerTransitioning;

@optional
@property(readonly, nonatomic) NSSet *tapExcludedViews;
@property(readonly, nonatomic) NSSet *conflictingGestures;
@property(readonly, nonatomic) NSSet *gestures;
@property(nonatomic) id <SBPresentingDelegate> presentingDelegate;
- (_Bool)shouldBeginHintForGesture:(UIGestureRecognizer *)arg1;
- (void)reenableGestureRecognizer:(UIGestureRecognizer *)arg1;
- (void)cancelGestureRecognizer:(UIGestureRecognizer *)arg1;
- (void)treatCurrentPositionAsBoundaryforGesture:(UIGestureRecognizer *)arg1;
@end

