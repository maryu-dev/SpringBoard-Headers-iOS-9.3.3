
#import "SBComposedWallpaperSpecificationLayer.h"

@class NSURL;

@interface SBComposedWallpaperSpecificationImageLayer : SBComposedWallpaperSpecificationLayer
{
    NSURL *_imageURL;
    long long _sizingMode;
}

+ (id)layerWithImageURL:(id)arg1 sizingMode:(long long)arg2;
+ (long long)sizingModeForLayerDictionary:(id)arg1;
+ (id)imageURLForLayerDictionary:(id)arg1;
- (id)propertyListRepresentation;
- (id)referencedAssetURLs;
- (id)init;
- (id)initWithImageURL:(id)arg1 sizingMode:(long long)arg2;
- (id)initWithLayerDictionary:(id)arg1;

@end

