
#import "NSObject.h"

@class SBStarkBannerTarget;

@protocol SBStarkBannerTargetObserver <NSObject>
- (void)starkBannerTarget:(SBStarkBannerTarget *)arg1 didChangeContextWithDismissReason:(int)arg2;
@end

