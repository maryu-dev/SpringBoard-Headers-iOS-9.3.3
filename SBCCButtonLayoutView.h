
#import "SBControlCenterSectionView.h"

@class NSMutableArray, UIScrollView;

@interface SBCCButtonLayoutView : SBControlCenterSectionView
{
    NSMutableArray *_buttons;
    UIScrollView *_scrollView;
    double _interButtonPadding;
    unsigned long long _buttonStretchThreshold;
    unsigned long long _buttonShrinkThreshold;
    long long _maxButtons;
    struct UIEdgeInsets _contentEdgeInsets;
}

- (void)layoutSubviews;
- (void)_setButtons:(id)arg1;
- (void)_didRemoveButton:(id)arg1;
- (void)_didAddButton:(id)arg1;
- (void)resortButtons;
- (void)_resortButtons;
- (void)removeButton:(id)arg1;
- (void)addButton:(id)arg1;
- (id)buttons;
- (id)initWithFrame:(struct CGRect)arg1;

@end

