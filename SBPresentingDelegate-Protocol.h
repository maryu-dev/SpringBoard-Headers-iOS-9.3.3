
#import "NSObject.h"

@class UIGestureRecognizer, UITouch;

@protocol SBPresentingDelegate <NSObject>
- (void)presentingControllerDidFinishPresentation:(id <SBCoordinatedPresenting>)arg1;
- (void)presentingController:(id <SBCoordinatedPresenting>)arg1 willHandleGesture:(UIGestureRecognizer *)arg2;
- (_Bool)presentingController:(id <SBCoordinatedPresenting>)arg1 gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg2;
- (_Bool)presentingController:(id <SBCoordinatedPresenting>)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 shouldReceiveTouch:(UITouch *)arg3;

@optional
- (void)presentingController:(id <SBCoordinatedPresenting>)arg1 conflictingGestureDidEnd:(UIGestureRecognizer *)arg2;
- (void)presentingController:(id <SBCoordinatedPresenting>)arg1 conflictingGestureDidBegin:(UIGestureRecognizer *)arg2;
@end

