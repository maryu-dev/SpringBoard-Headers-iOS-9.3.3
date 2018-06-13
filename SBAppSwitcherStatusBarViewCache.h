
#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, UIView, UIWindow;

@interface SBAppSwitcherStatusBarViewCache : NSObject
{
    NSMutableDictionary *_cachedStatusBarQueues;
    NSMutableDictionary *_statusBarsForSnapshots;
    NSMutableSet *_homePageCellStatusBars;
    UIView *_hiddenStatusBarCacheView;
    UIView *_statusBarSnapshottingView;
    _Bool _vendingSnapshots;
    UIWindow *_appSwitcherWindow;
}

- (id)barSnapshotForStyleRequest:(id)arg1 orientation:(long long)arg2;
- (id)barForStyleRequest:(id)arg1 orientation:(long long)arg2;
- (void)recycleBar:(id)arg1;
- (id)_generationBlockForStyleRequest:(id)arg1 orientation:(long long)arg2;
- (id)_cacheKeyForStyleRequest:(id)arg1 orientation:(long long)arg2;
- (void)_prepareForSnapshotOfStyleRequest:(id)arg1 orientation:(long long)arg2;
- (void)preheatStatusBarCache;
- (void)recycleBarForHomePageCell:(id)arg1;
- (id)fakeStatusBarForHomePageCell;
@property(nonatomic, getter=isVendingSnapshots) _Bool vendingSnapshots;
- (void)dealloc;
- (id)init;

@end

