
#import "NSObject.h"

@class SBUIBannerContext, SBUIBannerItem, UIView<SBUIBannerView>;

@protocol SBUIBannerSource <NSObject>
- (UIView<SBUIBannerView> *)newBannerViewForContext:(SBUIBannerContext *)arg1;
- (SBUIBannerItem *)dequeueNextBannerItemForTarget:(id <SBUIBannerTarget>)arg1;
- (SBUIBannerItem *)peekNextBannerItemForTarget:(id <SBUIBannerTarget>)arg1;

@optional
- (void)bannerViewDidDismiss:(UIView<SBUIBannerView> *)arg1 forReason:(int)arg2;
- (void)bannerViewWillDismiss:(UIView<SBUIBannerView> *)arg1 forReason:(int)arg2;
- (void)bannerViewDidAppear:(UIView<SBUIBannerView> *)arg1;
- (void)bannerViewWillAppear:(UIView<SBUIBannerView> *)arg1;
@end

