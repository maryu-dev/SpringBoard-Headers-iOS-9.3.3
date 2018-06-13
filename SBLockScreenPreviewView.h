
#import "UIView.h"

@class SBFLockScreenDateView, SBFakeStatusBarView, SBUILegibilityView, UILabel, _UILegibilityLabel, _UILegibilitySettings;

@interface SBLockScreenPreviewView : UIView
{
    UIView *_wallpaperView;
    SBFLockScreenDateView *_dateView;
    SBUILegibilityView *_cameraView;
    UILabel *_slideToUnlockView;
    _UILegibilityLabel *_slideToUnlockLegibilityLabel;
    SBFakeStatusBarView *_statusBar;
    _UILegibilitySettings *_legibilitySettings;
}

+ (id)preview;
- (void)_layoutWallpaperView;
- (void)_layoutSlideToUnlockView;
- (void)_layoutDateView;
- (void)_layoutCameraView;
- (void)_layoutStatusBar;
- (void)layoutSubviews;
- (id)_legibilityPrototypeSettings;
- (void)_setupStatusBar;
- (void)_setupCameraView;
- (void)_setupDateView;
- (void)_setupSlideToUnlockView;
- (void)_setupWallpaperView;
- (id)initWithFrame:(struct CGRect)arg1 legibilitySettings:(id)arg2;

@end

