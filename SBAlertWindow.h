
#import "SBWindow.h"

#import "SBAlertWindowViewControllerDelegate.h"

@class NSMapTable, NSString, SBAlertWindowViewController;

@interface SBAlertWindow : SBWindow <SBAlertWindowViewControllerDelegate>
{
    SBAlertWindowViewController *_alertWindowController;
    id <SBAlertWindowDelegate> _alertWindowDelegate;
    NSMapTable *_alertToDisplayMap;
}

+ (_Bool)_isSecure;
+ (_Bool)sb_autorotates;
+ (double)windowLevel;
- (unsigned long long)defaultSupportedInterfaceOrientationsForAlertWindowViewController:(id)arg1;
- (long long)defaultInterfaceOrientationForPresentationOfAlertWindowViewController:(id)arg1;
- (_Bool)defaultShouldAutorotateForAlertWindowViewController:(id)arg1;
- (void)noteInterfaceOrientationChangingTo:(long long)arg1 animated:(_Bool)arg2 withActivatingAlert:(id)arg3;
- (id)stackedAlertsIncludingActiveAlert:(_Bool)arg1;
- (int)stackedDisplayCount;
- (_Bool)hasActiveAlertsOrDisplays;
- (void)addView:(id)arg1 toBeObscuredByAlert:(id)arg2;
- (_Bool)deactivateAlert:(id)arg1;
- (void)displayAlert:(id)arg1;
- (_Bool)isOpaque;
- (void)setRootViewController:(id)arg1;
- (void)dealloc;
- (id)_initWithFrame:(struct CGRect)arg1 debugName:(id)arg2 attached:(_Bool)arg3;
- (id)initWithScreen:(id)arg1 rootViewController:(id)arg2 layoutStrategy:(id)arg3 debugName:(id)arg4 scene:(id)arg5;
- (id)initWithScreen:(id)arg1 rootViewController:(id)arg2 debugName:(id)arg3 scene:(id)arg4;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

