
@class NSDictionary, NSString, NSUUID;

@protocol SBUIRemoteAlertServiceInterface

@optional
- (void)setUserInfo:(NSDictionary *)arg1;
- (void)noteActivatedForCustomReason:(NSString *)arg1;
- (void)noteActivatedForActivityContinuationWithIdentifier:(NSUUID *)arg1;
- (void)handleDoubleHeightStatusBarTap;
- (void)handleHeadsetButtonPressed:(_Bool)arg1;
- (void)handleVolumeDownButtonPressed;
- (void)handleVolumeUpButtonPressed;
- (void)handleLockButtonPressed;
- (void)handleHomeButtonPressed;
@end

