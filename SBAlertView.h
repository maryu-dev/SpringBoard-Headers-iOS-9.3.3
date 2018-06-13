
#import "UIView.h"

@class SBAlert;

@interface SBAlertView : UIView
{
    SBAlert *_alert;
    unsigned int _shouldAnimateIn:1;
}

- (void)alertWindowViewControllerResizedFromContentFrame:(struct CGRect)arg1 toContentFrame:(struct CGRect)arg2;
- (void)setAlert:(id)arg1;
- (_Bool)shouldAddClippingViewDuringRotation;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)layoutForInterfaceOrientation:(long long)arg1;
- (_Bool)isAnimatingOut;
- (_Bool)shouldAnimateIn;
- (void)setShouldAnimateIn:(_Bool)arg1;
- (_Bool)isReadyToBeRemovedFromView;
- (void)alertDisplayBecameVisible;
- (void)alertDisplayWillBecomeVisible;
- (void)dismiss;
- (id)alert;
- (id)initWithFrame:(struct CGRect)arg1;

@end

