
#import "NSObject.h"

#import "SBVolumePressBandit.h"

@class NSString, NSTimer;

@interface _SBFallbackSettingsHelper : NSObject <SBVolumePressBandit>
{
    NSTimer *_clearTimer;
    unsigned long long _pressesWithinInterval;
}

+ (_Bool)useFallbackSettingsHelperOnThisDevice;
- (void)reset;
- (void)handleTimerFired:(id)arg1;
- (_Bool)shouldUseFallbackAction;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

