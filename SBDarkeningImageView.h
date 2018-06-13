
#import "UIImageView.h"

@class UIImage;

@interface SBDarkeningImageView : UIImageView
{
    UIImage *_baseImage;
    double _brightness;
}

- (id)description;
- (void)setImage:(id)arg1 brightness:(double)arg2;
@property(nonatomic) double brightness;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

