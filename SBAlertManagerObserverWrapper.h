
#import "NSObject.h"

@interface SBAlertManagerObserverWrapper : NSObject
{
    id _flags;
    id <SBAlertManagerObserver> _observer;
}

- (id)initWithObserver:(id)arg1 flags:(id)arg2;

@end

