
#import "NSObject.h"

@class NSDictionary, NSSet;

@interface SBComposedWallpaperSpecificationLayer : NSObject
{
}

@property(readonly, copy, nonatomic) NSDictionary *propertyListRepresentation;
@property(readonly, copy, nonatomic) NSSet *referencedAssetURLs;
- (id)initWithLayerDictionary:(id)arg1;

@end

