
#import "SBAnimationCurveSettings.h"

@class BSAnimationSettings;

@interface SBAnimationSettings : SBAnimationCurveSettings
{
    BSAnimationSettings *_exportedSettings;
    long long _animationType;
    double _delay;
    double _duration;
    double _mass;
    double _stiffness;
    double _damping;
    double _epsilon;
    double _calculatedDuration;
}

+ (id)_moduleWithSectionTitle:(id)arg1 delay:(_Bool)arg2;
+ (id)_moduleWithSectionTitle:(id)arg1;
+ (id)settingsControllerModule;
- (id)BSAnimationSettings;
- (void)_invalidate;
- (void)setDefaultValues;

@end

