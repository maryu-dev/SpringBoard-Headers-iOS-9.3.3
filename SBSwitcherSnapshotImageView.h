
#import "UIView.h"

@class SBCornerAnimatingImageView, UIImage;

@interface SBSwitcherSnapshotImageView : UIView
{
    SBCornerAnimatingImageView *_imageView;
    UIView *_scalingView;
    double _cornerRadius;
    _Bool _usesNonuniformScaling;
}

- (void)_updateCornerRadius;
- (double)_transformScale;
- (double)_transformVerticalScale;
- (double)_transformHorizontalScale;
- (struct CGAffineTransform)scalingTransform;
- (void)layoutSubviews;
@property(nonatomic) double cornerRadius;
@property(readonly, nonatomic) UIImage *image;
- (id)initWithImage:(id)arg1;

@end

