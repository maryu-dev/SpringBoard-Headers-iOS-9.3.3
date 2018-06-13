
#import "SBTouchTemplateGestureRecognizer.h"

@interface SBTouchTemplatePinchGestureRecognizer : SBTouchTemplateGestureRecognizer
{
}

- (double)_computeHandSizeCompensationGain:(double)arg1;
- (double)_computeNonlinearSpeedGain:(double)arg1;
- (double)incrementalGestureMotionForCandidate:(id)arg1 withTransformAnalyzerInfo:(id)arg2;
- (_Bool)hasSignificantMotionToBegin;
- (void)_log:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

