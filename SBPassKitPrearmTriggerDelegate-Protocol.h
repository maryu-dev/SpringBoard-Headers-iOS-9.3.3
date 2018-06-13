
@class SBPassKitPrearmTrigger;

@protocol SBPassKitPrearmTriggerDelegate
- (void)triggerDidTimeoutForDoubleTap:(SBPassKitPrearmTrigger *)arg1;
- (void)triggerDidTimeoutForFingerOn:(SBPassKitPrearmTrigger *)arg1;
- (void)triggerDidFire:(SBPassKitPrearmTrigger *)arg1;
@end

