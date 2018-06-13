
#import "NSObject.h"

@class UABestAppSuggestion;

@protocol UABestAppSuggestionManagerDelegate <NSObject>

@optional
- (void)connectionInterrupted;
- (void)bestAppSuggestionChanged:(UABestAppSuggestion *)arg1;
- (void)bestAppSuggestionMayHaveChanged;
@end

