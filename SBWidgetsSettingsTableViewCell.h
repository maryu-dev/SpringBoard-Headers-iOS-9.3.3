
#import "UITableViewCell.h"

@class UIButton, UIImageView;

@interface SBWidgetsSettingsTableViewCell : UITableViewCell
{
    UIImageView *_dotImageView;
    _Bool _widgetEnabled;
    _Bool _showsDot;
    UIButton *_insertWidgetAccessoryButton;
}

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

