
#import "SBIconZoomAnimator.h"

#import "SBIconListLayoutDelegate.h"

@class NSString, SBCenterZoomSettings, UIView;

@interface SBCenterIconZoomAnimator : SBIconZoomAnimator <SBIconListLayoutDelegate>
{
    UIView *_zoomView;
    double _iconZoomedZ;
    double _centerRow;
    double _centerCol;
    struct CGPoint _cameraPosition;
}

- (void)_calculateCentersAndCameraPosition;
- (id)_animationFactoryForDock;
- (id)_animationFactoryForIcon:(id)arg1;
- (void)_positionView:(id)arg1 forIcon:(id)arg2;
- (void)iconListViewLayoutInvalidated:(id)arg1;
- (void)iconListView:(id)arg1 wouldHaveMovedIcon:(id)arg2;
- (double)_iconZoomDelay;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(id)arg3;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_prepareAnimation;
- (id)initWithFolderController:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

