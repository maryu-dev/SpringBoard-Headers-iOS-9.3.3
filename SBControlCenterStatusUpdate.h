
#import "NSObject.h"

@class NSArray, NSString;

@interface SBControlCenterStatusUpdate : NSObject
{
    int _type;
    NSString *_reason;
    NSArray *_statusStrings;
}

+ (id)statusUpdateWithString:(id)arg1 reason:(id)arg2;
- (id)popStatusString;
- (void)addStatusString:(id)arg1;
- (id)init;

@end

