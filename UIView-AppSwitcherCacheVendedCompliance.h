
#import "UIView.h"

#import "SBAppSwitcherCacheVended.h"

@class NSString;

@interface UIView (AppSwitcherCacheVendedCompliance) <SBAppSwitcherCacheVended>

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

