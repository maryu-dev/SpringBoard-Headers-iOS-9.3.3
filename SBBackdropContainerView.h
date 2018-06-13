
#import "UIView.h"

@class _UIBackdropView;

@interface SBBackdropContainerView : UIView
{
    _UIBackdropView *_backdropView;
}

- (void)layoutSubviews;
- (void)_reallyInsertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)addSubview:(id)arg1;
@property(readonly, nonatomic) UIView *contentView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

