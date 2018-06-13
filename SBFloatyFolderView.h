
#import "SBFolderView.h"

#import "UIGestureRecognizerDelegate.h"
#import "_UISettingsKeyObserver.h"

@class NSMapTable, NSMutableArray, NSString, SBFloatyFolderBackgroundClipView, SBFolderSettings, UILongPressGestureRecognizer, UIPinchGestureRecognizer, UITapGestureRecognizer;

@interface SBFloatyFolderView : SBFolderView <UIGestureRecognizerDelegate, _UISettingsKeyObserver>
{
    SBFloatyFolderBackgroundClipView *_scrollClipView;
    NSMutableArray *_pageBackgroundViews;
    NSMapTable *_pageBackgroundViewsForIconListViews;
    unsigned long long _scalingViewPageIndex;
    UITapGestureRecognizer *_tapGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    SBFolderSettings *_folderSettings;
    struct CGPoint _preReachabilityTitleOrigin;
    struct CGPoint _reachabilityTitleOrigin;
    struct CGPoint _preReachabilityScaleOrigin;
    struct CGPoint _reachabilityScaleOrigin;
    double _reachabilityYOffset;
    _Bool _layingOutForReachability;
    _Bool _displayingMultipleIconLists;
    _Bool _animatingRotation;
}

+ (unsigned long long)_countOfAdditionalPagesToKeepVisibleInOneDirection;
+ (Class)_scrollViewClass;
- (void)_handleReachabilityDectivatedAnimate:(_Bool)arg1 completion:(id)arg2;
- (void)_handleReachabilityActivatedAnimate:(_Bool)arg1 completion:(id)arg2;
- (double)reachabilityYOffset;
- (void)handleReachabilityActivated:(_Bool)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)_tapToCloseGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_handleLongPressGesture:(id)arg1;
- (void)_handlePinchGesture:(id)arg1;
- (void)_handleOutsideTap:(id)arg1;
- (void)_configureGestures;
- (void)_convertToSingleIconListAnimated:(_Bool)arg1;
- (void)_convertToMultipleIconListsAnimated:(_Bool)arg1;
- (void)fadeContentForMinificationFraction:(double)arg1;
- (void)fadeContentForMagnificationFraction:(double)arg1;
- (void)returnScalingView;
- (id)borrowScalingView;
- (void)didAnimate;
- (void)willAnimateWithSettings:(id)arg1;
- (double)_titleVerticalOffsetForOrientation:(long long)arg1;
- (double)_titleFontSize;
- (_Bool)_showsTitle;
- (id)iconListViewAtPoint:(struct CGPoint)arg1;
- (_Bool)locationCountsAsInsideFolder:(struct CGPoint)arg1;
- (double)_offsetToCenterPageControlInSpaceForPageControl;
- (struct CGRect)_frameForScalingView;
- (void)_updateScalingViewLocation;
- (void)_currentPageIndexDidChange;
- (void)_updateIconListContainment:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct CGRect)_iconListFrameForPageRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2;
- (struct CGRect)_pageBackgroundFrameForPageRect:(struct CGRect)arg1;
- (void)_layoutSubviews;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_orientationDidChange:(long long)arg1;
- (_Bool)_shouldConvertToMultipleIconListsInLandscapeOrientation;
- (unsigned long long)_countOfAdditionalPagesToKeepAnimatingInOneDirection;
- (void)_removeIconListView:(id)arg1;
- (void)_addIconListView:(id)arg1;
- (id)_newPageBackgroundView;
- (void)setLegibilitySettings:(id)arg1;
- (struct CGPoint)visibleFolderRelativeImageCenterForIcon:(id)arg1;
- (void)setBackgroundAlpha:(double)arg1;
- (void)dealloc;
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 context:(id)arg4;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

