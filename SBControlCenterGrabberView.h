
#import "UIView.h"

#import "SBControlCenterObserver.h"
#import "SBUIControlCenterControlObserver.h"

@class BSTimer, NSMutableArray, NSMutableDictionary, NSString, SBChevronView, SBControlCenterStatusUpdate, SBUIControlCenterLabel;

@interface SBControlCenterGrabberView : UIView <SBUIControlCenterControlObserver, SBControlCenterObserver>
{
    SBChevronView *_chevronView;
    double _defaultChevronAlpha;
    SBUIControlCenterLabel *_statusLabel;
    SBUIControlCenterLabel *_statusLabel2;
    int _statusState;
    NSMutableDictionary *_statusByReason;
    NSMutableArray *_statusReasonQueue;
    SBControlCenterStatusUpdate *_activeStatus;
    BSTimer *_statusTimer;
}

+ (double)defaultHeightForOrientation:(long long)arg1;
- (void)controlConfigurationDidChangeForState:(long long)arg1;
- (void)controlAppearanceDidChangeForState:(long long)arg1;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)layoutSubviews;
- (struct CGRect)_grabberRect;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_rescindStatusUpdate:(id)arg1;
- (void)presentStatusUpdate:(id)arg1;
- (void)_resetLabelAndChevronState;
- (void)_animateNextStatus;
- (void)_animateWithDuration:(double)arg1 delay:(double)arg2 animations:(id)arg3;
- (void)_animateWithDuration:(double)arg1 animations:(id)arg2;
- (void)_setStatusState:(int)arg1;
- (id)_getNextStatusString;
- (void)_restartTimerWithInterval:(double)arg1 handler:(id)arg2;
- (void)_evaluateStatusStateForNewStatus:(id)arg1;
- (id)_peekNextStatus;
- (id)_popNextStatus;
- (_Bool)_hasPendingStatus;
- (id)chevronView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

