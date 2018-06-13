
#import "SBInteractionPassThroughView.h"

@class SBIconImageView, UIView, _SBAnimatableCorneredView;

@interface SBIconImageCrossfadeView : SBInteractionPassThroughView
{
    _SBAnimatableCorneredView *_containerView;
    SBIconImageView *_imageView;
    UIView *_crossfadeView;
    double _crossfadeFraction;
    double _containerScaleX;
    double _containerScaleY;
    _Bool _masksCorners;
    _Bool _performsTrueCrossfade;
    struct CGPoint _stretchAnchorPoint;
}

- (void)_updateCornerMask;
- (void)cleanup;
- (void)setMorphFraction:(double)arg1 totalScale:(double)arg2;
- (void)setFadeFraction:(double)arg1;
- (void)layoutSubviews;
- (void)prepareGeometry;
- (id)initWithImageView:(id)arg1 crossfadeView:(id)arg2;

@end

