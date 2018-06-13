
#import "SBWidgetHandlingNCColumnViewControllerDelegate.h"

@class NSArray, NSString, SBSnippetSectionInfo, SBTodayViewController, UIViewController;

@protocol SBTodayViewControllerDelegate <SBWidgetHandlingNCColumnViewControllerDelegate>
- (UIViewController *)presentationContextDefininingViewControllerForTodayViewController:(SBTodayViewController *)arg1;
- (void)todayViewController:(SBTodayViewController *)arg1 visibleContentIsClipping:(_Bool)arg2;
- (NSArray *)todayViewController:(SBTodayViewController *)arg1 snippetsForChildSectionWithIdentifier:(NSString *)arg2;
- (SBSnippetSectionInfo *)todayViewController:(SBTodayViewController *)arg1 childSectionInfoForIdentifier:(NSString *)arg2;
- (NSArray *)childSectionIdentifiersForTodayViewController:(SBTodayViewController *)arg1;
- (SBSnippetSectionInfo *)tomorrowSectionInfoForTodayViewController:(SBTodayViewController *)arg1;
- (SBSnippetSectionInfo *)todaySectionInfoForTodayViewController:(SBTodayViewController *)arg1;
@end

