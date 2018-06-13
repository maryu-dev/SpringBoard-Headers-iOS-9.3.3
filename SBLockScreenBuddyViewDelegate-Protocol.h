
#import "SBLockOverlayViewDelegate.h"

@class SBLockScreenBuddyView;

@protocol SBLockScreenBuddyViewDelegate <SBLockOverlayViewDelegate>
- (void)buddyView:(SBLockScreenBuddyView *)arg1 didChangeToStyle:(unsigned long long)arg2;
@end

