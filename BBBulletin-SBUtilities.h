
#import "BBBulletin.h"

#import "SBUIQuietModePlayability.h"

@class NSString;

@interface BBBulletin (SBUtilities) <SBUIQuietModePlayability>
- (_Bool)overridesPocketMode;
- (_Bool)overridesQuietMode;
- (_Bool)isCritical;
- (id)sb_defaultTitle;
- (id)sb_applicationDisplayName;
- (id)sectionIconImageWithFormat:(int)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

