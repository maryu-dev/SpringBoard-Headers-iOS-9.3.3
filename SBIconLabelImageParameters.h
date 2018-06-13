
#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSString, UIColor, UIFont;

@interface SBIconLabelImageParameters : NSObject <NSCopying, NSMutableCopying>
{
    UIFont *_font;
    NSString *_text;
    _Bool _containsNonLatinLikeCharacters;
    _Bool _containsEmoji;
    _Bool _canEllipsize;
    _Bool _canTighten;
    _Bool _recalculateHash;
    _Bool _canUseMemoryPool;
    _Bool _accessibilityIncreaseContrastEnabled;
    double _scale;
    struct CGSize _maxSize;
    long long _style;
    UIColor *_textColor;
    UIColor *_focusHighlightColor;
    struct UIEdgeInsets _textInsets;
    struct UIEdgeInsets _fontLanguageInsets;
    int _iconLocation;
    unsigned long long _hash;
}

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)_noteNeedsHashRecalculation;
- (_Bool)colorspaceIsGrayscale;
- (id)initWithParameters:(id)arg1;
- (id)init;

@end

