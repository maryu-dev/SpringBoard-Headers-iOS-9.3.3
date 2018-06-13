
#import "NSObject.h"

@class NSArray, NSSet, NSString, SBApplication;

@protocol SBApplicationRestrictionDataSource <NSObject>
- (NSSet *)bundleIdentifiersWithVisibilityOverrideHidden;
- (void)noteNeedsToRefreshVisiblityOverrides;
- (NSArray *)allBundleIdentifiers;
- (NSArray *)allApplications;
- (SBApplication *)applicationWithBundleIdentifier:(NSString *)arg1;
@end

