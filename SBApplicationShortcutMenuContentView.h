
#import "UIView.h"

@class NSMutableArray, SBApplicationShortcutMenuBackgroundView, UIImageView, UILongPressGestureRecognizer, _UIAssetManager;

@interface SBApplicationShortcutMenuContentView : UIView
{
    SBApplicationShortcutMenuBackgroundView *_backgroundView;
    UIView *_rowAndMaskContainer;
    UIView *_rowContainer;
    UIView *_dividerContainer;
    UIImageView *_maskView;
    NSMutableArray *_itemViews;
    NSMutableArray *_dividers;
    UILongPressGestureRecognizer *_pressGestureRecognizer;
    id <SBApplicationShortcutMenuContentViewDelegate> _delegate;
    long long _orientation;
    double _cornerRadius;
    unsigned long long _maskPresentSlideDirection;
    _UIAssetManager *_assetManager;
    struct CGRect _initialFrame;
    struct CGRect _containerBounds;
    struct CGRect _maxConcentricFrame;
    struct CGRect _maxMenuFrame;
    struct CGRect _dismissStartingFrame;
    long long _menuPosition;
}

+ (double)defaultCornerRadius;
- (struct CGRect)_maxMenuFrameInsideContainerBounds:(struct CGRect)arg1 iconFrame:(struct CGRect)arg2 menuPosition:(long long)arg3 menuItemCount:(unsigned long long)arg4;
- (struct CGRect)_maxMenuFrameForIconFrame:(struct CGRect)arg1 menuPosition:(long long)arg2 menuItemCount:(unsigned long long)arg3;
- (void)_enumerateAllowedMenuPositionsInPreferredOrderUsingBlock:(id)arg1;
- (_Bool)isEmpty;
- (void)_handlePress:(id)arg1;
- (void)updateSelectionFromPressGestureRecognizer:(id)arg1;
- (void)_updateRowContainerTransformForFraction:(double)arg1 menuContentFrame:(struct CGRect)arg2;
- (void)_updateMaskForFraction:(double)arg1 exponentialFraction:(double)arg2 menuContentFrame:(struct CGRect)arg3;
- (void)_dismissForFraction:(double)arg1;
- (void)_prepareForDismiss;
- (void)_presentForFraction:(double)arg1;
- (void)_peekForFraction:(double)arg1;
- (double)peekScaleAmount;
- (void)updateFraction:(double)arg1 forTransitionType:(unsigned long long)arg2;
- (void)prepareForTransitionType:(unsigned long long)arg1;
- (double)_iconMenuMargin;
- (double)_rowHeight;
- (double)_menuWidth;
- (void)_configureForMenuPosition:(long long)arg1 menuItemCount:(long long)arg2;
- (long long)_preferredMenuPositionWithContainerBounds:(struct CGRect)arg1 menuItemCount:(long long)arg2;
- (void)_populateRowsWithShortcutItems:(id)arg1 application:(id)arg2;
- (void)layoutSubviews;
- (id)initWithInitialFrame:(struct CGRect)arg1 containerBounds:(struct CGRect)arg2 orientation:(long long)arg3 shortcutItems:(id)arg4 application:(id)arg5;

@end

