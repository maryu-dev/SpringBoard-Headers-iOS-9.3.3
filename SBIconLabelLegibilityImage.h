
#import "UIImage.h"

#import "SBCountedMapValue.h"

@class NSString, SBIconLabelImageParameters;

@interface SBIconLabelLegibilityImage : UIImage <SBCountedMapValue>
{
    SBIconLabelImageParameters *_parameters;
}

+ (void)checkinLegibilityImage:(id)arg1;
+ (id)checkoutLegibilityImageWithLabelImage:(id)arg1 parameters:(id)arg2;
+ (struct CGRect)_legibilityImageRectForLabelImage:(id)arg1 style:(long long)arg2;
+ (double)_strengthForLegibilityStyle:(long long)arg1;
+ (id)_legibilityImageForIconLabelImage:(id)arg1 parameters:(id)arg2;
+ (id)_legibilityImagePool;
+ (id)_legibilityImageCountedMap;
+ (struct CGSize)_maxLegibilityImageSizeForLabelSize:(struct CGSize)arg1;
- (_Bool)isIconLabelLegibilityImage;
- (id)countedMapKey;
- (id)_initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3 parameters:(id)arg4;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

