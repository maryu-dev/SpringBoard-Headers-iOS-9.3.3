
#import "NSObject.h"

@class SBReusableViewMap, SBWindow;

@protocol SBReusableViewMapDelegate <NSObject>
- (SBWindow *)windowForRecycledViewsInViewMap:(SBReusableViewMap *)arg1;
- (unsigned long long)viewMap:(SBReusableViewMap *)arg1 maxRecycledViewsOfClass:(Class)arg2;
@end

