
#import "NSObject.h"

#import "SBUIBannerSource.h"
#import "SBUIBannerTargetManagerObserver.h"

@class NSMutableArray, NSString;

@interface SBStarkBannerSource : NSObject <SBUIBannerSource, SBUIBannerTargetManagerObserver>
{
    id <SBStarkSessionConfiguring> _configuration;
    void *_allowedTargetIdentifier;
    id <SBUIBannerTarget> _target;
    NSMutableArray *_enqueuedItems;
}

- (void)bannerTargetManager:(id)arg1 didRemoveTarget:(id)arg2;
- (void)bannerTargetManager:(id)arg1 didAddTarget:(id)arg2;
- (id)newBannerViewForContext:(id)arg1;
- (id)dequeueNextBannerItemForTarget:(id)arg1;
- (id)peekNextBannerItemForTarget:(id)arg1;
- (unsigned long long)enumerateAllItemsMatchingContext:(id)arg1 withBlock:(id)arg2;
- (void)removeEnqueuedItemsAtIndexes:(id)arg1;
- (void)dismissCurrentItemFromTarget;
- (void)enqueueItem:(id)arg1;
- (id)indexesOfEnqueuedItemsMatchingContext:(id)arg1;
- (id)currentItemFromTarget;
- (void)dealloc;
- (id)init;
- (id)initWithConfiguration:(id)arg1 allowedTargetIdentifier:(void *)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

