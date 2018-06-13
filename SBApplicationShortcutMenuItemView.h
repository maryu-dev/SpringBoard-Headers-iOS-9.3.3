
#import "UIView.h"

@class NSArray, SBSApplicationShortcutItem, UIImageView, UILabel;

@interface SBApplicationShortcutMenuItemView : UIView
{
    UIView *_iconContainer;
    UIImageView *_iconView;
    UIView *_textContainer;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    _Bool _highlighted;
    SBSApplicationShortcutItem *_shortcutItem;
    long long _orientation;
    unsigned long long _options;
    double _iconMaxHeight;
    NSArray *_iconHeightConstraints;
    long long _menuPosition;
}

+ (id)_imageForShortcutItem:(id)arg1 application:(id)arg2 assetManagerProvider:(id)arg3 monogrammerProvider:(id)arg4 maxHeight:(double *)arg5;
- (void)_handleContentSizeCategoryChangedNotification:(id)arg1;
- (void)_updateLabelFonts;
- (double)_subtitleFontSize;
- (double)_titleFontSize;
- (void)_setupConstraintsForIconAlignment:(long long)arg1 icon:(id)arg2;
- (void)_setupViewsWithIcon:(id)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void)dealloc;
- (id)initWithShortcutItem:(id)arg1 menuPosition:(long long)arg2 orientation:(long long)arg3 application:(id)arg4 assetManagerProvider:(id)arg5 monogrammerProvider:(id)arg6 options:(unsigned long long)arg7;

@end

