
#import "SBBestAppSuggestion.h"

@class UABestAppSuggestion;

@interface _SBUABestAppSuggestion : SBBestAppSuggestion
{
    UABestAppSuggestion *_appSuggestion;
}

- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isLocationBasedSuggestion;
- (_Bool)isLocallyGeneratedSuggestion;
- (_Bool)isCallContinuitySuggestion;
- (_Bool)isOpenURLSuggestion;
- (_Bool)isNotificationSuggestion;
- (id)originatingDeviceType;
- (id)originatingDeviceName;
- (id)originatingDeviceIdentifier;
- (id)lastUpdateTime;
- (id)activityType;
- (id)bundleIdentifier;
- (id)uniqueIdentifier;
- (id)initWithAppSuggestion:(id)arg1;

@end

