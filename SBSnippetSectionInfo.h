
#import "SBNotificationCenterSectionInfo.h"

@class NCSnippetDataSource;

@interface SBSnippetSectionInfo : SBNotificationCenterSectionInfo
{
}

+ (id)sectionInfoWithDataSource:(id)arg1;
- (id)identifier;
@property(readonly, nonatomic) NCSnippetDataSource *representedDataSource;

@end

