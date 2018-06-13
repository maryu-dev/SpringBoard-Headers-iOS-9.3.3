
#import "UIViewController.h"

#import "SBControlCenterObserver.h"
#import "SBControlCenterSectionViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "_UIBackdropViewObserver.h"
#import "_UISettingsKeyObserver.h"

@class NSMutableArray, NSString, SBControlCenterContainerView, SBControlCenterContentView, SBControlCenterSettings, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface SBControlCenterViewController : UIViewController <UIGestureRecognizerDelegate, SBControlCenterSectionViewControllerDelegate, _UISettingsKeyObserver, _UIBackdropViewObserver, SBControlCenterObserver>
{
    SBControlCenterContainerView *_containerView;
    SBControlCenterContentView *_contentView;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
    NSMutableArray *_sectionList;
    SBControlCenterSettings *_settings;
    _Bool _presented;
    _Bool _transitioning;
    id <SBControlCenterViewControllerDelegate> _delegate;
}

- (void)backdropViewDidChange:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)section:(id)arg1 publishStatusUpdate:(id)arg2;
- (void)noteSectionEnabledStateDidChange:(id)arg1;
- (void)sectionWantsControlCenterDismissal:(id)arg1;
- (void)_handlePan:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)view;
- (void)abortAnimatedTransition;
- (void)_noteControlCenterControlDidDeactivate:(id)arg1;
- (void)_noteControlCenterControlDidActivate:(id)arg1;
@property(nonatomic) double revealPercentage;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillFinishTransitionOpen:(_Bool)arg1 withDuration:(double)arg2;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (double)contentHeightForOrientation:(long long)arg1;
- (void)trackChevronView:(id)arg1;
- (id)chevronView;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

