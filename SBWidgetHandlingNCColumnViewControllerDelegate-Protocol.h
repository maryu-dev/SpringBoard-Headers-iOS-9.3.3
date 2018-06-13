
#import "SBTodayViewSettingsViewControllerDelegate.h"

@class NSArray, NSSet, SBWidgetHandlingNCColumnViewController;

@protocol SBWidgetHandlingNCColumnViewControllerDelegate <SBTodayViewSettingsViewControllerDelegate>
- (_Bool)widgetHandlingNCColumnViewControllerShouldRequestWidgetRemoteViewControllers:(SBWidgetHandlingNCColumnViewController *)arg1;
- (void)widgetHandlingNCColumnViewController:(SBWidgetHandlingNCColumnViewController *)arg1 requestsEnablingForDebuggingWidgetsWithIdentifiers:(NSSet *)arg2;
- (void)widgetHandlingNCColumnViewControllerVisibleContentDidChange:(SBWidgetHandlingNCColumnViewController *)arg1;
- (NSArray *)orderedInterfaceItemIdentifiersForWidgetHandlingNCColumnViewController:(SBWidgetHandlingNCColumnViewController *)arg1;
@end

