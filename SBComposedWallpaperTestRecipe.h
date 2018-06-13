
#import "NSObject.h"

#import "SBTestRecipe.h"

@class NSArray, NSEnumerator, NSString;

@interface SBComposedWallpaperTestRecipe : NSObject <SBTestRecipe>
{
    NSArray *_wallpaperSpecifications;
    NSEnumerator *_wallpaperSpecificationEnumerator;
}

+ (id)title;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

