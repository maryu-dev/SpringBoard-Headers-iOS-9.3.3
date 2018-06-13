
@class SBLockScreenActionContext, SBLockScreenSlideUpToAppController, SBLockScreenView, UIView<_SBFVibrantView>, UIViewController;

@protocol SBLockScreenSlideUpToAppControllerDelegate
- (_Bool)lockScreenIsActive;
- (UIViewController *)viewControllerToUseAsParent;
- (void)passcodeViewDidBecomeActive:(_Bool)arg1 forController:(SBLockScreenSlideUpToAppController *)arg2;
- (void)setUnlockActionContext:(SBLockScreenActionContext *)arg1;
- (_Bool)isAnotherSlideUpControllerBlockingController:(SBLockScreenSlideUpToAppController *)arg1;
- (_Bool)controllerShouldInvertVerticalPadding:(SBLockScreenSlideUpToAppController *)arg1;
- (_Bool)controllerShouldUseAdditionalTopPadding:(SBLockScreenSlideUpToAppController *)arg1;
- (void)adjustWallpaperForVerticalScrollPercentage:(double)arg1;
- (UIView<_SBFVibrantView> *)grabberViewInLockScreenView:(SBLockScreenView *)arg1 forController:(SBLockScreenSlideUpToAppController *)arg2;
- (void)addGrabberView:(UIView<_SBFVibrantView> *)arg1 toLockScreenView:(SBLockScreenView *)arg2 forController:(SBLockScreenSlideUpToAppController *)arg3;
- (long long)presentingControllerIdentifierForController:(SBLockScreenSlideUpToAppController *)arg1;
- (void)prepareForSlideUpAppLaunchAnimated:(_Bool)arg1;
@end

