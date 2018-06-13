
#import "UIStatusBar.h"

@class NSString;

@interface SBFakeStatusBarView : UIStatusBar
{
    NSString *_cacheKey;
}

- (void)setOverrideBreadcrumbTitle:(id)arg1 secondaryTitle:(id)arg2;
- (void)setSnapshotOverridesWithTimeEnabled:(_Bool)arg1;

@end

