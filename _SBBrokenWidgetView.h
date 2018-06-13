
#import "UIView.h"

@class UILabel;

@interface _SBBrokenWidgetView : UIView
{
    UILabel *_label;
}

+ (void)_configureLabelForCurrentGraphicsQuality:(id)arg1;
- (void)_backgroundContrastDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

