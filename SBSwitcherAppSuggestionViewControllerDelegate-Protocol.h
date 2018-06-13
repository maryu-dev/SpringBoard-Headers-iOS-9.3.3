
#import "NSObject.h"

@class SBBestAppSuggestion, SBSwitcherAppSuggestionViewController;

@protocol SBSwitcherAppSuggestionViewControllerDelegate <NSObject>
- (long long)orientationForSuggestionViewController:(SBSwitcherAppSuggestionViewController *)arg1;
- (void)suggestionViewController:(SBSwitcherAppSuggestionViewController *)arg1 activatedSuggestion:(SBBestAppSuggestion *)arg2;
@end

