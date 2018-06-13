
#import "UIViewController.h"

#import "SBDateTimeOverrideObserver.h"

@class NSString, _UILegibilitySettings;

@interface SBLockScreenDateViewController : UIViewController <SBDateTimeOverrideObserver>
{
    struct NSNumber *_timerToken;
    _Bool _disablesUpdates;
    _UILegibilitySettings *_legibilitySettings;
}

- (void)setCustomSubtitleText:(id)arg1 withColor:(id)arg2;
- (void)setContentAlpha:(double)arg1 withDateVisible:(_Bool)arg2;
- (void)_startUpdateTimer;
- (void)_stopUpdateTimer;
- (void)_updateView;
- (id)dateViewIfExists;
- (id)dateView;
- (void)_updateFormat;
- (void)_addObservers;
- (void)_backlightChanged;
- (void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;
- (void)setView:(id)arg1;
- (void)loadView;
@property(nonatomic, getter=isDateHidden) _Bool dateHidden;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

