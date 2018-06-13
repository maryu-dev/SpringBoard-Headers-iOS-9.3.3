
#import "UIView.h"

@class NSString;

@interface SBDistanceFieldView : UIView
{
}

+ (Class)layerClass;
@property double lineWidth;
@property double sharpness;
@property double offset;
@property struct CGColor *foregroundColor;
@property _Bool invertsShape;
@property(copy, nonatomic) NSString *renderMode;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;

@end

