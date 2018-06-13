
#import "NSObject.h"

@class SBBestAppSuggestion, SBDisplayItem;

@protocol SBMainAppSwitcherContentViewControllerDelegate <NSObject>
- (void)switcherContentController:(id <SBMainAppSwitcherContentViewControlling>)arg1 activatedBestAppSuggestion:(SBBestAppSuggestion *)arg2;
- (_Bool)switcherContentController:(id <SBMainAppSwitcherContentViewControlling>)arg1 canDeleteItem:(SBDisplayItem *)arg2;
- (void)switcherContentController:(id <SBMainAppSwitcherContentViewControlling>)arg1 deletedItem:(SBDisplayItem *)arg2;
- (void)switcherContentController:(id <SBMainAppSwitcherContentViewControlling>)arg1 selectedItem:(SBDisplayItem *)arg2;
@end

