
#import "SBFolderView.h"

@class SBStarkIconLayoutOverrideStrategy, UIButton;

@interface SBStarkFolderView : SBFolderView
{
    _Bool _buttonUXEnabled;
    UIButton *_scrollLeftButton;
    UIButton *_scrollRightButton;
    struct CGSize _scrollButtonSize;
    SBStarkIconLayoutOverrideStrategy *_iconLayoutOverrideStrategy;
    struct UIEdgeInsets _listViewInsets;
}

- (void)_scrollButtonPressed:(id)arg1;
- (void)_updateScrollButtonStatesForIndex:(long long)arg1;
- (void)_evaluateScrollingForListViewsIfNecessary;
- (_Bool)shouldInstallFocusGuides;
- (void)_updatePageControlToIndex:(long long)arg1;
- (void)_updateIconListFrames;
- (void)updateIconListViews;
- (void)resetIconListViews;
- (void)_layoutSubviews;
- (double)_offsetToCenterPageControlInSpaceForPageControl;
- (id)_newPageControl;
@property(retain, nonatomic) SBStarkIconLayoutOverrideStrategy *iconLayoutOverrideStrategy;
- (void)setInteractionAffordances:(unsigned long long)arg1;
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 context:(id)arg4;
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3;

@end

