
#import "SBBaseSoftwareUpdateAlertItem.h"

@class NSError;

@interface SBSoftwareUpdateDownloadFailedAlertItem : SBBaseSoftwareUpdateAlertItem
{
    NSError *_error;
}

- (_Bool)allowInSetup;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;

@end

