
#import "NSObject.h"

@class NSCalendar, NSDate, NSDateFormatter, NSString, SUAutoInstallForecast;

@interface _SBAutoInstallForecastDateCache : NSObject
{
    unsigned long long _scheduleType;
    SUAutoInstallForecast *_forecast;
    NSCalendar *_calendar;
    NSDate *_roundedStartDate;
    NSDate *_roundedEndDate;
    NSDateFormatter *_timeFormatter;
    _Bool _parsed;
    NSString *_roundedStartTimeString;
    NSString *_roundedEndTimeString;
}

- (id)formatCardinalityForDate:(id)arg1;
- (_Bool)_uses24HourTimeForLocale;
- (id)_componentsFromDate:(id)arg1;
- (void)_computeTonightRangeRelativeToDate:(id)arg1 extraDayOffset:(long long)arg2 outStart:(id *)arg3 outEnd:(id *)arg4;
- (_Bool)_isStart:(id)arg1 end:(id)arg2 withinDateRange:(id)arg3 end:(id)arg4;
- (void)_parseForecast;
- (id)_timeFormatter;
- (id)description;
- (id)formatCardinalityForEndTime;
- (id)formatCardinalityForStartTime;
- (id)initWithForecast:(id)arg1;

@end

