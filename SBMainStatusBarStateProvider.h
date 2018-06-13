
#import "SBStatusBarStateProvider.h"

#import "UIStatusBarStateObserver.h"

@class NSCountedSet, NSString;

@interface SBMainStatusBarStateProvider : SBStatusBarStateProvider <UIStatusBarStateObserver>
{
    _Bool _overridePercent;
    _Bool _killActivity;
    _Bool _itemIsDisabled[29];
    _Bool _itemWasDisabled[29];
    NSCountedSet *_itemDisabledRequests[29];
    _Bool _timeEnabled;
    _Bool _timeCloaked;
    _Bool _allButBatteryCloaked;
    _Bool _telephonyAndBluetoothCloaked;
}

+ (id)sharedInstance;
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const id *)arg2 withActions:(int)arg3;
- (void)_composePostDataFromAggregatorData:(id *)arg1;
- (_Bool)_shouldPostForVisitedItem:(int)arg1 withUpdates:(_Bool)arg2 toAggregatorData:(const id *)arg3;
- (void)setTelephonyAndBluetoothItemsCloaked:(_Bool)arg1;
- (void)setAllItemsExceptBatteryCloaked:(_Bool)arg1;
- (void)setTimeCloaked:(_Bool)arg1;
- (void)enableTime:(_Bool)arg1 crossfade:(_Bool)arg2 crossfadeDuration:(double)arg3;
- (void)enableTime:(_Bool)arg1;
- (_Bool)isTimeEnabled;
- (void)_updateDisabledItems;
- (void)enableStatusBarItem:(int)arg1 requestor:(id)arg2;
- (void)disableStatusBarItem:(int)arg1 requestor:(id)arg2;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

