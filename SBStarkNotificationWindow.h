
#import "SBWindow.h"

#import "SBStarkNotificationViewControllerDelegate.h"

@class NSString, SBStarkNotificationViewController, SBStarkScreenFocusController, SBStarkSystemGestureManager;

@interface SBStarkNotificationWindow : SBWindow <SBStarkNotificationViewControllerDelegate>
{
    id <SBStarkSessionConfiguring> _configuration;
    SBStarkScreenFocusController *_focusController;
    SBStarkSystemGestureManager *_systemGestureManager;
    _Bool _assertingFocus;
    id _borrowScreenToken;
}

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)notificationViewController:(id)arg1 stateDidChangeFrom:(int)arg2;
- (void)notificationViewController:(id)arg1 willDisplayBannerView:(id)arg2;
- (void)dealloc;
- (id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 scene:(id)arg4;
- (id)initWithConfiguration:(id)arg1 systemGestureManager:(id)arg2 layoutStrategy:(id)arg3 debugName:(id)arg4 scene:(id)arg5;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

