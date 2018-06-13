
#import "NSObject.h"

@class SBSearchViewController;

@interface SBSearchViewPresentationManager : NSObject
{
    long long _searchViewPresentationState;
    double _searchViewPreviousProgress;
    SBSearchViewController *_searchViewController;
}

- (void)updateToState:(long long)arg1 animated:(_Bool)arg2;
- (void)_setState:(long long)arg1;
- (void)updateStateWithProgress:(double)arg1 fromBreadcrumb:(_Bool)arg2 animated:(_Bool)arg3;
- (id)initWithSearchViewController:(id)arg1;

@end

