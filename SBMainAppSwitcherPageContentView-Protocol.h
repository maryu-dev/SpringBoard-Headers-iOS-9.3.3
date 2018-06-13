
#import "SBAppSwitcherPageContentView.h"

@protocol SBMainAppSwitcherPageContentView <SBAppSwitcherPageContentView>
- (long long)orientation;
- (void)setOrientation:(long long)arg1;

@optional
- (void)unsimplifyAfterMotion;
- (void)simplifyForMotion;
@end

