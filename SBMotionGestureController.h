
#import "NSObject.h"

@class CMGestureManager, NSMutableDictionary;

@interface SBMotionGestureController : NSObject
{
    NSMutableDictionary *_observersByPriority;
    CMGestureManager *_motionGestureManager;
}

+ (id)sharedInstance;
+ (void)initialize;
- (void)_removeGestureManager;
- (void)_addGestureManager;
- (void)_updateGestureManager;
- (id)_observersForPriority:(unsigned long long)arg1;
- (id)_highestPriorityObservers;
- (void)_enumerateObserversByPriority:(id)arg1;
- (_Bool)_hasObservers;
- (void)_notifyObserversOfGesture:(int)arg1;
- (void)_removeGestureObserver:(id)arg1;
- (void)_addGestureObserver:(id)arg1 withPriority:(unsigned long long)arg2;
- (void)removeGestureObserver:(id)arg1;
- (void)addGestureObserver:(id)arg1 withPriority:(unsigned long long)arg2;
- (void)addGestureObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

