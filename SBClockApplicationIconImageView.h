
#import "SBLiveIconImageView.h"

#import "SBDateTimeOverrideObserver.h"

@class CALayer, NSString;

@interface SBClockApplicationIconImageView : SBLiveIconImageView <SBDateTimeOverrideObserver>
{
    CALayer *_seconds;
    CALayer *_minutes;
    CALayer *_hours;
    CALayer *_blackDot;
    CALayer *_redDot;
}

+ (void)_iconEditingStateChanged:(id)arg1;
+ (void)_handleTimeChange:(id)arg1;
+ (void)_timerFired:(id)arg1;
+ (void)initialize;
- (void)_timerFiredWithComponents:(id)arg1 flags:(unsigned long long)arg2;
- (void)updateUnanimated;
- (void)_updateUnanimatedWithComponents:(id)arg1;
- (void)dealloc;
- (_Bool)isAnimationAllowed;
- (void)_setAnimating:(_Bool)arg1;
- (void)updateAnimatingState;
- (id)_generateSquareContentsImage;
- (id)contentsImage;
- (void)layoutSubviews;
- (void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2;
- (void)setIcon:(id)arg1 location:(int)arg2 animated:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

