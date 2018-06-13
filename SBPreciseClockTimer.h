
#import "NSObject.h"

@class CADisplayLink, NSCalendar, NSMutableDictionary;

@interface SBPreciseClockTimer : NSObject
{
    CADisplayLink *_displayLink;
    NSMutableDictionary *_minuteUpdateHandlers;
    unsigned long long _nextToken;
    NSCalendar *_calendar;
    long long _lastHour;
    long long _lastMinute;
}

+ (id)now;
+ (id)sharedInstance;
- (void)_updateDisplayLinkFrameIntervalForSecondsPastMinute:(double)arg1;
- (void)_handleTimePassed;
- (void)_onDisplayLink:(id)arg1;
- (void)_updateDisplayLink;
- (void)stopMinuteUpdatesForToken:(struct NSNumber *)arg1;
- (struct NSNumber *)startMinuteUpdatesWithHandler:(id)arg1;
- (void)dealloc;
- (id)init;

@end

