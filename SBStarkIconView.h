
#import "SBIconView.h"

@interface SBStarkIconView : SBIconView
{
    _Bool _sb_focused;
}

+ (double)_labelHeight;
+ (struct CGSize)maxLabelSize;
+ (struct CGRect)_rectForLayoutMetric:(int)arg1;
+ (struct CGSize)defaultIconSize;
+ (struct UIEdgeInsets)iconImagePaddingInsets;
+ (_Bool)canShowLabelAccessoryView;
+ (int)_defaultIconFormat;
- (struct CGRect)_frameForLabel;
- (void)prepareForReuse;
- (id)_labelImageParameters;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;

@end

