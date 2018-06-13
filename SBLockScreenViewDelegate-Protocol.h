
#import "NSObject.h"

@class NSString, SBLockScreenView;

@protocol SBLockScreenViewDelegate <NSObject>
- (_Bool)deviceInformationTextViewCanUseFullHeight;
- (_Bool)lockScreenViewIsCurrentlyBeingDisplayed;
- (void)resetCoordinatedPresentingController:(id <SBCoordinatedPresenting>)arg1;
- (void)addCoordinatedPresentingController:(id <SBCoordinatedPresenting>)arg1;
- (void)removeCoordinatedPresentingController:(id <SBCoordinatedPresenting>)arg1;
- (_Bool)isAllowingWallpaperBlurUpdates;
- (_Bool)wantsToShowStatusBarTime;
- (_Bool)shouldShowSlideToUnlockTextImmediately;
- (NSString *)effectiveCustomSlideToUnlockText;
- (_Bool)lockScreenViewPhonePluginIsActive;
- (void)lockScreenView:(SBLockScreenView *)arg1 didEndScrollingOnPage:(long long)arg2;
- (void)lockScreenViewWillEndDraggingWithPercentScrolled:(double)arg1 percentScrolledVelocity:(double)arg2 targetScrollPercentage:(double)arg3;
- (void)lockScreenViewDidScrollWithNewScrollPercentage:(double)arg1 tracking:(_Bool)arg2;
- (void)lockScreenViewDidBeginScrolling:(SBLockScreenView *)arg1;
- (void)lockScreenView:(SBLockScreenView *)arg1 didScrollToPage:(long long)arg2;
- (void)lockScreenView:(SBLockScreenView *)arg1 willScrollToPage:(long long)arg2;
@end

