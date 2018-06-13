
#import "NSObject.h"

@class NSDate, NSHashTable;

@interface SBDateTimeController : NSObject
{
    NSDate *_overrideDate;
    NSHashTable *_observers;
}

+ (id)sharedInstance;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(copy, nonatomic) NSDate *overrideDate;
@property(readonly, copy, nonatomic) NSDate *currentDate;
- (id)init;

@end

