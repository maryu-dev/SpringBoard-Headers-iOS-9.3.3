
#import "NSObject.h"

@protocol SBControlCenterObserver <NSObject>
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;

@optional
- (void)controlCenterWillFinishTransitionOpen:(_Bool)arg1 withDuration:(double)arg2;
@end

