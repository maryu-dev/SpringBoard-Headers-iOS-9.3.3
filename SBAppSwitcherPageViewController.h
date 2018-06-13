
#import "UIViewController.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SBAppSwitcherLegacyScrollView, SBDisplayItem, SBStopScrollingGestureRecognizer, UITapGestureRecognizer;

@interface SBAppSwitcherPageViewController : UIViewController <UIScrollViewDelegate>
{
    NSMutableArray *_displayItems;
    NSMutableDictionary *_items;
    _Bool _itemsListIsValid;
    SBAppSwitcherLegacyScrollView *_scrollView;
    _Bool _dragMaster;
    _Bool _preventScroll;
    UITapGestureRecognizer *_tapGesture;
    SBStopScrollingGestureRecognizer *_stopScrollingGesture;
    long long _layoutOrientation;
    id _scrollDoneBlock;
    _Bool _isMoving;
    _Bool _isLayingOutForReachability;
    SBDisplayItem *_displayItemForWhichRemovalIsBeingCancelled;
    NSMutableSet *_scrollViewsToKillWithOnScrollEnd;
    id <SBAppSwitcherScrollingViewDelegate> _delegate;
}

- (void)handleReachabilityModeDeactivated;
- (void)handleReachabilityModeActivated;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_fireAndCleanupScrollCompleteBlockIfNecessary;
- (void)_setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)_enableScrolling;
- (void)_disableScrolling;
- (_Bool)_isItemVisible:(id)arg1 withSidePadding:(double)arg2;
- (void)_updateVisiblePageViews;
- (void)_layout;
- (void)_layoutItemContainer:(id)arg1;
- (void)_generateContentViewForDisplayItemIfNecessary:(id)arg1;
- (struct CGRect)_naturalScrollViewFrame;
- (struct CGPoint)_centerOfIndex:(unsigned long long)arg1;
- (double)_distanceBetweenCenters;
- (void)_handleStopGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)replaceItemAtIndex:(unsigned long long)arg1 withNewItem:(id)arg2 duration:(double)arg3 completion:(id)arg4;
- (void)removeItem:(id)arg1 duration:(double)arg2 updateScrollPosition:(_Bool)arg3 completion:(id)arg4;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 duration:(double)arg3 updateScrollPosition:(_Bool)arg4 completion:(id)arg5;
- (void)cancelPossibleRemovalOfDisplayItem:(id)arg1;
- (id)_createScrollViewForItem;
- (void)reloadInOrientation:(long long)arg1;
- (double)_halfWidth;
- (id)_safeDelegate;
- (void)loadView;
- (double)preferredHeightForOrientation:(long long)arg1;
- (void)switcherWasDismissed:(_Bool)arg1;
- (struct _NSRange)visibleItems;
- (_Bool)isScrolling;
- (_Bool)_isAnyScrollContainerScrolling;
- (id)pageViewForDisplayItem:(id)arg1;
- (unsigned long long)currentPage;
- (void)_setScrollingDoneBlock:(id)arg1;
- (_Bool)isDisplayItemVisible:(id)arg1;
- (unsigned long long)settledIndexForNormalizedOffset:(inout double *)arg1 andXVelocity:(double)arg2;
@property(nonatomic) double normalizedOffset;
- (void)setOffsetToIndex:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (void)setOffsetToIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)cancelScrolling;
- (void)cancelTracking;
- (double)_maxXOffset;
@property(copy, nonatomic) NSArray *displayItems;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

