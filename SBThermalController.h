
#import "NSObject.h"

#import "SBThermalWarningAlertItemDelegate.h"
#import "SBThermalWarningSuppressionAssertionDelegate.h"

@class NSDictionary, NSMutableSet, NSString;

@interface SBThermalController : NSObject <SBThermalWarningSuppressionAssertionDelegate, SBThermalWarningAlertItemDelegate>
{
    _Bool _sampling;
    double _samplingStartTime;
    NSDictionary *_samplingStartCPUTimesByApp;
    int _sunlightStateToken;
    int _coldTempToken;
    int _warningAssertionToken;
    int _warningResponseToken;
    NSMutableSet *_warningSuppressionAssertions;
    _Bool _warningSuppressionPreference;
    int _level;
    _Bool _inSunlight;
}

+ (void)logThermalEvent:(id)arg1;
+ (id)sharedInstance;
- (void)thermalWarningAlert:(id)arg1 didTriggerAction:(int)arg2;
- (void)thermalWarningAssertionExpired:(id)arg1;
- (_Bool)captureWarningSuppressionAssertionWithPort:(unsigned int)arg1 reason:(id)arg2;
- (void)_didReceiveWarningAction:(int)arg1;
- (void)_calculateAppsCPUTimesWithCompletion:(id)arg1;
- (void)_killThermallyActiveApplication;
- (void)_killThermallyActiveApplicationGivenCPUTimes:(id)arg1;
- (void)_beginThermalJetsamCPUSampling;
- (void)respondToCurrentThermalCondition;
- (void)showThermalAlertIfNecessary;
- (void)startListeningForThermalEvents;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

