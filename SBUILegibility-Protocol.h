
#import "NSObject.h"

@class _UILegibilitySettings;

@protocol SBUILegibility <NSObject>
- (void)updateForChangedSettings:(_UILegibilitySettings *)arg1;
- (void)setStrength:(double)arg1;
@end

