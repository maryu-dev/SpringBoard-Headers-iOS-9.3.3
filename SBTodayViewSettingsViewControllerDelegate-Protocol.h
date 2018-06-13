
#import "NSObject.h"

@class NSArray, NSString, SBInterfaceItemInfo, SBTodayViewSettingsViewController;

@protocol SBTodayViewSettingsViewControllerDelegate <NSObject>
- (void)todayViewSettingsViewController:(SBTodayViewSettingsViewController *)arg1 didReorderInterfaceItems:(NSArray *)arg2 inGroup:(NSString *)arg3;
- (NSArray *)todayViewSettingsViewController:(SBTodayViewSettingsViewController *)arg1 interfaceItemsForGroup:(NSString *)arg2;
- (long long)layoutModeForTodayViewSettingsViewController:(SBTodayViewSettingsViewController *)arg1;

@optional
- (void)todayViewSettingsViewController:(SBTodayViewSettingsViewController *)arg1 acknowledgeInterfaceItems:(NSArray *)arg2;
- (_Bool)todayViewSettingsViewController:(SBTodayViewSettingsViewController *)arg1 setEnabled:(_Bool)arg2 forInterfaceItems:(NSArray *)arg3;
- (_Bool)todayViewSettingsViewController:(SBTodayViewSettingsViewController *)arg1 isInterfaceItemWithIdentifierNew:(NSString *)arg2;
- (_Bool)todayViewSettingsViewController:(SBTodayViewSettingsViewController *)arg1 isInterfaceItemWithIdentifierEnabled:(NSString *)arg2;
- (NSString *)todayViewSettingsViewController:(SBTodayViewSettingsViewController *)arg1 defaultGroupForInterfaceItem:(SBInterfaceItemInfo *)arg2;
- (_Bool)todayViewSettingsViewController:(SBTodayViewSettingsViewController *)arg1 canReorderInterfaceItem:(SBInterfaceItemInfo *)arg2;
- (NSArray *)disabledInterfaceItemsForTodayViewSettingsViewController:(SBTodayViewSettingsViewController *)arg1;
- (NSString *)todayViewSettingsViewController:(SBTodayViewSettingsViewController *)arg1 displayNameForGroup:(NSString *)arg2;
- (NSArray *)groupsForTodayViewSettingsViewController:(SBTodayViewSettingsViewController *)arg1;
- (void)todayViewSettingsViewControllerWillDismiss:(SBTodayViewSettingsViewController *)arg1;
- (void)todayViewSettingsViewControllerWillPresent:(SBTodayViewSettingsViewController *)arg1;
@end

