
#import "UITableViewController.h"

#import "SBAppViewHostRequester.h"
#import "SBMainAppSwitcherContentViewControlling.h"

@class NSArray, NSMutableArray, NSString, SBAppView, SBBestAppSuggestion, SBDisplayItem, SBMainDisplayLayoutState, _UILegibilitySettings;

@interface SBMinimumViableSwitcherTableViewController : UITableViewController <SBAppViewHostRequester, SBMainAppSwitcherContentViewControlling>
{
    NSMutableArray *_displayItems;
    id <SBMainAppSwitcherContentViewControllerDelegate> _delegate;
    SBAppView *_temporaryAppView;
    SBAppView *_temporarySideAppView;
    _UILegibilitySettings *_legibilitySettings;
    SBDisplayItem *_returnToDisplayItem;
    SBDisplayItem *_initialDisplayItem;
    SBDisplayItem *_returnToSideDisplayItem;
    SBMainDisplayLayoutState *_initialLayoutState;
    SBBestAppSuggestion *_bestAppSuggestion;
    _Bool _invalidated;
}

+ (double)snapshotScale;
- (long long)appViewRequesterPriority:(id)arg1;
- (id)appViewRequesterIdentifier:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (void)_unhostSideAppToStopHidingThem;
- (void)_hostSideAppToHideThem;
- (void)animateDismissalToDisplayItem:(id)arg1 forTransitionRequest:(id)arg2 withCompletion:(id)arg3;
- (void)animatePresentationForTransitionRequest:(id)arg1 withCompletion:(id)arg2;
- (void)endTransitionWithSuccess:(_Bool)arg1 completion:(id)arg2;
- (id)nextDisplayItem;
- (void)setTransitionParameters:(id)arg1;
- (void)endInteractionWithCommitment:(_Bool)arg1;
- (void)startInteractiveTransition:(_Bool)arg1 presenting:(_Bool)arg2 withRequest:(id)arg3;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)replaceDisplayItem:(id)arg1 withDisplayItem:(id)arg2 completion:(id)arg3;
- (void)removeDisplayItem:(id)arg1 updateScrollPosition:(_Bool)arg2 forReason:(long long)arg3 completion:(id)arg4;
- (void)insertDisplayItem:(id)arg1 atIndex:(unsigned long long)arg2 updateScrollPosition:(_Bool)arg3 completion:(id)arg4;
- (void)invalidate;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

