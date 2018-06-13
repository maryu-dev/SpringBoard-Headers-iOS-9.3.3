
#import "UIView.h"

@class SBSearchBackdropView;

@interface _SBSearchControllerView : UIView
{
    SBSearchBackdropView *_searchBackdropView;
    UIView *_searchContainerView;
    UIView *_searchContentView;
}

- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;

@end

