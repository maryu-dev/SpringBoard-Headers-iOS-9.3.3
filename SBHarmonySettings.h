
#import "_UISettings.h"

@class NSString;

@interface SBHarmonySettings : _UISettings
{
    _Bool _whitePointAdaptationInteractiveUpdateEnabled;
    float _whitePointAdaptationStrengthStandard;
    float _whitePointAdaptationStrengthReading;
    float _whitePointAdaptationStrengthPhoto;
    float _whitePointAdaptationStrengthVideo;
    float _whitePointAdaptationStrengthGame;
    float _whitePointAdaptationUpdateDefaultDuration;
    NSString *_whitePointAdaptationInteractiveUpdateTimingFunctionName;
}

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

