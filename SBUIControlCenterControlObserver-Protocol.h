
#import "NSObject.h"

@protocol SBUIControlCenterControlObserver <NSObject>

@optional
- (void)controlConfigurationDidChangeForState:(long long)arg1;
- (void)controlAppearanceDidChangeForState:(long long)arg1;
@end

