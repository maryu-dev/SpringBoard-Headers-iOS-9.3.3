
#import "SBSectionInfo.h"

@class SBItemInfoLayoutCache;

@interface SBNotificationCenterSectionInfo : SBSectionInfo
{
    SBItemInfoLayoutCache *_layoutCache;
    id _clearPossibleAction;
    id _clearFinalAction;
}

- (double)heightForReusableViewForNotificationCenterTableViewController:(id)arg1 layoutMode:(long long)arg2 sectionLocation:(long long)arg3;
- (void)invalidateCachedLayoutData;
- (Class)reusableViewClass;

@end

