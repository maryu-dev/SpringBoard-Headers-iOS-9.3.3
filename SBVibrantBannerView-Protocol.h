
#import "NSObject.h"

@class UIColor;

@protocol SBVibrantBannerView <NSObject>
+ (UIColor *)defaultColorForElement:(long long)arg1;
- (void)setColor:(UIColor *)arg1 forElement:(long long)arg2;
- (UIColor *)colorForElement:(long long)arg1;
@end

