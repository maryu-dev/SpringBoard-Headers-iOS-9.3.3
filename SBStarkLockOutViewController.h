
#import "UIViewController.h"

@class FBSceneHostManager, NSString, SBStarkLockOutView, SBStarkScreenController, SBUIStarkStartupAnimation;

@interface SBStarkLockOutViewController : UIViewController
{
    id <SBStarkSessionConfiguring> _configuration;
    SBStarkScreenController *_screenController;
    long long _mode;
    SBStarkLockOutView *_modeView;
    SBStarkLockOutView *_previousModeView;
    FBSceneHostManager *_layoutWindowHostManager;
    NSString *_layoutWindowHostRequester;
    _Bool _inDealloc;
    _Bool _pendingAnimated;
    long long _pendingMode;
    SBUIStarkStartupAnimation *_startupAnimation;
}

- (void)_updateLockOutModeIfPending;
- (id)_newModeViewForMode:(long long)arg1;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (id)preferredFocusedItem;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)setLockOutMode:(long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) long long lockOutMode;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithConfiguration:(id)arg1;

@end

