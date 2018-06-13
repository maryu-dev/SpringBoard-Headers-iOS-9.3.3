
#import "NSObject.h"

#import "SBDosidoAnimator.h"

@class NSString, SBAnimationStepper, UIView;

@interface SBDosidoAnimator : NSObject <SBDosidoAnimator>
{
    UIView *_parentView;
    UIView *_transformContainer;
    UIView *_transformedContent;
    SBAnimationStepper *_stepper;
    id _completion;
    _Bool _animationCompleted;
    _Bool _stepped;
    _Bool _cleanedUp;
    _Bool _hidden;
    _Bool _transparent;
    long long _fromOrientation;
    double _spacingBetweenViews;
    unsigned long long _direction;
    UIView *_fromView;
    UIView *_toView;
}

+ (double)defaultDuration;
- (void)finishSteppingBackwardToStart;
- (void)finishSteppingForwardToEnd;
@property(nonatomic) double stepPercentage;
- (void)_cleanupDosido;
- (void)_animateDosidoWithFactory:(id)arg1 completion:(id)arg2;
- (void)_prepareDosido;
- (id)_transformedContentView;
- (void)cancelDosido;
- (void)animateDosidoWithFactory:(id)arg1 completion:(id)arg2;
- (void)_noteAnimationCompleted:(_Bool)arg1;
- (void)dealloc;
- (id)initWithParentView:(id)arg1 fromOrientation:(long long)arg2;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

