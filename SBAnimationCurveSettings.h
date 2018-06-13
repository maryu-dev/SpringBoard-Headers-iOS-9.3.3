
#import "_UISettings.h"

@interface SBAnimationCurveSettings : _UISettings
{
    unsigned long long _curve;
    struct CGPoint _controlPoint1;
    struct CGPoint _controlPoint2;
}

+ (id)_rowsRelativeToKeyPath:(id)arg1;
+ (id)settingsControllerModule;
- (void)_invalidate;
- (void)setDefaultValues;

@end

