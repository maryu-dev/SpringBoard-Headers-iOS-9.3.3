
#import "SBSnippetSectionInfo.h"

@class UIImage;

@interface SBChildSectionInfo : SBSnippetSectionInfo
{
    UIImage *_settingsIcon;
}

+ (id)sectionInfoWithDataSource:(id)arg1;
- (void)setSettingsIcon:(id)arg1;
- (id)settingsIcon;

@end

