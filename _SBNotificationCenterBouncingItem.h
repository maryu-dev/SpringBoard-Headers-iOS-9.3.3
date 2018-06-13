
#import "NSObject.h"

#import "UIDynamicItem.h"

@class NSString, UIBezierPath;

@interface _SBNotificationCenterBouncingItem : NSObject <UIDynamicItem>
{
    struct CGPoint _center;
    struct CGRect _bounds;
    id _stepper;
}

@property(nonatomic) struct CGRect frame;
@property(nonatomic) struct CGAffineTransform transform;
- (void)setBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGPoint center;
- (id)initWithFrame:(struct CGRect)arg1 stepper:(id)arg2;

@property(readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property(readonly, nonatomic) unsigned long long collisionBoundsType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

