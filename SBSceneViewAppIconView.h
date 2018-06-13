
#import "UIView.h"

@class SBIconImageView, UILabel;

@interface SBSceneViewAppIconView : UIView
{
    _Bool _showsAppIconBorder;
    SBIconImageView *_imageView;
    UILabel *_label;
    UIView *_iconBorderView;
}

- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithIcon:(id)arg1;

@end

