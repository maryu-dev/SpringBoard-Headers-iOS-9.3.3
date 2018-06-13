
#import "NSObject.h"

#import "SBTestRecipe.h"

@class NSString;

@interface SBBiometricEventsTestRecipe : NSObject <SBTestRecipe>
{
    unsigned long long _eventIndex;
}

+ (id)title;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)postEvent:(unsigned long long)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

