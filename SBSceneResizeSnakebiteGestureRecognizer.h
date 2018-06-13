
#import "UIGestureRecognizer.h"

@class UITouch;

@interface SBSceneResizeSnakebiteGestureRecognizer : UIGestureRecognizer
{
    _Bool _beganTrackingNearDivider;
    _Bool _ignoresTouchesMoved;
    _Bool _waitingForInvalidTouchToBecomeValid;
    double _dividerPosition;
    double _velocity;
    double _distanceTraveledFromInitialLocation;
    double _absoluteDistanceTraveled;
    double _initialSingleTouchTimestamp;
    UITouch *_leftTouch;
    UITouch *_rightTouch;
    UITouch *_singleTrackingTouch;
    UITouch *_waitingTouch;
    double _previousTouchPosition;
    double _previousTouchTimestamp;
    id <SBSceneResizeSnakebiteGestureDebugDelegate> _debugDelegate;
    struct CGPoint _initialWaitingTouchLocation;
    struct CGPoint _initialTouchLocation;
}

- (void)_setDividerPosition:(double)arg1;
- (void)_debugRegionsDidChange;
- (void)_stopDrawingDebugRegions;
- (void)_drawDebugRegions;
- (void)_updateStatsForTouchPosition:(double)arg1 timestamp:(double)arg2;
- (void)_handleTouchesMovedForSingleTouchTracking:(id)arg1 withEvent:(id)arg2;
- (void)_handleTouchesMovedForMultipleTouchTracking:(id)arg1 withEvent:(id)arg2;
- (void)_clearTrackingTouches;
- (_Bool)_shouldContinueTrackingInvalidTouchWithDistanceFromDivider:(double)arg1;
- (_Bool)_shouldConsiderSingleTouchTrackingAsFailed;
- (void)_startTrackingWithSingleTouch:(id)arg1;
- (_Bool)_canStartAnyKindOfTrackingWithTouch:(id)arg1;
- (void)_startTrackingWithTouch:(id)arg1 andTouch:(id)arg2;
- (_Bool)_checkOngoingValidityOfLeftTouch:(id)arg1 rightTouch:(id)arg2;
- (_Bool)_checkInitialValidityOfTouch:(id)arg1 andTouch:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)interfaceOrientedLocationInView:(id)arg1;
- (_Bool)willAllowResizeForSingleTouch:(id)arg1;
- (_Bool)_singleTouchStartedInPinningAreaWithLocation:(struct CGPoint)arg1;
- (_Bool)_shouldStartTrackingSingleTouchAtLocation:(struct CGPoint)arg1 distanceFromDivider:(double)arg2;
- (double)_viewOffsetForNormalizedLocation:(double)arg1;
- (double)_normalizedLocationForViewOffset:(double)arg1;
- (double)_dividerViewOffset;
- (struct CGRect)_interfaceOrientedBounds;
- (struct CGPoint)_interfaceOrientedPoint:(struct CGPoint)arg1;
- (struct CGRect)_convertViewRect:(struct CGRect)arg1 toInterfaceOrientation:(long long)arg2;
- (struct CGPoint)_convertViewPoint:(struct CGPoint)arg1 toInterfaceOrientation:(long long)arg2;
- (long long)_interfaceOrientation;


@end

