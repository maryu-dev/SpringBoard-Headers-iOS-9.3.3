
#import "SBBBSectionInfo.h"

@class NSDate, NSString;

@interface SBChronologicalNotificationsSectionInfo : SBBBSectionInfo
{
    NSString *_title;
}

+ (id)identifierForSectionInfoWithDate:(id)arg1;
+ (id)_identifierForSectionInfoWithRepresentedDate:(id)arg1;
+ (id)_representedDateForDate:(id)arg1;
+ (id)_titleForDate:(id)arg1;
+ (id)infoWithRepresentedObject:(id)arg1;
- (id)description;
- (void)populateReusableView:(id)arg1;
- (id)identifier;
@property(readonly, copy, nonatomic) NSDate *representedDate;
- (void)invalidateTitle;

@end

