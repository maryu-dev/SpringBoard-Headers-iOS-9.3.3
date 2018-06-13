
#import "NSObject.h"

@protocol SBUIProgressiveBlur <NSObject>
- (void)transitionCompleted;
- (void)setTransitionProgress:(double)arg1;
- (void)prepareForTransition;
@end

