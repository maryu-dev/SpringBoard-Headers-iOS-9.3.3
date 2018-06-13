
#import "NSObject.h"

#import "SBStatusBarStateAggregatorPosting.h"
#import "UIStatusBarStateProvider.h"

@class NSHashTable, NSMutableArray, NSString, SBStatusBarStateAggregator;

@interface SBStatusBarStateProvider : NSObject <SBStatusBarStateAggregatorPosting, UIStatusBarStateProvider>
{
    SBStatusBarStateAggregator *_stateAggregator;
    NSHashTable *_stateObservers;
    id _aggregatorData;
    int _aggregatorActions;
    id _lastPost;
    unsigned long long _coalescentBlockDepth;
    _Bool _itemNeedsPost[29];
    _Bool _anyItemNeedsPost;
    _Bool _nonItemDataNeedsPost;
    _Bool _posting;
    NSMutableArray *_stylesWithDetailUpdates;
}

- (void)statusBarStateAggregatorDidFinishPost:(id)arg1 withData:(const id *)arg2 actions:(int)arg3;
- (void)statusBarStateAggregator:(id)arg1 didUpdateNonItemData:(const id *)arg2;
- (void)statusBarStateAggregator:(id)arg1 didVisitItem:(int)arg2 withUpdates:(_Bool)arg3 toData:(const id *)arg4;
- (void)statusBarStateAggregatorDidStartPost:(id)arg1;
- (void)_composePostActionsFromAggregatorActions:(int *)arg1;
- (void)_composePostDataFromAggregatorData:(id *)arg1;
- (_Bool)_shouldPostForUpdatesToNonItemData:(const id *)arg1;
- (_Bool)_shouldPostForVisitedItem:(int)arg1 withUpdates:(_Bool)arg2 toAggregatorData:(const id *)arg3;
- (void)_didChangeDoubleHeightStatusStringForStyle:(long long)arg1;
- (void)updateStatusBarItem:(int)arg1;
- (void)endCoalescentBlock;
- (void)beginCoalescentBlock;
- (void)getStatusBarData:(id *)arg1;
- (void)removeStatusBarStateObserver:(id)arg1;
- (void)addStatusBarStateObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

