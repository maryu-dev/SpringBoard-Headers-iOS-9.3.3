
#import "UIView.h"

@class NSArray;

@interface SBBannerButtonView : UIView
{
    NSArray *_buttons;
}

- (double)_buttonHeight;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

