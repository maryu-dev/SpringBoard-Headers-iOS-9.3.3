
#import "UIView.h"

#import "SBControlCenterObserver.h"

@class NSString, SBControlCenterContentView, _UIBackdropView;

@interface SBControlCenterContentContainerView : UIView <SBControlCenterObserver>
{
    UIView *_accessibilityBackgroundView;
    UIView *_lighteningView;
    _UIBackdropView *_backdropView;
    SBControlCenterContentView *_contentView;
    double _contentHeight;
}

- (void)_accessibilityBackgroundContrastDidChange:(id)arg1;
- (void)_updateBackground;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

