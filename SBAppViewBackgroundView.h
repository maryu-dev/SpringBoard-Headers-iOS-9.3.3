
#import "UIView.h"

#import "SBAppViewBackgroundView.h"

@class NSString;

@interface SBAppViewBackgroundView : UIView <SBAppViewBackgroundView>
{
    _Bool _hasDiscreteWallpaperEffect;
    long long _wallpaperStyle;
}

- (void)_recalulateBackgroundColor;
- (_Bool)_isTranslucent;
- (long long)_backgroundStyle;
@property(readonly, copy) NSString *description;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

