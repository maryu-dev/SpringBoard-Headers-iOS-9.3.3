
#import "NSObject.h"

@protocol UICoordinateSpace <NSObject>
@property(readonly, nonatomic) struct CGRect bounds;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id <UICoordinateSpace>)arg2;
@end

