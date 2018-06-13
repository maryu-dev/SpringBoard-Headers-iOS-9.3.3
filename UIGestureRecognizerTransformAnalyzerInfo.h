
#import "NSObject.h"

@interface UIGestureRecognizerTransformAnalyzerInfo : NSObject
{
    double _translationMagnitude;
    double _scale;
    double _rotation;
    struct CGPoint _translation;
    struct CGPoint _absoluteTranslation;
}

- (void)_setRotation:(double)arg1;
- (void)_setScale:(double)arg1;
- (void)_setAbsoluteTranslation:(struct CGPoint)arg1;
- (void)_setTranslationMagnitude:(double)arg1;
- (void)_setTranslation:(struct CGPoint)arg1;
- (id)description;
- (void)_reset;

@end

