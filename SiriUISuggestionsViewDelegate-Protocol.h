
#import "NSObject.h"

@class NSArray, SiriUISuggestionsView, UIView;

@protocol SiriUISuggestionsViewDelegate <NSObject>

@optional
- (void)suggestionsView:(SiriUISuggestionsView *)arg1 didHideVibrantView:(UIView *)arg2;
- (double)statusViewHeightForSuggestionsView:(SiriUISuggestionsView *)arg1;
- (double)statusBarHeightForSuggestionsView:(SiriUISuggestionsView *)arg1;
- (void)didShowSuggestionsForSuggestionsView:(SiriUISuggestionsView *)arg1;
- (NSArray *)nextSuggestionsForSuggestionsView:(SiriUISuggestionsView *)arg1 maxSuggestions:(unsigned long long)arg2;
- (void)getNextSuggestionsForSuggestionsView:(SiriUISuggestionsView *)arg1 maxSuggestions:(unsigned long long)arg2 completion:(void (^)(NSArray *))arg3;
@end

