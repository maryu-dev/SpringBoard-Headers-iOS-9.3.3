
#import "SBTouchTemplateGestureRecognizer.h"

@interface SBTouchTemplatePanGestureRecognizer : SBTouchTemplateGestureRecognizer
{
    _Bool _recognizesHorizontalPanning;
    _Bool _recognizesVerticalPanning;
}

+ (id)defaultTemplates;
- (_Bool)_directionallyAcceptMotion;
- (struct CGPoint)_convertPortraitPoint:(struct CGPoint)arg1 toOrientation:(long long)arg2;
- (double)incrementalGestureMotionForCandidate:(id)arg1 withTransformAnalyzerInfo:(id)arg2;
- (_Bool)hasSignificantMotionToBegin;
- (void)_log:(id)arg1;
- (double)_arcSize;
- (double)_arcCenter;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

