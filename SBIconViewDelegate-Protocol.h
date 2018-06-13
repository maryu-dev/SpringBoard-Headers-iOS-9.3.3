
#import "NSObject.h"

@class SBFolder, SBIconView, UITouch;

@protocol SBIconViewDelegate <NSObject>

@optional
- (double)scale;
- (double)iconLabelWidth;
- (_Bool)iconViewDisplaysCloseBox:(SBIconView *)arg1;
- (_Bool)iconViewDisplaysBadges:(SBIconView *)arg1;
- (void)iconCloseBoxTapped:(SBIconView *)arg1;
- (void)icon:(SBIconView *)arg1 openFolder:(SBFolder *)arg2 animated:(_Bool)arg3;
- (_Bool)icon:(SBIconView *)arg1 canReceiveGrabbedIcon:(SBIconView *)arg2;
- (void)iconTapped:(SBIconView *)arg1;
- (_Bool)iconShouldAllowTap:(SBIconView *)arg1;
- (void)icon:(SBIconView *)arg1 touchEnded:(_Bool)arg2;
- (void)icon:(SBIconView *)arg1 touchMoved:(UITouch *)arg2;
- (void)iconTouchBegan:(SBIconView *)arg1;
- (void)iconHandleLongPress:(SBIconView *)arg1;
@end

