
#import "NSObject.h"

@class NSString;

@interface SBTodayTableDateHeader : NSObject
{
    _Bool _shouldSuperscriptOrdinal;
    NSString *_dateString;
    struct _NSRange _ordinalRange;
}

+ (id)dateHeaderWithDate:(id)arg1 locale:(id)arg2 singleLine:(_Bool)arg3;
- (id)initWithDateString:(id)arg1 ordinalRange:(struct _NSRange)arg2 shouldSuperscriptOrdinal:(_Bool)arg3;

@end

