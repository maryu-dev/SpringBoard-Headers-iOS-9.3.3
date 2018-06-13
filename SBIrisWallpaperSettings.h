
#import "_UISettings.h"

@interface SBIrisWallpaperSettings : _UISettings
{
    _Bool _orbCancelsScroll;
    _Bool _scrollCancelsOrb;
    _Bool _irisLoopFadesOutUI;
}

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

