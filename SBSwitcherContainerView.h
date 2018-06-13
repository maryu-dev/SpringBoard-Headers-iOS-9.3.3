
#import "UIView.h"

@interface SBSwitcherContainerView : UIView
{
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView;
- (void)layoutSubviews;

@end

