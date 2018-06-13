
#import "SBAlertViewAdapter.h"

@interface SBUIFullscreenAlertViewAdapter : SBAlertViewAdapter
{
    _Bool _revealedContentBeneathForDismiss;
    _Bool _animatingOut;
}

- (void)setAlert:(id)arg1;
- (void)setShouldAnimateIn:(_Bool)arg1;
- (void)dismiss;
- (void)updateSpringBoardInPreparationForTransparentDismiss;
- (void)viewAnimatedOut;
- (_Bool)isAnimatingOut;
- (_Bool)shouldAnimateIconsIn;
- (void)alertDisplayWillBecomeVisible;
- (_Bool)isReadyToBeRemovedFromView;
- (id)alert;

@end

