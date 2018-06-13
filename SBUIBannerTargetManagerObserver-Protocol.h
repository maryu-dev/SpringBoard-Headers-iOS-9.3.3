
#import "NSObject.h"

@class SBUIBannerTargetManager;

@protocol SBUIBannerTargetManagerObserver <NSObject>
- (void)bannerTargetManager:(SBUIBannerTargetManager *)arg1 didRemoveTarget:(id <SBUIBannerTarget>)arg2;
- (void)bannerTargetManager:(SBUIBannerTargetManager *)arg1 didAddTarget:(id <SBUIBannerTarget>)arg2;
@end

