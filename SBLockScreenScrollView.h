
#import "UIScrollView.h"

@class SBLockScreenView;

@interface SBLockScreenScrollView : UIScrollView
{
    id <SBUIPasscodeLockView> _passcodeView;
    SBLockScreenView *_lockScreenView;
}

- (void)setUserInteractionEnabled:(_Bool)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;

@end

