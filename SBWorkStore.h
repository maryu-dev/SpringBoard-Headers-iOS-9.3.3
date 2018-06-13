
#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface SBWorkStore : NSObject
{
    NSMutableDictionary *_workItemsPerKey;
    NSMutableArray *_keysWithWork;
    NSMutableDictionary *_workExpirationPeriods;
    NSObject<OS_dispatch_queue> *_workQueue;
    unsigned long long _maxWorkPerKey;
    NSMutableArray *_observers;
    NSObject<OS_dispatch_queue> *_observerQueue;
    double _defaultWorkExpirationPeriod;
}

- (id)debugDescription;
- (id)description;
- (void)_notifyObserversWorkDidChange;
- (void)_workQueue_expireWorkForKey:(id)arg1;
- (void)setWorkExpirationPeriod:(double)arg1 forKey:(id)arg2;
- (void)purgeWorkForKey:(id)arg1;
- (id)dequeueWorkForKey:(id)arg1;
- (void)addWorkItem:(id)arg1 forKey:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) NSArray *keysWithWork;
- (id)initWithMaximumNumberOfWorkItemsPerKey:(unsigned long long)arg1;

@end

