
#import "SBAlertWindow.h"

@interface SBStarkAlertWindow : SBAlertWindow
{
    id <SBStarkWindowDelegate> _starkWindowDelegate;
}

+ (double)windowLevel;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;

@end

