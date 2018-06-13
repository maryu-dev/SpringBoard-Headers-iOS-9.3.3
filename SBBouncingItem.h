
#import "NSObject.h"

#import "UIDynamicItem.h"

@class NSString, UIBezierPath;

@interface SBBouncingItem : NSObject <UIDynamicItem>
{
    struct CGRect _bounds;
    struct CGPoint _center;
    double _multiplier;
    id _translateBlock;
}

@property(nonatomic) struct CGAffineTransform transform;
- (void)setBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGPoint center;

@property(readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property(readonly, nonatomic) unsigned long long collisionBoundsType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

