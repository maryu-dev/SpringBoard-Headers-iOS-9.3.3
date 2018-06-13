
#import "NSObject.h"

#import "SBDosidoAnimator.h"

@class CAMutableMeshTransform, NSString, SBStretchTransformerView, UIView;

@interface SBStretchTransformer : NSObject <SBDosidoAnimator>
{
    double _percentage;
    CAMutableMeshTransform *_mesh;
    id _completionBlock;
    double _stretchFactor;
    UIView *_parentView;
    SBStretchTransformerView *_transformView;
    UIView *_view;
    unsigned long long _anchorEdge;
    long long _orientation;
}

- (void)_setOrientation:(long long)arg1;
- (void)_setAnchorEdge:(unsigned long long)arg1;
- (void)_animateToZeroStretchFactor;
- (void)updateMeshTransform:(id)arg1 stretchFactor:(double)arg2;
- (void)_setStretchFactor:(double)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)cancelDosido;
- (void)animateDosidoWithFactory:(id)arg1 completion:(id)arg2;
- (void)finishSteppingBackwardToStart;
- (void)finishSteppingForwardToEnd;
@property(nonatomic) double stepPercentage;
@property(readonly, nonatomic, getter=isStepped) _Bool stepped;
- (void)dealloc;
- (id)initWithParentView:(id)arg1 anchorEdge:(unsigned long long)arg2 orientation:(long long)arg3;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

