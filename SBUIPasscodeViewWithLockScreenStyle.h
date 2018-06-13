
#import "UIView.h"

@class UIView<SBUIPasscodeLockView>, _UIBackdropView;

@interface SBUIPasscodeViewWithLockScreenStyle : UIView
{
    UIView<SBUIPasscodeLockView> *_passcodeView;
    _UIBackdropView *_blurView;
    double _blurRadius;
    _Bool _blurEnabled;
}

- (void)setBlurEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 includeBlur:(_Bool)arg2 passcodeViewGenerator:(id)arg3;

@end

