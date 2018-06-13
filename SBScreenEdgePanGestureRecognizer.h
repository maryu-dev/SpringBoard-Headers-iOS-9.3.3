
#import "UIScreenEdgePanGestureRecognizer.h"

@interface SBScreenEdgePanGestureRecognizer : UIScreenEdgePanGestureRecognizer
{
    _Bool _shouldUseGrapeFlags;
    double _grabberActiveZoneWidth;
}

- (_Bool)isLocationWithinGrabberActiveZone;
- (_Bool)_shouldUseGrapeFlags;
- (long long)_touchInterfaceOrientation;
- (struct CGPoint)_locationForTouch:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)sb_commonInitScreenEdgePanGestureRecognizer;


@end

