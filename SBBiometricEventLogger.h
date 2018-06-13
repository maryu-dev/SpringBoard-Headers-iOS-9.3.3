
#import "NSObject.h"

@class BiometricKit;

@interface SBBiometricEventLogger : NSObject
{
    BiometricKit *_biometricKit;
    _Bool _fingerOnWithScreenOn;
    unsigned long long _fingerOnTime;
    unsigned long long _keybagUnlockTime;
}

+ (id)sharedInstance;
- (void)timestampEvent:(unsigned long long)arg1;
- (_Bool)_shouldSignpost;
- (_Bool)_shouldSyslogTimestamps;
- (void)_prearmMatch:(id)arg1;
- (void)_unlockAnimationWillStart:(id)arg1;
- (void)_keybagBioUnlock:(id)arg1;
- (void)_tryAgain:(id)arg1;
- (void)_fingerOn:(id)arg1;
- (void)_screenTurnedOn:(id)arg1;
- (void)_clearEverything;
- (id)init;

@end

