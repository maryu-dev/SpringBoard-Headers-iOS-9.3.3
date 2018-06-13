
#import "_UISettings.h"

@interface SBAnimationFactorySettings : _UISettings
{
    _Bool _isArchiveValue;
    _Bool _slowAnimations;
    double _slowDownFactor;
}

+ (id)settingsControllerModule;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)setDefaultValues;

@end

