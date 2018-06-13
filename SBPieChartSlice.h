
#import "NSObject.h"

@class UIColor;

@interface SBPieChartSlice : NSObject
{
    double _value;
    UIColor *_fillColor;
}

+ (id)sliceWithValue:(double)arg1 fillColor:(id)arg2;
- (id)initWithValue:(double)arg1 fillColor:(id)arg2;

@end

