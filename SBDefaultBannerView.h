
#import "UIView.h"

#import "SBUIBannerView.h"
#import "SBVibrantBannerView.h"

@class NSString, SBDefaultBannerTextView, SBUIBannerContext, UIImageView;

@interface SBDefaultBannerView : UIView <SBUIBannerView, SBVibrantBannerView>
{
    SBUIBannerContext *_context;
    id <SBDefaultBannerViewSource> _viewSource;
    UIImageView *_iconImageView;
    SBDefaultBannerTextView *_textView;
    UIImageView *_attachmentImageView;
    UIView *_secondaryContentView;
}

+ (id)defaultColorForElement:(long long)arg1;
+ (id)_defaultRelevanceDateColor;
- (void)setColor:(id)arg1 forElement:(long long)arg2;
- (id)colorForElement:(long long)arg1;
- (void)_setRelevanceDateColor:(id)arg1;
- (id)_relevanceDateColor;
- (double)_secondaryContentInsetY;
- (double)_textInsetX;
- (double)_iconInsetY;
- (struct CGRect)_secondaryContentFrameForBounds:(struct CGRect)arg1;
- (struct CGRect)_secondaryContentFrame;
- (struct CGRect)_textViewFrameForBounds:(struct CGRect)arg1;
- (struct CGRect)_textViewFrame;
- (struct CGRect)_iconImageViewFrame;
- (struct CGRect)_contentFrame;
- (struct CGRect)_contentFrameForBounds:(struct CGRect)arg1;
- (struct CGRect)_attachmentImageViewFrame;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setPercentPulledDown:(double)arg1;
- (void)setSecondaryContentView:(id)arg1;
- (id)bannerContext;
- (_Bool)_showAttachmentPreview;
- (_Bool)_hasAttachment;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithContext:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

