
#import "NSObject.h"

@class NSURL;

@protocol _SBUIWidgetHost <NSObject>
- (void)invalidatePreferredViewSize;
- (void)requestLaunchOfURL:(NSURL *)arg1;
@end

