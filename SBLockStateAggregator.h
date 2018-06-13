
#import "NSObject.h"

@interface SBLockStateAggregator : NSObject
{
    unsigned long long _lockState;
}

+ (id)sharedInstance;
- (void)_updateLockState;
- (_Bool)hasAnyLockState;
- (unsigned long long)lockState;
- (id)description;
- (id)_descriptionForLockState:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

