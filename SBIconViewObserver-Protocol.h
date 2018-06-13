
#import "NSObject.h"

@class SBIconView;

@protocol SBIconViewObserver <NSObject>
- (void)iconViewDidChangeLocation:(SBIconView *)arg1;
@end

