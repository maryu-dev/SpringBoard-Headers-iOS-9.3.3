
#import "NSObject.h"

@class UIGestureRecognizerTransformAnalyzerInfo;

@interface UIGestureRecognizerTransformAnalyzer : NSObject
{
    UIGestureRecognizerTransformAnalyzerInfo *_smoothedInfo;
    double _translationWeight;
    double _pinchingWeight;
    double _rotationWeight;
    int _dominantComponent;
}

- (id)analyzeTouches:(id)arg1;
- (void)reset;
- (id)init;

@end

