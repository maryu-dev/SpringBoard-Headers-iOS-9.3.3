
#import "NSObject.h"

@class SBIcon, SBIconListView;

@protocol SBIconListLayoutDelegate <NSObject>

@optional
- (void)iconListViewLayoutInvalidated:(SBIconListView *)arg1;
- (void)iconListView:(SBIconListView *)arg1 wouldHaveMovedIcon:(SBIcon *)arg2;
@end

