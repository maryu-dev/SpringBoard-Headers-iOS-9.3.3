
@class NSURL, NSUUID;

@protocol _NCWidgetViewController_Host_IPC
- (void)__closeTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(NSUUID *)arg2;
- (void)__requestLaunchOfURL:(NSURL *)arg1;
- (void)__requestPreferredViewHeight:(double)arg1 usingAutolayout:(_Bool)arg2 requestIdentifier:(NSUUID *)arg3;
@end

