
#import "NSObject.h"

@class UIStatusBar, UISystemNavigationAction;

@protocol UIStatusBarStyleDelegate <NSObject>
- (void)statusBar:(UIStatusBar *)arg1 didAnimateFromHeight:(double)arg2 toHeight:(double)arg3 animation:(int)arg4;
- (void)statusBar:(UIStatusBar *)arg1 willAnimateFromHeight:(double)arg2 toHeight:(double)arg3 duration:(double)arg4 animation:(int)arg5;
- (long long)statusBar:(UIStatusBar *)arg1 styleForRequestedStyle:(long long)arg2 overrides:(int)arg3;

@optional
- (void)statusBar:(UIStatusBar *)arg1 didTriggerButtonType:(long long)arg2 withAction:(long long)arg3;
- (UISystemNavigationAction *)statusBarSystemNavigationAction:(UIStatusBar *)arg1;
@end

