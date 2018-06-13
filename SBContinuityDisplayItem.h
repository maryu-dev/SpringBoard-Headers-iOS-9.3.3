
#import "SBDisplayItem.h"

@class SBBestAppSuggestion;

@interface SBContinuityDisplayItem : SBDisplayItem
{
    SBBestAppSuggestion *_appSuggestion;
}

- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithType:(struct NSString *)arg1 displayIdentifier:(id)arg2 appSuggestion:(id)arg3;
- (id)initWithType:(id)arg1 displayIdentifier:(id)arg2;

@end

