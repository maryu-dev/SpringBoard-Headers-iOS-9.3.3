
#import "NSObject.h"

@class BSUIAnimationFactory, SBAlert;

@protocol SBAlertDelegate <NSObject>
- (unsigned long long)defaultSupportedInterfaceOrientationsForAlert:(SBAlert *)arg1;
- (long long)defaultInterfaceOrientationForPresentationOfAlert:(SBAlert *)arg1;
- (_Bool)defaultShouldAutorotateForAlert:(SBAlert *)arg1;
- (void)alertWantsToForceWallpaperTunnelUpdate:(SBAlert *)arg1;
- (void)alertIsReadyToBeRemovedFromView:(SBAlert *)arg1;
- (void)alertIsReadyToBeDeactivated:(SBAlert *)arg1;
- (void)alertWillDismiss:(SBAlert *)arg1;
- (void)alertDidChangeOccluding:(SBAlert *)arg1;
- (void)alertDidChangeOrientationEventsEnabled:(SBAlert *)arg1;
- (void)alert:(SBAlert *)arg1 didChangeStatusBarVisibility:(_Bool)arg2;
- (void)alert:(SBAlert *)arg1 requestsBackgroundStyleChangeWithAnimationFactory:(BSUIAnimationFactory *)arg2;
@end

