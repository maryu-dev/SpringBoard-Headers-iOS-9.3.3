
#import "BSTransaction.h"

@class SBApplication;

@interface SBWaitForAppActivationTransaction : BSTransaction
{
    SBApplication *_application;
    _Bool _manualListener;
    _Bool _done;
}

- (_Bool)_appStateChanged:(int)arg1;
- (void)_activationStateChanged:(id)arg1;
- (void)_didComplete;
- (void)_begin;
- (id)application;
- (void)noteActivationStateChanged:(int)arg1;
- (id)initWithApplication:(id)arg1 manualListener:(_Bool)arg2;
- (id)initWithApplication:(id)arg1;

@end

