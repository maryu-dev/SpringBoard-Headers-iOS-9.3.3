
#import "NSObject.h"

@class SBAlertWindow;

@protocol SBAlertWindowDelegate <NSObject>
- (unsigned long long)defaultSupportedInterfaceOrientationsForAlertWindow:(SBAlertWindow *)arg1;
- (long long)defaultInterfaceOrientationForPresentationOfAlertWindow:(SBAlertWindow *)arg1;
- (_Bool)defaultShouldAutorotateForAlertWindow:(SBAlertWindow *)arg1;
@end

