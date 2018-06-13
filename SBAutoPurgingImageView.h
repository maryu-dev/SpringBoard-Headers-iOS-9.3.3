
#import "UIImageView.h"

@interface SBAutoPurgingImageView : UIImageView
{
    id _block;
}

- (void)setImage:(id)arg1;
- (void)didMoveToWindow;
- (id)initWithImageGenerationBlock:(id)arg1;

@end

