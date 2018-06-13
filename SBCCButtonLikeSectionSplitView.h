
#import "SBControlCenterSectionView.h"

@class SBCCButtonLikeSectionView;

@interface SBCCButtonLikeSectionSplitView : SBControlCenterSectionView
{
    double _separatorWidth;
    _Bool _leftHidden;
    _Bool _rightHidden;
    SBCCButtonLikeSectionView *_leftSection;
    SBCCButtonLikeSectionView *_rightSection;
}

- (void)layoutSubviews;
- (struct CGRect)_frameForSectionSlot:(int)arg1;
- (struct UIEdgeInsets)_landscapeInsetsForSection;
- (id)_viewForSectionSlot:(int)arg1;
- (void)_updateButtonsCorners;
- (void)_updateLabelParameters;
- (void)setRightSectionHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setLeftSectionHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_relayoutAnimated:(_Bool)arg1;
- (_Bool)_useLandscapeBehavior;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

