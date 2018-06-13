
#import "SBReusableView.h"

@class NSArray, SBIcon;

@protocol SBIconAccessoryView <SBReusableView>
+ (NSArray *)checkoutAccessoryImagesForIcon:(SBIcon *)arg1 location:(int)arg2;
- (void)setAccessoryBrightness:(double)arg1;
- (_Bool)displayingAccessory;
- (struct CGPoint)accessoryOriginForIconBounds:(struct CGRect)arg1;
- (void)configureForIcon:(SBIcon *)arg1 location:(int)arg2 highlighted:(_Bool)arg3;
- (void)configureAnimatedForIcon:(SBIcon *)arg1 location:(int)arg2 highlighted:(_Bool)arg3 withPreparation:(void (^)(void))arg4 animation:(void (^)(void))arg5 completion:(void (^)(_Bool))arg6;
@end

