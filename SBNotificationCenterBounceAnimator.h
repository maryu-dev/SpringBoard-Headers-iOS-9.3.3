
#import "NSObject.h"

#import "UIDynamicAnimatorDelegate.h"

@class NSString, SBBounceBehavior, SBBounceSettings, SBBouncingSystem, UIDynamicAnimator, _SBNotificationCenterBouncingItem;

@interface SBNotificationCenterBounceAnimator : NSObject <UIDynamicAnimatorDelegate>
{
    UIDynamicAnimator *_animator;
    SBBouncingSystem *_system;
    SBBounceBehavior *_behavior;
    _SBNotificationCenterBouncingItem *_item;
    id _completion;
    SBBounceSettings *_settings;
    struct CGRect _targetFrame;
}

- (void)dynamicAnimatorDidPause:(id)arg1;
- (void)stop;
- (void)_updateSettings;
- (void)beginBounceWithInitialFrame:(struct CGRect)arg1 targetFrame:(struct CGRect)arg2 velocity:(struct CGPoint)arg3 removingGravityAtMidway:(_Bool)arg4 stepper:(id)arg5 completion:(id)arg6;
- (void)dealloc;
- (id)initWithReferenceBounds:(struct CGRect)arg1 settings:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

