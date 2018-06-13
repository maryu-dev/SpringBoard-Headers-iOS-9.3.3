
#import "SBIconZoomAnimator.h"

#import "SBIconListLayoutDelegate.h"

@class NSString, SBFloatyFolderView, SBFolderIconView, SBFolderZoomSettings;

@interface _SBInnerFolderIconZoomAnimator : SBIconZoomAnimator <SBIconListLayoutDelegate>
{
    SBFloatyFolderView *_folderView;
    SBFolderIconView *_folderIconView;
    struct CGAffineTransform _folderIconViewScaleTransform;
}

- (void)_calculateZoomedOffset:(struct CGPoint *)arg1 scale:(struct CGPoint *)arg2 forIcon:(id)arg3 withView:(id)arg4;
- (void)_applyFolderFadeForZoomFraction:(double)arg1;
- (void)_applyIconTransformForZoomFraction:(double)arg1;
- (void)_applyIconCrossfadeForZoomFraction:(double)arg1;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(id)arg3;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_prepareAnimation;
- (id)initWithFolderController:(id)arg1 iconView:(id)arg2 iconZoomScaleDimension:(struct CGPoint)arg3;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

