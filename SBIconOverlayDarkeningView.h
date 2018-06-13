
#import "UIView.h"

@class SBIcon, SBIconView, SBIconViewMap;

@interface SBIconOverlayDarkeningView : UIView
{
    SBIcon *_icon;
    SBIconViewMap *_iconViewMap;
    SBIconView *_iconView;
}

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 icon:(id)arg2 viewMap:(id)arg3;

@end

