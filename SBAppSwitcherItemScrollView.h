
#import "UIScrollView.h"

@class SBMainAppSwitcherPageView;

@interface SBAppSwitcherItemScrollView : UIScrollView
{
    SBMainAppSwitcherPageView *_item;
    long long _layoutOrientation;
}

- (void)_enableScrolling;
- (void)_disableScrolling;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

