
#import "_UITableViewCellActionButton.h"

@class UIView;

@interface SBTableViewCellActionButton : _UITableViewCellActionButton
{
    UIView *_backgroundView;
}

+ (id)actionButtonWithStyle:(unsigned long long)arg1;
- (double)_titleLabelHeightThatFits:(struct CGSize)arg1;
- (long long)_wordCountForText:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundColor:(id)arg1 withBlendMode:(long long)arg2;
- (void)dealloc;

@end

