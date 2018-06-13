
#import "NSObject.h"

@class NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSOperationQueue, SBBootDefaults;

@interface SBSynchronizeCloudCriticalDataOperation : NSObject
{
    _Bool _needsSync;
    SBBootDefaults *_queue_bootDefaults;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_queue_operationGroup;
    unsigned long long _queue_operationCount;
    _Bool _queue_isComplete;
    double _queue_startTime;
}

- (id)_queue_fetchCloudDefaultsOperation;
- (id)_queue_fetchMDMProfilesOperation;
- (id)_queue_fetchCloudAccountOperation;
- (void)_queue_startFetchingCloudCriticalData;
- (_Bool)_queue_isComplete;
- (void)_queue_addOperation:(id)arg1;
- (void)_addOperation:(id)arg1;
- (_Bool)waitForSynchonizeToCompleteWithTimeout:(double)arg1;
- (void)startSynchronize;
- (id)initWithDefaults:(id)arg1 userManager:(id)arg2;
- (id)init;

@end

