
#import "NSObject.h"

@interface SBVoiceDisabledBundles : NSObject
{
}

+ (_Bool)voiceControlDisabledByCurrentlyRunningApp;
+ (void)setAppDisabledVoiceControl:(_Bool)arg1 bundleIdentifier:(id)arg2;

@end

