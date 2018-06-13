
@class NSString, NSUUID;

@protocol _NCWidgetViewController_Service_IPC
- (void)__openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(NSUUID *)arg2;
- (void)__performUpdateWithReplyHandler:(void (^)(unsigned long long, _Bool))arg1;
- (void)__requestEncodedLayerTreeWithReplyHandler:(void (^)(NSData *, NSError *))arg1;
- (void)__performOutstandingCompletionForRequestWithIdentifier:(NSUUID *)arg1;
- (void)__performOutstandingAnimationsForRequestWithIdentifier:(NSUUID *)arg1;
- (void)__viewWillTransitionToSize:(struct CGSize)arg1 requestIdentifier:(NSUUID *)arg2;
- (void)__setWidgetIdentifier:(NSString *)arg1;
@end

