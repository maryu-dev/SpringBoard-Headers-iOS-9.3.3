
#import "UIViewController.h"

#import "SBLayoutElementContainerViewDelegate.h"

@class FBDisplayLayoutElement, FBSDisplay, NSString, SBLayoutElement, SBLayoutState;

@interface SBLayoutElementViewController : UIViewController <SBLayoutElementContainerViewDelegate>
{
    FBSDisplay *_display;
    SBLayoutElement *_layoutElement;
    SBLayoutState *_layoutState;
    id <SBLayoutElementViewControllerDelegate> _delegate;
    FBDisplayLayoutElement *_displayLayoutElement;
}

- (id)layoutStateForLayoutElementContainingView:(id)arg1;
- (_Bool)shouldAllowSwipeInDimmingViewAtStartLocation:(struct CGPoint)arg1 inLayoutElementContainingView:(id)arg2;
- (void)handleReturnActionForLayoutElementContainingView:(id)arg1;
- (void)_updateDisplayLayoutElementToVisible:(_Bool)arg1;
- (id)snapshotView;
- (void)setWantsPinResizeGrabber:(_Bool)arg1;
- (void)didEndTransitionToVisible:(_Bool)arg1;
- (void)willBeginTransitionToVisible:(_Bool)arg1;
- (void)invalidate;
@property(readonly, nonatomic) double preferredLayoutLevel;
- (void)prepareForReuse;
- (_Bool)supportsReuse;
- (void)configureWithEntity:(id)arg1 forElement:(id)arg2 layoutState:(id)arg3;
- (id)view;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithDisplay:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

