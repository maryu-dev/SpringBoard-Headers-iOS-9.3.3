
#import "NSObject.h"

@class SBIconBlurryBackgroundView;

@protocol SBIconBlurryBackgroundViewObserver <NSObject>
- (void)blurryBackgroundViewDidChangeWhetherBlurring:(SBIconBlurryBackgroundView *)arg1;
@end

