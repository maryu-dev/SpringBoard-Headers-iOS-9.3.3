
#import "UIView.h"

@class NSArray;

@interface SBPieChartView : UIView
{
    NSArray *_slices;
    double _valueTotal;
    double _radius;
    struct CGPoint _center;
    double _defaultRotation;
}

- (void)_drawSlice:(id)arg1 atValue:(double)arg2;
- (void)_rotateContext;
- (void)_updateMetrics;
- (void)drawRect:(struct CGRect)arg1;
- (void)setSlices:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

