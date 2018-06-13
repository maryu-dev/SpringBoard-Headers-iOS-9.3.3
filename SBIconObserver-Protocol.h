
#import "NSObject.h"

@class SBIcon;

@protocol SBIconObserver <NSObject>

@optional
- (void)iconLaunchEnabledDidChange:(SBIcon *)arg1;
- (void)iconAccessoriesDidUpdate:(SBIcon *)arg1;
- (void)iconImageDidUpdate:(SBIcon *)arg1;
@end

