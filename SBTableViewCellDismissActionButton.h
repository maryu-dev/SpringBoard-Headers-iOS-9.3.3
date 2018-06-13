
#import "_UITableViewCellActionButton.h"

@class SBNotificationSeparatorView, UIImageView;

@interface SBTableViewCellDismissActionButton : _UITableViewCellActionButton
{
    UIImageView *_dismissImageView;
    SBNotificationSeparatorView *_topSeparatorView;
    SBNotificationSeparatorView *_bottomSeparatorView;
    _Bool _shouldUseNarrowWidth;
    _Bool _drawsTopSeparator;
    _Bool _drawsBottomSeparator;
    Class _separatorClass;
}

- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

