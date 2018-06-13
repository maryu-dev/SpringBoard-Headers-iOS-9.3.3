
#import "UIDynamicBehavior.h"

@class UIAttachmentBehavior, UICollisionBehavior, UIDynamicItemBehavior, UIGravityBehavior;

@interface SBBounceBehavior : UIDynamicBehavior
{
    double _midwayPosition;
    double _completionThreshold;
    double _previousLinearVelocity;
    struct CGRect _targetFrame;
    id <UIDynamicItem> _item;
    UIDynamicItemBehavior *_bodyBehavior;
    UICollisionBehavior *_collisionBehavior;
    UIGravityBehavior *_gravityBehavior;
    UIDynamicItemBehavior *_pushBehavior;
    UIAttachmentBehavior *_draggingBehavior;
    double _gravity;
    double _velocity;
    double _elasticity;
    double _friction;
    double _resistance;
    double _minVelocityToAssist;
    double _maxVelocityToAssist;
    double _maxVelocityAssistance;
    struct UIEdgeInsets _boundaryInsets;
}

- (_Bool)allowsAnimatorToStop;
- (double)_maxVelocityToAssist;
- (double)_minVelocityToAssist;
- (double)_velocityAssistance;
- (_Bool)_shouldAssistWithVelocity:(double)arg1;
- (double)_adjustedVelocity:(double)arg1;
- (double)_itemOriginY;
- (_Bool)_itemStopped;
- (_Bool)_itemCompleted;
- (_Bool)_itemPastMidway;
- (double)_percentRemaining;
- (double)_percentComplete;
- (void)_removeDraggingBehavior;
- (void)_beginInteraction;
- (void)finishInteraction;
- (void)finishInteractionWithVelocity:(struct CGPoint)arg1;
- (void)finishInteractionWithVelocity:(struct CGPoint)arg1 removingGravityAtMidway:(_Bool)arg2;
- (void)updateInteractionWithPoint:(struct CGPoint)arg1;
- (void)initiateInteractionFromPoint:(struct CGPoint)arg1;
- (void)bounce;
- (void)_setupCollisionBoundaries;
- (void)_frameCollisionBoundaryPoints:(struct CGPoint *)arg1;
- (_Bool)_isGravityDown;
- (_Bool)isActive;
- (id)initWithItem:(id)arg1;
- (id)initWithItem:(id)arg1 targetFrame:(struct CGRect)arg2;

@end

