
#import "NSObject.h"

@protocol SBUIQuietModePlayability <NSObject>
- (_Bool)overridesPocketMode;
- (_Bool)overridesQuietMode;
- (_Bool)isCritical;
- (_Bool)inertWhenLocked;
@end

