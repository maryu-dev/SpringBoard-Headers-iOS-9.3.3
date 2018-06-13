
#import "NSObject.h"

@protocol SBUIAnimationStepping <NSObject>
@property(nonatomic) double stepPercentage;
@property(readonly, nonatomic, getter=isStepped) _Bool stepped;
- (void)finishSteppingBackwardToStart;
- (void)finishSteppingForwardToEnd;
@end

