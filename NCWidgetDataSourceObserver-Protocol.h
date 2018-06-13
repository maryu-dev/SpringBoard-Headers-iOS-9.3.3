
#import "NSObject.h"

@class NCWidgetDataSource, NCWidgetDatum;

@protocol NCWidgetDataSourceObserver <NSObject>
- (void)widgetDataSource:(NCWidgetDataSource *)arg1 removeDatum:(NCWidgetDatum *)arg2;
- (void)widgetDataSource:(NCWidgetDataSource *)arg1 replaceWithDatum:(NCWidgetDatum *)arg2;
@end

