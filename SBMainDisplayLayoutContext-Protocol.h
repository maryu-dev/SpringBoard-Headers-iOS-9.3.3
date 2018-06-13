
#import "SBLayoutContext.h"

@protocol SBMainDisplayLayoutContext <SBLayoutContext>
@property(readonly, nonatomic) long long externallyManagedSideAppWidth;
@property(readonly, nonatomic) long long externallyManagedSideAppPresentationStyle;
@property(readonly, nonatomic) long long sideAppWidth;
@property(readonly, nonatomic) long long sideAppPresentationStyle;
- (_Bool)includesStatusBarForLayoutRole:(long long)arg1;
- (long long)wallpaperModeForLayoutRole:(long long)arg1;
- (long long)wallpaperMode;
@end

