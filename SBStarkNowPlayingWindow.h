
#import "SBWindow.h"

@interface SBStarkNowPlayingWindow : SBWindow
{
    id <SBStarkWindowDelegate> _starkWindowDelegate;
}

- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (id)contextHostManager;

@end

