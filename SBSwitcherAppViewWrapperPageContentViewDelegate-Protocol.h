
#import "NSObject.h"

@class SBAppView, SBDisplayItem;

@protocol SBSwitcherAppViewWrapperPageContentViewDelegate <NSObject>
- (struct CGSize)sizeForAppView:(SBAppView *)arg1 representing:(SBDisplayItem *)arg2;
@end

