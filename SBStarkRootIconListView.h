
#import "SBIconListView.h"

@class UIView;

@interface SBStarkRootIconListView : SBIconListView
{
    struct UIEdgeInsets _insets;
    UIView *_lastFocusedView;
}

+ (unsigned long long)iconColumnsForInterfaceOrientation:(long long)arg1;
+ (unsigned long long)maxVisibleIconRowsInterfaceOrientation:(long long)arg1;
- (int)iconLocation;
- (double)sideIconInset;
- (double)bottomIconInset;
- (double)topIconInset;
- (Class)baseIconViewClass;

@end

