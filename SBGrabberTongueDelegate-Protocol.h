
#import "NSObject.h"

@class SBGrabberTongue;

@protocol SBGrabberTongueDelegate <NSObject>
- (_Bool)grabberTongueRequiredOutsideGrabberFreeRegion:(SBGrabberTongue *)arg1;
- (_Bool)grabberTongueRequiredForWholeEdge:(SBGrabberTongue *)arg1;
- (_Bool)grabberTongueOrPullEnabled:(SBGrabberTongue *)arg1;

@optional
- (void)grabberTongueWillPresent:(SBGrabberTongue *)arg1;
- (void)grabberTongueCanceledPulling:(SBGrabberTongue *)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueEndedPulling:(SBGrabberTongue *)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueUpdatedPulling:(SBGrabberTongue *)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueBeganPulling:(SBGrabberTongue *)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (double)grabberTongueWidthOfActiveEdge:(SBGrabberTongue *)arg1;
- (double)grabberTongueWidthOfGrabberFreeRegion:(SBGrabberTongue *)arg1;
- (double)grabberTongueCenterOnEdge:(SBGrabberTongue *)arg1;
@end

