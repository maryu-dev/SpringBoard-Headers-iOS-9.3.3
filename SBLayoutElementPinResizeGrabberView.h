
#import "UIView.h"

@interface SBLayoutElementPinResizeGrabberView : UIView
{
    UIView *_vibrantView;
    UIView *_solidView;
    _Bool _vibrant;
}

- (void)layoutSubviews;
@property(nonatomic, getter=isVisible) _Bool visible;
- (void)_createVibrantVersionIfNeeded;
- (id)init;

@end

