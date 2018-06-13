
#import "SBAwayViewPluginController.h"

@class NSMutableDictionary;

@interface SBEventObserverRegistry : SBAwayViewPluginController
{
    void *_provider;
    NSMutableDictionary *_observers;
}

+ (id)sharedInstance;
- (void)setValue:(_Bool)arg1 forState:(struct __CFString *)arg2;
- (void)postEventToInterestedObservers:(struct __CFString *)arg1;
- (void)removeObserverWithToken:(unsigned long long)arg1 forEvent:(id)arg2;
- (void)addObserverWithToken:(unsigned long long)arg1 forEvent:(id)arg2;
- (id)init;
- (void)handleEvent:(id)arg1 token:(unsigned long long)arg2 action:(long long)arg3;

@end

