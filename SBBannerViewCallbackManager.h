
#import "NSObject.h"

@class UIView<SBUIBannerView>;

@interface SBBannerViewCallbackManager : NSObject
{
    UIView<SBUIBannerView> *_view;
    id <SBUIBannerSource> _source;
    _Bool _sentWillAppear;
    _Bool _sentDidAppear;
    _Bool _sentWillDismiss;
    _Bool _sentDidDismiss;
    int _dismissReason;
}

- (void)matchPreviousCallbacks:(id)arg1;
- (_Bool)hasSentAnyCallbacks;
- (void)noteDidDismissWithReason:(int)arg1;
- (void)noteWillDismissWithReason:(int)arg1;
- (void)noteDidAppear;
- (void)noteWillAppear;
- (void)dealloc;
- (id)init;
- (id)initWithBannerView:(id)arg1;

@end

