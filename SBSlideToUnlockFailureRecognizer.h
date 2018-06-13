
#import "UIGestureRecognizer.h"

#import "_UISettingsKeyObserver.h"

@class NSString, SBSlideToUnlockTriangleView, UIView;

@interface SBSlideToUnlockFailureRecognizer : UIGestureRecognizer <_UISettingsKeyObserver>
{
    struct CGPoint _startingLocation;
    unsigned long long _maxAllowableVerticalOffset;
    double _maxAllowedTopAngle;
    double _minAllowedTopAngle;
    double _effectiveTopAngle;
    double _minAllowedBottomAngle;
    double _maxAllowedBottomAngle;
    double _effectiveBottomAngle;
    _Bool _tracking;
    _Bool _allowMultiTouch;
    _Bool _viewDebugArea;
    UIView *_relativeView;
    UIView *_debugHorizontalView;
    SBSlideToUnlockTriangleView *_debugInclineUpView;
    SBSlideToUnlockTriangleView *_debugInclineDownView;
}

- (void)_setDebugViewsVisible:(_Bool)arg1;
- (_Bool)_isLocationOutOfBounds:(struct CGPoint)arg1;
- (_Bool)_isOutOfBounds:(struct CGPoint)arg1 forAngle:(double)arg2;
- (_Bool)_isOutOfBoundsVertically:(struct CGPoint)arg1;
- (double)_computeEffectiveAngleFromMin:(double)arg1 max:(double)arg2;
- (struct CGPoint)_averagePointFromTouches:(id)arg1;
- (long long)_activeTouchCountForEvent:(id)arg1;
- (void)_loadFromSettings:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (double)_effectiveBottomAngle;
- (double)_effectiveTopAngle;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

