
#import "UIViewController.h"

#import "SBIconViewDelegate.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, SBCommandTabSettings, SBIconModel, SBIconView, UIImageView, UIView, _UIBackdropView, _UIBackdropViewSettings;

@interface SBCommandTabViewController : UIViewController <SBIconViewDelegate>
{
    NSArray *_switcherDisplayItems;
    unsigned long long _selectedIndex;
    SBIconModel *_iconModel;
    NSMutableArray *_iconViews;
    _UIBackdropViewSettings *_blurSettings;
    _UIBackdropView *_backgroundBackdropView;
    UIView *_blurredBackgroundView;
    UIImageView *_commandTabBackgroundBarMask;
    UIImageView *_selectionSquareView;
    SBIconView *_selectedIconView;
    NSLayoutConstraint *_selectionXLayoutConstraint;
    SBCommandTabSettings *_settings;
    id <SBCommandTabViewControllerDelegate> _delegate;
}

- (void)_handleKeyUIEvent:(id)arg1;
- (void)_handleShiftCommandTab:(id)arg1;
- (void)_handleCommandTab:(id)arg1;
- (void)_layoutAppIcons;
- (void)_moveSelectionSquareToIconAtIndex:(unsigned long long)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)didReceiveMemoryWarning;
- (id)selectedApplicationBundleID;
- (void)previous;
- (void)next;
- (void)showCommandTabBar;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

