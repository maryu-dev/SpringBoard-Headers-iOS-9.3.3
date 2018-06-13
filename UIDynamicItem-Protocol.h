
#import "NSObject.h"

@class UIBezierPath;

@protocol UIDynamicItem <NSObject>
@property(nonatomic) struct CGAffineTransform transform;
@property(readonly, nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGPoint center;

@optional
@property(readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property(readonly, nonatomic) unsigned long long collisionBoundsType;
@end

