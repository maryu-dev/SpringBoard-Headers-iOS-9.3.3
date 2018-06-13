
#import "NSObject.h"

@class BBSectionIcon, BBSectionInfo, NSData, NSString;

@protocol BBSectionIdentity <NSObject>
- (NSString *)sectionIdentifier;

@optional
- (NSString *)parentSectionIdentifier;
- (NSData *)sectionIconData;
- (BBSectionIcon *)sectionIcon;
- (NSString *)sectionDisplayName;
- (BBSectionInfo *)defaultSectionInfo;
- (NSString *)universalSectionIdentifier;
@end

