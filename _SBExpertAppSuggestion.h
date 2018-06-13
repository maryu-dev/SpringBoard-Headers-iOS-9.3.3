
#import "SBBestAppSuggestion.h"

@class NSUUID, _DECAppItem, _DECResult;

@interface _SBExpertAppSuggestion : SBBestAppSuggestion
{
    _DECAppItem *_appSuggestion;
    _DECResult *_result;
}

- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isArrivedAtHomePrediction;
- (_Bool)isArrivedAtWorkPrediction;
- (_Bool)isFirstWakePrediction;
- (_Bool)isCarPlayPrediction;
- (_Bool)isBluetoothAudioPrediction;
- (_Bool)isBluetoothPrediction;
- (_Bool)isHeadphonesPrediction;
- (_Bool)isPrediction;
- (_Bool)isLocallyGeneratedSuggestion;
- (id)originatingDeviceName;
- (_Bool)isLocationBasedSuggestion;
- (id)bundleIdentifier;
@property(readonly, nonatomic) NSUUID *resultUUID;
- (id)initWithAppSuggestion:(id)arg1 result:(id)arg2;

@end

