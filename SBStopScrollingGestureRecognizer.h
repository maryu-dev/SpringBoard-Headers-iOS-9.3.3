
#import "UIGestureRecognizer.h"

@interface SBStopScrollingGestureRecognizer : UIGestureRecognizer
{
}

- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

