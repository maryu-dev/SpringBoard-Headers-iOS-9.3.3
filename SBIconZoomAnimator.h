
#import "SBIconAnimator.h"

#import "SBIconIndexNodeObserver.h"

@class NSMapTable, NSSet, NSString, SBIconListModel, SBIconListView, SBIconZoomSettings;

@interface SBIconZoomAnimator : SBIconAnimator <SBIconIndexNodeObserver>
{
    NSMapTable *_listIconToViewMap;
    NSMapTable *_dockIconToViewMap;
    NSSet *_criticalIconNodeIdentifiers;
    SBIconListModel *_iconListModel;
    SBIconListView *_iconListView;
    SBIconListView *_dockListView;
}

- (void)_invalidateAnimationForSignificantIconModelChangesForReason:(id)arg1;
- (void)_iconModelDidReload;
- (void)_iconModelDidRelayout;
- (void)_clearObservers;
- (void)_setDockListView:(id)arg1;
- (void)_setIconListView:(id)arg1;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(id)arg3;
- (void)_applyLabelAlphaFraction:(double)arg1;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_prepareAnimation;
- (void)_cleanupZoom;
- (void)cleanupZoom;
- (unsigned long long)dockIconCount;
- (unsigned long long)listIconCount;
- (void)enumerateIconsAndIconViewsWithHandler:(id)arg1;
- (id)iconViewForIcon:(id)arg1;
- (void)dealloc;
- (id)initWithFolderController:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

