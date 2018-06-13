
#import "UIAlertView.h"

@interface SBImageAlertView : UIAlertView
{
    _Bool _showingImage;
}

- (_Bool)isShowingImage;
- (void)setImage:(id)arg1;
- (void)layout;

@end

