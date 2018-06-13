
#import "SBCenterIconZoomAnimator.h"

@class SBCenterAppZoomSettings, UIView;

@interface SBCenterAppIconZoomAnimator : SBCenterIconZoomAnimator
{
    UIView *_appView;
    struct CGRect _destinationFrame;
    double _distantScale;
}

- (void)_fadeAppForZoomFraction:(double)arg1;
- (void)_zoomAppForZoomFraction:(double)arg1;
- (double)_appZoomDelay;
- (struct CGPoint)cameraPosition;
- (double)_iconZoomDelay;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(id)arg3;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_prepareAnimation;
- (void)_delayedForRotation;
- (id)initWithFolderController:(id)arg1 appView:(id)arg2;


@end

