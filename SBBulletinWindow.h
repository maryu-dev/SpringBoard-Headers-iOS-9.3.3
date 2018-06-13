
#import "SBWindow.h"

@interface SBBulletinWindow : SBWindow
{
}

+ (_Bool)sb_autorotates;
+ (_Bool)_isSecure;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_canBecomeKeyWindow;

@end

