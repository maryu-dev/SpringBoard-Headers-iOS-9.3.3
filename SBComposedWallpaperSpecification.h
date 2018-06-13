
#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSSet;

@interface SBComposedWallpaperSpecification : NSObject <NSCopying>
{
    NSArray *_layers;
}

+ (id)specificationWithLayers:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) id <NSCopying> propertyListRepresentation;
@property(readonly, copy, nonatomic) NSSet *allAssetURLs;
- (id)init;
- (id)initWithLayers:(id)arg1;
- (id)initWithPropertyList:(id)arg1;
- (id)initWithPropertyListData:(id)arg1;

@end

