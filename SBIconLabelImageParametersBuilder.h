
#import "NSObject.h"

@class NSString, SBIcon, SBIconView, _UILegibilitySettings;

@interface SBIconLabelImageParametersBuilder : NSObject
{
    _Bool _accessibilityIncreaseContrastEnabled;
    _Bool _wantsFocusHighlight;
    int _iconLocation;
    SBIcon *_icon;
    SBIconView *_iconView;
    id <SBIconViewDelegate> _iconViewDelegate;
    Class _iconViewClass;
    _UILegibilitySettings *_settings;
    NSString *_text;
}

- (_Bool)_hasValidInputs;
- (id)_font;
- (double)_scale;
- (_Bool)_canUseMemoryPool;
- (id)_focusHighlightColor;
- (struct CGSize)_maxSize;
- (_Bool)_canTightenLabel;
- (_Bool)_canEllipsizeLabel;
- (void)setIcon:(id)arg1;
- (void)setIcon:(id)arg1 forLocation:(int)arg2;
- (id)buildParameters;

@end

