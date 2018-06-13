
#import "SBAlert.h"

@interface SBSIMLockEntryAlert : SBAlert
{
    long long _status;
}

- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (_Bool)_forcesPortraitOrientation;
- (void)deactivate;
- (void)activate;
- (long long)status;
- (id)lockEntryView;
- (_Bool)hasTranslucentBackground;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;

@end

