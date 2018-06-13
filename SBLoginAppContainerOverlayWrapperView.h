
#import "UIView.h"

@class SBLockOverlayView, _UIBackdropView;

@interface SBLoginAppContainerOverlayWrapperView : UIView
{
    _UIBackdropView *_backdropView;
    SBLockOverlayView *_overlayView;
}

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 overlayView:(id)arg2;

@end

