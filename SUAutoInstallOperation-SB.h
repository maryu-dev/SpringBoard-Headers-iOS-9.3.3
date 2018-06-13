
#import "SUAutoInstallOperation.h"

@interface SUAutoInstallOperation (SB)
- (id)_getForecastDateCache;
- (id)description;
- (id)sb_formatCardinalityForEndTime;
- (id)sb_formatCardinalityForStartTime;
- (id)sb_roundedEndTimeString;
- (id)sb_roundedStartTimeString;
- (unsigned long long)sb_scheduleType;
- (_Bool)sb_isValid;
- (_Bool)sb_isScheduled;
- (_Bool)sb_isForecastLogicallyExpired;
@end

