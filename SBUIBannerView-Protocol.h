
#import "NSObject.h"

@class SBUIBannerContext, UIView;

@protocol SBUIBannerView <NSObject>
- (SBUIBannerContext *)bannerContext;

@optional
- (_Bool)shouldBorrowScreen;
- (void)setPercentPulledDown:(double)arg1;
- (void)setSecondaryContentView:(UIView *)arg1;
@end

