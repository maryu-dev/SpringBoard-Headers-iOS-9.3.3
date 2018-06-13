
#import "SBIconAnimator.h"

@class UIView;

@interface SBIconFadeAnimator : SBIconAnimator
{
    UIView *_crossfadeView;
    _Bool _addedToWindow;
}

- (void)_applyAlphaForFraction:(double)arg1;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(id)arg3;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_prepareAnimation;
- (id)initWithFolderController:(id)arg1 crossfadeView:(id)arg2;

@end

