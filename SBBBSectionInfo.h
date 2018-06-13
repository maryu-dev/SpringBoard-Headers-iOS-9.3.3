
#import "SBNotificationCenterSectionInfo.h"

@class SBBulletinListSection;

@interface SBBBSectionInfo : SBNotificationCenterSectionInfo
{
}

- (_Bool)shouldSuppressBulletinMessageForPrivacy:(id)arg1;
- (void)populateReusableView:(id)arg1;
- (id)identifier;
- (id)listSectionIdentifier;
@property(readonly, nonatomic) SBBulletinListSection *representedListSection;

@end

