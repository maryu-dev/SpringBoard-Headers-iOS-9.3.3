
#import "UIScrollView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, SBLockScreenNotificationCell;

@interface SBLockScreenNotificationScrollView : UIScrollView <UIGestureRecognizerDelegate>
{
    SBLockScreenNotificationCell *_associatedCell;
}

+ (double)scrollThresholdForPasscodeScroll;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

