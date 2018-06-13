
@protocol SPUISearchPluginWrapperInterface
@property(nonatomic) _Bool needsFakeStatusBarForModalPresentation;
@property(nonatomic, getter=isDisplayLayoutElementActive) _Bool displayLayoutElementActive;
@property(nonatomic) _Bool needsStatusBarLayoutLayer;
- (void)searchViewControllerWillTriggerLaunch;
- (void)requestGestureResetAnimated:(_Bool)arg1;
- (double)_accessibilityActivationAnimationStartDelay;
@end

