
#import "NSObject.h"

@class UIView;

@protocol _UIDynamicReferenceSystem <NSObject>
- (struct CGRect)bounds;

@optional
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(UIView *)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(UIView *)arg2;
- (struct CGRect)_dynamicReferenceBounds;
@end

