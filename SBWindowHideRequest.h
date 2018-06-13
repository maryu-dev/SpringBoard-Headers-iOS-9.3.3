
#import "NSObject.h"

@class NSString;

@interface SBWindowHideRequest : NSObject
{
    NSString *_reason;
    struct SBWindowLevelRange_struct _windowLevelRange;
}

+ (id)hideRequestWithWindowLevelRange:(struct SBWindowLevelRange_struct)arg1 reason:(id)arg2;
- (id)description;

@end

