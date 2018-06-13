
#import "UIView.h"

#import "SBUIBannerView.h"
#import "SBVibrantBannerView.h"

@class NSString, SBBannerViewCallbackManager, SBNotificationSeparatorView, SBUIBannerContext, UIImage, UIImageView, UIView<SBUIBannerView>, _UIBackdropView;

@interface SBBannerContextView : UIView <SBUIBannerView, SBVibrantBannerView>
{
    _UIBackdropView *_backdropView;
    UIImageView *_backgroundImageView;
    UIView *_contentContainerView;
    UIView<SBUIBannerView> *_contentView;
    UIView *_accessoryView;
    UIView *_pullDownView;
    UIView *_pullDownContainerView;
    UIView *_secondaryContentView;
    SBNotificationSeparatorView *_separatorView;
    UIView *_highlightView;
    SBUIBannerContext *_context;
    SBBannerViewCallbackManager *_callbacks;
    SBBannerViewCallbackManager *_wrapperCallbacks;
    _Bool _isDismissing;
    struct CGSize _grabberSize;
    UIView *_grabberView;
    _Bool _hidesGrabberOnPullDown;
    double _minimumHeight;
    struct {
        unsigned int providesDefaultElementColors:1;
        unsigned int supportsElementColors:1;
    } _contentViewFlags;
    _Bool _grabberVisible;
    _Bool _separatorVisible;
    _Bool _highlighted;
    double _maximumHeight;
    double _pullDownViewHeight;
    double _pullDownBottomOverhangHeight;
}

+ (id)defaultColorForElement:(long long)arg1;
+ (id)_defaultButtonTextColor;
+ (id)_defaultButtonColor;
+ (id)_defaultGrabberColor;
- (double)_grabberAlpha;
- (id)_newGrabberView:(_Bool)arg1;
- (void)_setGrabberColor:(id)arg1;
- (id)_grabberColor;
- (_Bool)shouldBorrowScreen;
- (id)bannerContext;
- (struct CGSize)_contentSizeThatFits:(struct CGSize)arg1;
- (struct CGRect)_centeredBoundsForRect:(struct CGRect)arg1;
- (struct CGRect)_centeredBounds;
- (void)_layoutGrabber;
- (void)_layoutPullDownContainerView;
- (void)_layoutAccessoryView;
- (void)_updateHighlightView;
- (void)_updateContentAlpha;
- (void)_layoutSeparatorView;
- (void)_layoutContentView;
- (void)_layoutContentContainerView;
- (void)_layoutBackdropView;
- (void)_layoutBackgroundView;
- (void)layoutSubviews;
- (void)replacePullDownViewWithView:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_canPullDown;
- (double)_pullDownContentAlpha;
- (void)setColor:(id)arg1 forElement:(long long)arg2;
- (id)colorForElement:(long long)arg1;
- (id)_vibrantContentView;
- (id)defaultColorForElement:(long long)arg1;
- (void)noteDidDismissWithReason:(int)arg1;
- (void)noteWillDismissWithReason:(int)arg1;
- (void)noteDidAppear;
- (void)noteWillAppear;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBannerContext:(id)arg1 withReplaceReason:(int)arg2;
- (double)minimumHeight;
- (double)percentPulledDown;
- (_Bool)isPulledDown;
- (id)_lazyHighlightView;
@property(retain, nonatomic) UIImage *backgroundImage;
@property(readonly, nonatomic) _UIBackdropView *backdrop;
- (id)initWithFrame:(struct CGRect)arg1 backdropStyle:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

