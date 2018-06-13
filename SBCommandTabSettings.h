
#import "_UISettings.h"

@interface SBCommandTabSettings : _UISettings
{
    _Bool _dimmingView;
    double _numberOfAppsLandscape;
    double _numberOfAppsPortrait;
    double _barHeight;
    double _barEdgeMarginLandscape;
    double _barEdgeMarginPortrait;
    double _iconMargin;
    double _selectionSquareSize;
}

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

