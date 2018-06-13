
#import "NSObject.h"

@class SBStarkBannerItem;

@protocol SBStarkBannerItemObserver <NSObject>
- (void)starkBannerItemDidReloadDisplayProperties:(SBStarkBannerItem *)arg1;
@end

