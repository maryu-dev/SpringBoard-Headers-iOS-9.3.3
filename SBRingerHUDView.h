
#import "SBHUDView.h"

@interface SBRingerHUDView : SBHUDView
{
    _Bool _silent;
}

- (id)init;
- (void)_updateSilentImage;

@end

