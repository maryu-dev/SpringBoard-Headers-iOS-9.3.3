
#import "UIGestureRecognizerDelegate.h"

@class UIGestureRecognizer, UIView;

@protocol SBSystemGestureRecognizerDelegate <UIGestureRecognizerDelegate>
- (UIView *)viewForSystemGestureRecognizer:(UIGestureRecognizer *)arg1;
@end

