
#import "NSObject.h"

@class UIView, _SBFVibrantSettings;

@protocol _SBFVibrantView <NSObject>
@property(retain, nonatomic) _SBFVibrantSettings *vibrantSettings;
- (void)setBackgroundView:(UIView *)arg1;
@end

