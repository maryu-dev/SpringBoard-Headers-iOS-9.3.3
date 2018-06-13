
#import "NSObject.h"

@class BSAnimationSettings, SBSceneLayoutAnimationWrapperView;

@protocol SBUIAnimationZoomUpDown <NSObject>
@property(copy, nonatomic) BSAnimationSettings *animationSettings;
- (void)setAnimatableWrapperView:(SBSceneLayoutAnimationWrapperView *)arg1;
@end

