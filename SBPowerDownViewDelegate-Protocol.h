
@class UIView<SBPowerDownViewInterface>;

@protocol SBPowerDownViewDelegate
- (void)powerDownViewAnimateOutCompleted:(UIView<SBPowerDownViewInterface> *)arg1;
- (void)powerDownViewRequestPowerDown:(UIView<SBPowerDownViewInterface> *)arg1;
- (void)powerDownViewRequestCancel:(UIView<SBPowerDownViewInterface> *)arg1;
@end

