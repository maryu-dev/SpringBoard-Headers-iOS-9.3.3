
#import "UIGestureRecognizer.h"

@interface SBNotificationCenterTouchEater : UIGestureRecognizer
{
}

- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

