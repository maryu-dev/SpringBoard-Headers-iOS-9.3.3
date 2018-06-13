
#import "SBIconZoomAnimator.h"

@class SBIcon, SBIconView, SBScaleZoomSettings, UIView;

@interface SBScaleIconZoomAnimator : SBIconZoomAnimator
{
    struct UIEdgeInsets _iconScootch;
    double _dockStretch;
    struct SBIconCoordinate _dockListCenterCoordinate;
    struct SBIconCoordinate _mainListCenterCoordinate;
    double _naturalVisualAltitude;
    UIView *_scalingView;
    SBIcon *_targetIcon;
    struct CGPoint _zoomScaleDimension;
}

- (void)_calculateIconScootch;
- (struct CGPoint)_scootchForIcon:(id)arg1 inDock:(_Bool)arg2;
- (void)_applyOuterFadeFraction:(double)arg1;
- (void)_applyZoomFraction:(double)arg1;
- (double)_zoomedVisualAltitude;
- (struct CGPoint)_zoomedIconCenter;
- (struct CGRect)_zoomedFrame;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(id)arg3;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_prepareAnimation;
- (void)_setZoomScale:(struct CGPoint)arg1;
- (_Bool)_forceSquareZoomDimension;
@property(readonly, nonatomic) double zoomScale;
@property(readonly, nonatomic) SBIconView *targetIconView;
- (id)initWithFolderController:(id)arg1 targetIcon:(id)arg2;


@end

