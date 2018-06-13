
#import "UIView.h"

@class SBAppResizingBlurContainerView, SBSceneViewAppIconView;

@interface SBAppResizingPlaceholderView : UIView
{
    _Bool _creatingBlur;
    SBSceneViewAppIconView *_appIconView;
    SBAppResizingBlurContainerView *_blurContainerView;
    UIView *_blurredAppSnapshotView;
}

- (void)layoutSubviews;
- (void)generateBlurredAppSnapshotWithCompletionHandler:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithAppView:(id)arg1;

@end

