
#import "SBSystemGestureRecognizerDelegate.h"

@class SBSceneResizeSnakebiteGestureRecognizer;

@protocol SBSceneResizeSnakebiteGestureRecognizerDelegate <SBSystemGestureRecognizerDelegate>
- (_Bool)sceneResizeGestureRecognizerShouldOnlyRecognizeForSingleTouch:(SBSceneResizeSnakebiteGestureRecognizer *)arg1;
- (_Bool)sceneResizeGestureRecognizer:(SBSceneResizeSnakebiteGestureRecognizer *)arg1 shouldWaitForInvalidSingleTouchToBecomeValidWithDistanceFromDivider:(double)arg2;
- (double)verticalCenterOfSingleTouchRegionForSceneResizeGestureRecognizer:(SBSceneResizeSnakebiteGestureRecognizer *)arg1;
- (double)minimumDistanceForSingleTouchForSceneResizeGestureRecognizer:(SBSceneResizeSnakebiteGestureRecognizer *)arg1;
- (double)minimumDurationForSingleTouchForSceneResizeGestureRecognizer:(SBSceneResizeSnakebiteGestureRecognizer *)arg1;
- (long long)interfaceOrientationForSceneResizeGestureRecognizer:(SBSceneResizeSnakebiteGestureRecognizer *)arg1;
- (double)heightOfPinningAreaInDividerForSceneResizeGestureRecognizer:(SBSceneResizeSnakebiteGestureRecognizer *)arg1;
- (double)heightOfSingleTapAreaInDividerForSceneResizeGestureRecognizer:(SBSceneResizeSnakebiteGestureRecognizer *)arg1;
- (double)sceneResizeGestureRecognizer:(SBSceneResizeSnakebiteGestureRecognizer *)arg1 viewOffsetForLocation:(double)arg2;
- (double)sceneResizeGestureRecognizer:(SBSceneResizeSnakebiteGestureRecognizer *)arg1 locationForViewOffset:(double)arg2;
- (double)locationOfDividerForSceneResizeGestureRecognizer:(SBSceneResizeSnakebiteGestureRecognizer *)arg1;
@end

