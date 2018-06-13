
#import "UIActivityContinuationAction.h"

@class NSDictionary, SBBestAppSuggestion;

@interface SBActivityContinuationAction : UIActivityContinuationAction
{
    NSDictionary *_settings;
    long long launchSource;
    SBBestAppSuggestion *_appSuggestion;
}

@property(readonly, nonatomic) __weak NSDictionary *settings;
- (id)initWithIdentifier:(id)arg1 activityTypeIdentifier:(id)arg2 appSuggestion:(id)arg3 launchSource:(long long)arg4;

@end

