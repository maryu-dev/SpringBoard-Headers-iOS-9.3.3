
#import "SBScaleIconZoomAnimator.h"

@class SBCrossfadeZoomSettings, UIView;

@interface SBCrossfadeIconZoomAnimator : SBScaleIconZoomAnimator
{
    UIView *_crossfadeView;
    _Bool _performsTrueCrossfade;
    _Bool _masksCorners;
}

- (struct CGPoint)_zoomedIconCenter;
- (struct CGRect)_zoomedFrame;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(id)arg3;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_cleanupZoom;
- (void)_setAnimationFraction:(double)arg1;
- (void)_prepareAnimation;
- (void)_delayedForRotation;
- (id)initWithFolderController:(id)arg1 crossfadeView:(id)arg2 icon:(id)arg3;
- (void)_assertCrossfadeViewSizeIfNecessary;


@end

