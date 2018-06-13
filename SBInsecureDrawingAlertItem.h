
#import "SBAlertItem.h"

@class NSString;

@interface SBInsecureDrawingAlertItem : SBAlertItem
{
    NSString *_processName;
}

- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (_Bool)ignoreIfAlreadyDisplaying;
- (_Bool)dismissOnLock;
- (_Bool)shouldShowInLockScreen;

@end

