
#import "SBScaleIconZoomAnimator.h"

@class SBFloatyFolderView, SBFolderController, SBFolderIcon, SBFolderIconView, SBFolderZoomSettings, _SBInnerFolderIconZoomAnimator;

@interface SBFolderIconZoomAnimator : SBScaleIconZoomAnimator
{
    SBFolderController *_innerFolderController;
    SBFloatyFolderView *_innerFolderView;
    _SBInnerFolderIconZoomAnimator *_innerZoomAnimator;
}

- (_Bool)_forceSquareZoomDimension;
- (struct CGRect)_zoomedFrame;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(id)arg3;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_prepareAnimation;
- (id)initWithOuterController:(id)arg1 innerController:(id)arg2 folderIcon:(id)arg3;


@end

