
#import "SBUIEmergencyCallHostViewController.h"

@interface SBLockScreenEmergencyCallViewController : SBUIEmergencyCallHostViewController
{
}

- (long long)_wallpaperStyleFromUIBackgroundStyle:(long long)arg1;
- (id)tintColorForBackgroundStyle:(long long)arg1 outBlurRadius:(double *)arg2;
- (void)setBackgroundStyle:(long long)arg1;
- (void)dismiss;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

