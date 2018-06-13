
#import "NSObject.h"

@class _UILegibilitySettings;

@protocol SBFLegibilitySettingsProvider <NSObject>
@property(nonatomic) __weak id <SBFLegibilitySettingsProviderDelegate> delegate;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@end

