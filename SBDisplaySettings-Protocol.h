
#import "SBActivationSettings.h"
#import "SBDeactivationSettings.h"
#import "SBProcessSettings.h"
#import "SBStateSettings.h"

@protocol SBDisplaySettings <SBActivationSettings, SBDeactivationSettings, SBStateSettings, SBProcessSettings>
@end

