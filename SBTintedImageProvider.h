
#import "NSObject.h"

@class CALayer, UIColor, UIImage;

@interface SBTintedImageProvider : NSObject
{
    UIImage *_tintedImage;
    CALayer *_tintedLayer;
    _Bool _wantsTintedLayer;
    UIImage *_originalImage;
    UIColor *_tintColor;
}

- (void)_createOrUpdateTintedImageOrLayer;
@property(readonly, nonatomic) __weak CALayer *tintedLayer;
@property(readonly, nonatomic) __weak UIImage *tintedImage;

@end

