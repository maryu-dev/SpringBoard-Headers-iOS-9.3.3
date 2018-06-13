
#import "SBAlert.h"

@class SBLogoutDebugBlockingViewController, SBLogoutProgressAlertView, SBMultiUserDefaults, SBPlatformController, UMUser;

@interface SBLogoutProgressAlertViewController : SBAlert
{
    SBPlatformController *_platformController;
    SBMultiUserDefaults *_multiUserDefaults;
    id <SBLogoutProgressDataSource> _dataSource;
    UMUser *_user;
    SBLogoutProgressAlertView *_progressView;
    SBLogoutDebugBlockingViewController *_debugTasksViewController;
}

- (void)_updateData;
- (void)_updateLegibility;
- (id)_legibilitySettings;
- (void)_updateDebugTasksViewControllerSizeFromSize:(struct CGSize)arg1;
- (_Bool)_supportsDebugUI;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)deactivate;
- (void)activate;
- (long long)customBackgroundStyle;
- (_Bool)wantsCustomBackgroundStyle;
- (_Bool)hasTranslucentBackground;
- (long long)statusBarStyle;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (void)prepareForRestart;
- (void)refreshData;
- (id)initWithUserAccount:(id)arg1;

@end

