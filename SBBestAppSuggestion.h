
#import "NSObject.h"

@class NSDate, NSString, NSUUID;

@interface SBBestAppSuggestion : NSObject
{
}

- (_Bool)isArrivedAtHomePrediction;
- (_Bool)isArrivedAtWorkPrediction;
- (_Bool)isFirstWakePrediction;
- (_Bool)isCarPlayPrediction;
- (_Bool)isBluetoothAudioPrediction;
- (_Bool)isBluetoothPrediction;
- (_Bool)isHeadphonesPrediction;
- (_Bool)isPrediction;
- (_Bool)isLocationBasedSuggestion;
- (_Bool)isSiriSuggestion;
- (_Bool)isLocallyGeneratedSuggestion;
- (_Bool)isCallContinuitySuggestion;
- (_Bool)isOpenURLSuggestion;
- (_Bool)isNotificationSuggestion;
@property(readonly, copy) NSString *originatingDeviceType;
@property(readonly, copy) NSString *originatingDeviceName;
@property(readonly, copy) NSString *originatingDeviceIdentifier;
@property(readonly, copy) NSDate *lastUpdateTime;
@property(readonly, copy) NSString *activityType;
@property(readonly, copy) NSString *bundleIdentifier;
@property(readonly, copy) NSUUID *uniqueIdentifier;

@end

