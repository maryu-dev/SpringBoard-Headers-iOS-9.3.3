
#import "_UISettings.h"

@interface SBBounceSettings : _UISettings
{
    double _gravity;
    double _velocity;
    double _elasticity;
    double _friction;
    double _resistance;
    double _multiplier;
    double _minVelocityToAssist;
    double _maxVelocityToAssist;
    double _maxVelocityAssistance;
}

- (void)setDefaultValues;

@end

