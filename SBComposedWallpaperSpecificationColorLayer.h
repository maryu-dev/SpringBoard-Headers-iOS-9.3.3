
#import "SBComposedWallpaperSpecificationLayer.h"

@class UIColor;

@interface SBComposedWallpaperSpecificationColorLayer : SBComposedWallpaperSpecificationLayer
{
    UIColor *_color;
}

+ (id)layerWithColor:(id)arg1;
+ (id)colorForLayerDictionary:(id)arg1;
- (id)propertyListRepresentation;
- (id)init;
- (id)initWithColor:(id)arg1;
- (id)initWithLayerDictionary:(id)arg1;

@end

