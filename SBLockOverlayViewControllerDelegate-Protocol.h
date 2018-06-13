
#import "NSObject.h"

@class SBLockOverlayViewController;

@protocol SBLockOverlayViewControllerDelegate <NSObject>
- (void)overlay:(SBLockOverlayViewController *)arg1 wantsStyleChange:(unsigned long long)arg2;
@end

