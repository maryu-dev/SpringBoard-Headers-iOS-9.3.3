
#import "SBWindow.h"

@class SBStarkStatusBarViewController;

@interface SBStarkStatusBarWindow : SBWindow
{
}

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(retain, nonatomic) SBStarkStatusBarViewController *rootViewController;

@end

