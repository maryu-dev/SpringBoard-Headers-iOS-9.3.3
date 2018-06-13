
#import "NSObject.h"

@class SBIcon, SBIconListModel;

@protocol SBIconListModelObserver <NSObject>
- (void)iconList:(SBIconListModel *)arg1 didRemoveIcon:(SBIcon *)arg2;
- (void)iconList:(SBIconListModel *)arg1 didReplaceIcon:(SBIcon *)arg2 withIcon:(SBIcon *)arg3;
- (void)iconList:(SBIconListModel *)arg1 didAddIcon:(SBIcon *)arg2;
@end

