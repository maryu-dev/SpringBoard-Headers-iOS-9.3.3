
#import "SBAlertAdapter.h"

@interface SBStarkRelockUIAlert : SBAlertAdapter
{
    _Bool _animatingDismiss;
}

- (void)_dismissAndLock;
- (void)_animateDismiss;
- (id)_animationFactory;
- (void)deactivate;
- (void)activate;
- (_Bool)hasTranslucentBackground;
- (void)handleAutoLock;
- (_Bool)handleLockButtonPressed;
- (_Bool)shouldPendAlertItemsWhileActive;
- (_Bool)handleMenuButtonHeld;
- (_Bool)handleMenuButtonDoubleTap;
- (_Bool)handleMenuButtonTap;
- (void)dealloc;
- (id)initWithViewController:(id)arg1;
- (id)init;

@end

