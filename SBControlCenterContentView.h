
#import "UIView.h"

#import "SBControlCenterObserver.h"

@class NSString, SBCCQuickLaunchSectionController, SBCCSettingsSectionController, SBControlCenterGrabberView, SBControlCenterSectionViewController, UIViewController;

@interface SBControlCenterContentView : UIView <SBControlCenterObserver>
{
    UIViewController *_viewController;
    SBControlCenterGrabberView *_grabberView;
    SBCCSettingsSectionController *_settingsSection;
    SBControlCenterSectionViewController *_brightnessSection;
    SBControlCenterSectionViewController *_mediaControlsSection;
    SBControlCenterSectionViewController *_airplaySection;
    SBCCQuickLaunchSectionController *_quickLaunchSection;
}

+ (double)defaultBreadthForOrientation:(long long)arg1;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)layoutSubviews;
- (void)_iPhone_layoutSubviewsInBounds:(struct CGRect)arg1 orientation:(long long)arg2;
- (void)_iPad_layoutSubviewsInBounds:(struct CGRect)arg1 orientation:(long long)arg2;
- (void)updateSectionVisibility:(id)arg1 animated:(_Bool)arg2;
- (void)updateEnabledSections;
- (void)_removeSectionController:(id)arg1;
- (void)_addSectionController:(id)arg1;
- (double)contentHeightForOrientation:(long long)arg1;
- (id)_allSections;
- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

