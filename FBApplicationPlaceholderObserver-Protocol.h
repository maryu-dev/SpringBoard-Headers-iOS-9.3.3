
#import "NSObject.h"

@class FBApplicationPlaceholder;

@protocol FBApplicationPlaceholderObserver <NSObject>

@optional
- (void)placeholderDidChangeSignificantly:(FBApplicationPlaceholder *)arg1;
- (void)placeholderInstallPhaseDidChange:(FBApplicationPlaceholder *)arg1;
- (void)placeholderInstallStateDidChange:(FBApplicationPlaceholder *)arg1;
- (void)placeholderPausabilityDidChange:(FBApplicationPlaceholder *)arg1;
- (void)placeholderCancellabilityDidChange:(FBApplicationPlaceholder *)arg1;
- (void)placeholderPercentCompleteDidChange:(FBApplicationPlaceholder *)arg1;
@end

