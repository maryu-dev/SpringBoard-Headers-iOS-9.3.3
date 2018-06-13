
#import "SBHUDView.h"

@interface SBRotationLockHUDView : SBHUDView
{
    _Bool _locked;
    _Bool locked;
}

- (id)init;
- (void)_updateLockedImage;

@end

