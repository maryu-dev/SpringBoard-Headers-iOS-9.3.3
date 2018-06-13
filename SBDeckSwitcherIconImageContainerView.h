
#import "UIView.h"

@class NSString, SBDisplayItem, SBIcon, UIImageView;

@interface SBDeckSwitcherIconImageContainerView : UIView
{
    SBDisplayItem *_displayItem;
    SBIcon *_icon;
    UIImageView *_imageView;
}

- (void)_crossfadeToIconImage:(id)arg1;
- (void)_configureIconImageView:(id)arg1;
@property(readonly, nonatomic) NSString *displayName;
- (void)updateIcon;
- (void)layoutSubviews;
- (id)initWithDisplayItem:(id)arg1;

@end

