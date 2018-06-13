
#import "SBLockOverlayViewController.h"

#import "SBLockOverlayViewDelegate.h"

@class NSString, SBAwayBulletinListItem, SBLockOverlayView;

@interface SBLockScreenFullscreenBulletinViewController : SBLockOverlayViewController <SBLockOverlayViewDelegate>
{
    SBLockOverlayView *_bulletinView;
    _Bool _performedAction;
    SBAwayBulletinListItem *_bulletinItem;
}

- (_Bool)isPlayingSound;
- (id)_lockScreenActionContext;
- (id)slideToUnlockText;
- (void)performUnlockAction;
- (void)performSnoozeAction;
- (id)_snoozeAction;
- (_Bool)_hasSnoozeAction;
- (id)_dismissAction;
- (void)performDismissAction;
- (id)_alternateAction;
- (_Bool)_hasAlternateAction;
- (void)performAlternateAction;
- (void)performAction:(id)arg1;
- (id)_titleForAlternateActionButton;
- (id)_calculatedTitleForAlternateActionButton;
- (id)_customTitleForAlternateActionButton;
- (void)handleTapGestureFromView:(id)arg1;
- (void)lockButtonPressed:(id)arg1;
- (_Bool)handleVolumeButtonPressed;
- (_Bool)handleVolumeUpButtonPressed;
- (_Bool)handleVolumeDownButtonPressed;
- (void)volumeChanged:(id)arg1;
- (void)updateContent;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

