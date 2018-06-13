
#import "NSObject.h"

@class NSDate;

@interface SBSoftwareUpdateStatePersistence : NSObject
{
    unsigned long long _alertFlow;
    _Bool _downloadWasQueuedRemotely;
    unsigned long long _nextAlertRepopStrategy;
    NSDate *_nextAlertScheduledDate;
}

- (void)_setNextAlertRepopStrategy:(unsigned long long)arg1;
- (void)_setNextAlertDate:(id)arg1;
- (void)_load;
- (void)_clear;
- (void)save;
- (id)description;
- (void)setNextAlertRepopStrategy:(unsigned long long)arg1 withNextAlertDate:(id)arg2;
- (id)init;

@end

