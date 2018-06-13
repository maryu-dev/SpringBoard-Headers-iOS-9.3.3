
#import "UIControl.h"

@class UIColor, UIImage, UIImageView, UILabel, UIView;

@interface SBStarkBannerViewButton : UIControl
{
    UILabel *_textLabel;
    UIColor *_unselectedTextColor;
    UIColor *_selectedTextColor;
    UIImage *_unselectedImage;
    UIImage *_selectedImage;
    UIView *_highlightView;
    UIImageView *_imageView;
    UIColor *_highlightColor;
}

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

