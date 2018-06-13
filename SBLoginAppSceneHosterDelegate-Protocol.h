
@class NSError, NSString;

@protocol SBLoginAppSceneHosterDelegate
- (void)sceneUpdatedRotationMode:(long long)arg1;
- (void)sceneUpdatedStatusBarUserName:(NSString *)arg1;
- (void)sceneUpdatedIdleTimerMode:(long long)arg1;
- (void)sceneDeactivatedWithError:(NSError *)arg1;
@end

