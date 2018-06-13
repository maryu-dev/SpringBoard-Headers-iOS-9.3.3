
#import "NSObject.h"

@class SBIconAnimator;

@protocol SBIconAnimatorDelegate <NSObject>
- (void)iconAnimatorWasInvalidated:(SBIconAnimator *)arg1;
@end

