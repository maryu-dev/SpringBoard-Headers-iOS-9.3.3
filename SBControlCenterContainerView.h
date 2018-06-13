
#import "UIView.h"

#import "SBControlCenterObserver.h"

@class NSString, SBChevronView, SBControlCenterContentContainerView;

@interface SBControlCenterContainerView : UIView <SBControlCenterObserver>
{
    UIView *_darkeningView;
    double _revealPercentage;
    SBChevronView *_chevronToTrack;
    _Bool _useMaxDarkness;
    _Bool _animatingDynamically;
    _Bool _adjustingBrightness;
    UIView *_dynamicsContainerView;
    SBControlCenterContentContainerView *_contentContainerView;
}

- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillFinishTransitionOpen:(_Bool)arg1 withDuration:(double)arg2;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)updateBackgroundSettings:(id)arg1;
- (void)abortAnimatedTransition;
@property(nonatomic) double revealPercentage;
- (id)_contentChevronView;
- (id)_currentBGColor;
- (void)_updateContentFrame;
- (void)_updateDarkeningFrame;
- (void)trackChevronView:(id)arg1;
- (void)setContentHeight:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

