
#import "_UISettings.h"

@interface SBIconColorSettings : _UISettings
{
    _Bool _blurryFolderIcons;
    _Bool _blurryCloseBoxes;
    _Bool _suppressJitter;
    _Bool _closeBoxesEverywhere;
    double _maxSaturationBoost;
    double _maxSaturation;
    double _maxBrightnessBoost;
    double _maxBrightness;
    double _colorAlpha;
    double _whiteAlpha;
}

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

