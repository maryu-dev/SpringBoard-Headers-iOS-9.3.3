
#import "UIViewController.h"

#import "NCBannerAccessoryHostViewControllerDelegate.h"
#import "NCInteractiveNotificationHostDelegate.h"
#import "NCNotificationActionTextInputDelegate.h"
#import "SBBannerButtonViewControllerDelegate.h"
#import "SBBulletinWindowClient.h"
#import "SBMotionGestureObserver.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerTransitioningDelegate.h"

@class FBUIApplicationSceneDeactivationAssertion, NCBannerAccessoryHostViewController, NCContentHostViewController, NSObject<OS_dispatch_group>, NSString, SBBannerButtonViewController, SBBannerContainerView, SBBannerContextView, SBUIBannerContext, UIImage, UIView, UIViewController<NCInteractiveNotificationHost>;

@interface SBBannerContainerViewController : UIViewController <NCInteractiveNotificationHostDelegate, SBBannerButtonViewControllerDelegate, NCNotificationActionTextInputDelegate, NCBannerAccessoryHostViewControllerDelegate, SBMotionGestureObserver, SBBulletinWindowClient, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    UIViewController<NCInteractiveNotificationHost> *_interactiveViewController;
    NCBannerAccessoryHostViewController *_accessoryViewController;
    NCContentHostViewController *_secondaryContentViewController;
    NCContentHostViewController *_inlayContentViewController;
    SBBannerButtonViewController *_buttonViewController;
    _Bool _notifiedAppeared;
    _Bool _manualDismissalEnabled;
    SBUIBannerContext *_bannerContext;
    SBBannerContainerView *_containerView;
    SBBannerContextView *_bannerContextView;
    FBUIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    UIView *_backgroundView;
    struct CGRect _keyboardFrame;
    double _maximumBannerHeight;
    NSObject<OS_dispatch_group> *_remoteLoadingGroup;
    _Bool _pulledDown;
    id <SBBannerContextViewControllerDelegate> _delegate;
    UIImage *_backgroundImage;
}

- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_keyboardWillChange:(id)arg1;
- (id)_bulletin;
- (void)_updateMotionGestureObservation;
- (void)didReceiveRaiseGesture;
- (void)hostViewController:(id)arg1 didRequestSticky:(_Bool)arg2;
- (void)hostViewControllerDidRequestSticky:(id)arg1;
- (void)hostViewControllerDidRequestDismissal:(id)arg1;
- (void)textInputViewController:(id)arg1 didSendTypedText:(id)arg2;
- (void)buttonViewController:(id)arg1 didSelectButtonAtIndex:(unsigned long long)arg2;
- (void)transitionToAction:(id)arg1;
- (void)transitionToActionWithIdentifier:(id)arg1;
- (void)_removeButtonViewController;
- (void)_setButtonViewController:(id)arg1;
- (id)_newButtonViewController;
- (void)hostViewController:(id)arg1 serviceRequestedDismissalEnabled:(_Bool)arg2;
- (void)hostViewController:(id)arg1 didRequestDismissalWithContext:(id)arg2;
- (void)hostViewControllerDidChangePreferredContentSize:(id)arg1;
- (_Bool)requiresKeyWindow;
- (void)_removeInteractiveViewController;
- (void)_setInteractiveViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_setInteractiveViewController:(id)arg1;
- (void)_removeInlayContentViewController;
- (void)_setInlayContentViewController:(id)arg1;
- (void)_setInlayContentViewWithCompletion:(id)arg1;
- (void)_removeSecondaryContentViewController;
- (void)_setSecondaryContentViewController:(id)arg1;
- (void)_setSecondaryContentViewWithCompletion:(id)arg1;
- (void)_removeAccessoryViewController;
- (void)_setAccessoryViewController:(id)arg1;
- (void)_setAccessoryViewWithCompletion:(id)arg1;
- (void)_removeChildViewController:(id)arg1 withTransition:(id)arg2;
- (void)_addChildViewController:(id)arg1 withTransition:(id)arg2;
- (void)_removeChildPullDownViewController:(id)arg1;
- (void)_addChildPullDownViewController:(id)arg1;
- (id)_bannerViewCreatingIfNecessary;
- (_Bool)_hasActions;
- (id)_bannerItem;
- (double)_percentDismissed;
- (void)_updateMaximumPullDownViewHeight;
- (void)_updateMaximumContainerHeightForOrientation:(long long)arg1;
- (void)_updateMaximumBannerHeight;
- (void)_updateMaximumHeightsWithOrientation:(long long)arg1;
- (void)_updateMaximumHeights;
- (double)_pullDownBottomOverhangHeight;
- (double)_bannerContentHeight;
- (double)_maximumPullDownViewHeight;
- (double)_miniumBannerContentHeight;
- (double)_pullDownViewHeight;
- (double)_preferredPullDownViewHeight;
- (void)_setPullDownViewWithCompletion:(id)arg1;
- (struct CGRect)_bannerFrameForOrientation:(long long)arg1;
- (struct CGRect)_bannerFrame;
- (void)_handleBannerContainerTapGesture:(id)arg1;
- (void)_handleBannerTapGesture:(id)arg1 withActionContext:(id)arg2;
- (void)_handleBannerTapGesture:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)willPresentFromActionIdentifier:(id)arg1;
@property(readonly, nonatomic) _Bool showsKeyboard;
@property(readonly, nonatomic) _Bool canPullDown;
- (double)preferredMaximumHeight;
- (void)setBannerPullDisplacement:(double)arg1;
- (void)_noteDidPullDown;
- (void)setBannerPullPercentage:(double)arg1;
- (void)_loadRemoteViewControllersWithCompletion:(id)arg1;
- (void)setBannerContext:(id)arg1 withReplaceReason:(int)arg2 completion:(id)arg3;
- (id)_newBackgroundViewWithFrame:(struct CGRect)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

