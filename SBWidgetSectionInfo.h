
#import "SBNotificationCenterSectionInfo.h"

@class NSString, SBWidgetRowInfo;

@interface SBWidgetSectionInfo : SBNotificationCenterSectionInfo
{
    NSString *_identifier;
    SBWidgetRowInfo *_widgetRowInfo;
}

+ (id)sectionInfoWithIdentifier:(id)arg1;
- (id)description;
- (void)populateReusableView:(id)arg1;
- (Class)reusableViewClass;

@end

