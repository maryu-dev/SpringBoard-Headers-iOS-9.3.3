
#import "UIGestureRecognizer.h"

@class NSArray, NSMapTable, NSMutableArray, SBPolygon, SBTouchTemplate, UIGestureRecognizerTransformAnalyzer;

@interface SBTouchTemplateGestureRecognizer : UIGestureRecognizer
{
    _Bool _recognitionBegan;
    unsigned long long _sequenceNumber;
    NSArray *_templates;
    double _animationDistance;
    long long _requiredDirectionality;
    UIGestureRecognizerTransformAnalyzer *_transformAnalyzer;
    NSMutableArray *_possibleTemplates;
    NSMapTable *_initialTouchPointMap;
    SBTouchTemplate *_matchedTemplate;
    SBPolygon *_matchedPolygon;
    unsigned long long _failedRecognitionAttempts;
    unsigned long long _trackingTouchCount;
    double _cumulativeMotion;
    double _cumulativeMotionEnvelope;
    double _smoothedIncrementalMotion;
}

- (void)_reset;
- (void)_failMeForReason:(id)arg1;
- (void)_computeGestureMotionWithTouches:(id)arg1 polygon:(id)arg2;
- (void)_attemptTemplateMatchWithTouches:(id)arg1 polygon:(id)arg2;
- (void)_updateForTouchesBeganOrMoved:(id)arg1;
- (void)_updateForTouchesCancelledOrEnded:(id)arg1;
- (double)_projectedMotionForInterval:(double)arg1;
- (_Bool)_directionallyAcceptMotion:(double)arg1;
- (id)_polygonForTouches:(id)arg1;
- (void)setState:(long long)arg1;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (double)incrementalGestureMotionForCandidate:(id)arg1 withTransformAnalyzerInfo:(id)arg2;
- (_Bool)hasSignificantMotionToBegin;
- (void)_log:(id)arg1;
- (void)log:(id)arg1;
- (long long)projectedCompletionTypeForInterval:(double)arg1;
@property(readonly, nonatomic) double cumulativePercentage;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;


@end

