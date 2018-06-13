
#import "SBIconFadeAnimator.h"

@class SBFolderController;

@interface SBFolderIconFadeAnimator : SBIconFadeAnimator
{
    SBFolderController *_innerFolderController;
}

- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (id)initWithFolderController:(id)arg1 innerController:(id)arg2;

@end

