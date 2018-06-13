
#import "SBLockOverlayView.h"

@class CNContact, _UILegibilityView;

@interface SBLockScreenUserPictureView : SBLockOverlayView
{
    CNContact *_contact;
    double _strength;
    _UILegibilityView *_monogramLegibilityView;
    double _diameter;
}

+ (id)_monogrammerForLegibilitySettings:(id)arg1 diameter:(double)arg2;
- (void)_regenerateImage;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2;

@end

