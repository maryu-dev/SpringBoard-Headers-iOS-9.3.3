
#import "NSObject.h"

@class SBIconColorSettings;

@protocol _SBIconWallpaperBackgroundClient <NSObject>
- (_Bool)isBlurring;
- (void)setBlurring:(_Bool)arg1;
- (void)setWallpaperBackgroundRect:(struct CGRect)arg1 forContents:(struct CGImage *)arg2 withFallbackColor:(struct CGColor *)arg3;
- (_Bool)wantsBlur:(SBIconColorSettings *)arg1;
- (struct CGRect)wallpaperRelativeBounds;
@end

