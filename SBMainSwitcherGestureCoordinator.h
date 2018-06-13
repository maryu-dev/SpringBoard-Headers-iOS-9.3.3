
#import "NSObject.h"

#import "BSTransactionObserver.h"

@class NSString, SBMainSwitcherViewController, SBSwitcherForcePressSystemGestureTransaction;

@interface SBMainSwitcherGestureCoordinator : NSObject <BSTransactionObserver>
{
    SBSwitcherForcePressSystemGestureTransaction *_switcherForcePressTransaction;
    _Bool _waitingForTransactionCreation;
    SBMainSwitcherViewController *_switcherController;
    _Bool _switcherAnimationRevealing;
    _Bool _slideUpGestureRevealedOrDismissedSwitcher;
}

+ (id)sharedInstance;
- (void)transactionDidComplete:(id)arg1;
- (void)_releaseOrientationLock;
- (void)_lockOrientation;
- (_Bool)isAppSwitcherShowing;
- (void)_slideUpGestureCancelled;
- (void)_slideUpGestureEndedWithCompletionType:(long long)arg1 cumulativePercentage:(double)arg2;
- (void)_slideUpGestureChanged:(double)arg1;
- (void)_slideUpGestureBegan;
- (void)_handleSwitcherSlideUpGesture:(id)arg1;
- (void)_forcePressGestureBeganWithGesture:(id)arg1;
- (void)_handleSwitcherForcePressGesture:(id)arg1;
- (void)handleSwitcherSlideUpGesture:(id)arg1;
- (void)handleSwitcherForcePressGesture:(id)arg1;
- (id)initWithMainSwitcherController:(id)arg1;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

