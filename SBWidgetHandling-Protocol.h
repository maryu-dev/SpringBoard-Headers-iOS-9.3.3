
#import "NSObject.h"

@class NCLaunchStats, NSArray, NSSet, NSString, SBWidgetViewController;

@protocol SBWidgetHandling <NSObject>
@property(readonly, nonatomic) NSSet *visibleWidgetIDs;
- (_Bool)shouldRequestWidgetRemoteViewControllers;
- (void)enableAllWidgets:(void (^)(_Bool))arg1;
- (void)makeVisibleWidgetWithIdentifier:(NSString *)arg1 animated:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
- (void)updateWidgetsWithIdentifiers:(NSArray *)arg1 launchStats:(NCLaunchStats *)arg2 completion:(void (^)(NSArray *))arg3;
- (SBWidgetViewController *)widgetWithIdentifier:(NSString *)arg1;
@end

