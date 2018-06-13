
#import "NSObject.h"

#import "SBUIAnimationStepping.h"

@class BSAnimationSettings, CADisplayLink, NSArray, NSMutableSet, NSString;

@interface SBAnimationStepper : NSObject <SBUIAnimationStepping>
{
    BSAnimationSettings *_animationSettings;
    NSMutableSet *_views;
    NSMutableSet *_finishedAnimatingViews;
    CADisplayLink *_displayLink;
    id _completion;
    double _percentage;
    _Bool _invalidated;
    _Bool _completed;
    _Bool _finishingForward;
    _Bool _finishingBackward;
    _Bool _animatingToStepPercent;
    double _animatedSteppingTimestamp;
    double _animatedSteppingStartPercent;
    double _animatedSteppingTargetPercent;
    double _finishBackwardTimestamp;
    double _finishBackwardDuration;
    double _finishBackwardPercentage;
    double _beganFinishingTimestamp;
    double _duration;
    double _finishSpeed;
}

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)finishSteppingBackwardToStart;
- (void)finishSteppingForwardToEnd;
@property(nonatomic) double stepPercentage;
@property(readonly, nonatomic, getter=isStepped) _Bool stepped;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_displayLinkFiredForBackwardToStart:(id)arg1;
- (void)_displayLinkFired:(id)arg1;
- (void)_setStepPercentage:(double)arg1;
- (void)_interruptFinish;
- (void)_updateAnimationSteppingTarget:(double)arg1;
- (void)_checkForCompletion;
- (void)finishSteppingBackwardToStartWithCompletion:(id)arg1;
- (void)finishSteppingForwardToEndWithCompletion:(id)arg1;
- (void)invalidate;
- (void)startSteppingAnimationsInView:(id)arg1;
- (void)dealloc;
- (id)initWithAnimationSettings:(id)arg1;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

