
#import "_SBFVibrantTableViewHeaderFooterView.h"

#import "SBModalLayoutCaching.h"

@class NSString, SBNotificationsClearButton, UIImageView, UILabel;

@interface SBNotificationCenterHeaderView : _SBFVibrantTableViewHeaderFooterView <SBModalLayoutCaching>
{
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
    SBNotificationsClearButton *_clearButton;
    _Bool _showingClear;
    long long _layoutMode;
    id _clearButtonVisibleAction;
    id _clearButtonFinalAction;
}

+ (double)_titleBaseline;
+ (id)titleFontForLayoutMode:(long long)arg1;
- (void)buttonAction:(id)arg1;
- (void)layoutSubviews;
- (void)resetAnimated:(_Bool)arg1;
- (struct CGRect)_clearButtonFrame;
- (struct CGRect)contentBounds;
- (void)setHasClearButton:(_Bool)arg1;
- (void)_removeClearButton;
- (void)_addClearButton;
- (void)setBackgroundView:(id)arg1;
- (long long)initialGraphicsQuality;
- (id)initWithCoder:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

