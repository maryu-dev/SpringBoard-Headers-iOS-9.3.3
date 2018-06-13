
#import "NSObject.h"

#import "UIDynamicAnimatorDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "_UISettingsKeyObserver.h"

@class NSMutableSet, NSSet, NSString, SBBounceBehavior, SBBounceSettings, SBBouncingItem, SBBouncingSystem, UIDynamicAnimator, UIGestureRecognizer, UIView;

@interface SBLockScreenBounceAnimator : NSObject <UIDynamicAnimatorDelegate, _UISettingsKeyObserver, UIGestureRecognizerDelegate>
{
    NSMutableSet *_tapExcludedViews;
    NSMutableSet *_tapExcludedZones;
    _Bool _isAnimating;
    _Bool _bounceEnabled;
    UIView *_view;
    SBBouncingSystem *_system;
    UIDynamicAnimator *_animator;
    SBBouncingItem *_item;
    SBBounceBehavior *_behavior;
    UIGestureRecognizer *_tapRecognizer;
    NSSet *_gestures;
    id _shouldBeginBlock;
    id _prepareBlock;
    id _translateBlock;
    id _canceledBlock;
    id _completedBlock;
    SBBounceSettings *_settings;
    id <SBPresentingDelegate> _presentingDelegate;
}

- (void)dynamicAnimatorDidPause:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_updateSettings;
- (void)_createAnimator;
- (void)_removeAnimator;
- (void)_resetAnimator;
- (void)_beginAnimating:(id)arg1;
- (void)reenableGestureRecognizer:(id)arg1;
- (void)cancelGestureRecognizer:(id)arg1;
- (_Bool)allowTapForGestureRecognizer:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
@property(readonly, nonatomic) __weak NSSet *gestures;
- (void)_removeTapRecognizer;
- (void)_addTapRecognizer;
- (void)addTapExcludedZone:(struct CGRect)arg1;
@property(readonly, nonatomic) __weak NSSet *tapExcludedViews;
- (void)removeTapExcludedView:(id)arg1;
- (void)addTapExcludedView:(id)arg1;
- (void)setBounceEnabled:(_Bool)arg1;
- (void)cancelAnimation;
- (_Bool)isAnimating;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

