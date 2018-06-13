
#import "SBLockOverlayView.h"

@class SBLockOverlayStylePropertiesFactory, SBUIAppleLogoView, UIButton, UILabel, UIView, _UILegibilitySettings;

@interface SBLockScreenBuddyView : SBLockOverlayView
{
    UILabel *_titleLabel;
    SBUIAppleLogoView *_logoView;
    _Bool _usesWhiteLogo;
    int _viewState;
    SBLockOverlayStylePropertiesFactory *_underlayPropertiesFactory;
    _UILegibilitySettings *_legibilitySettings;
    id <SBLockScreenBuddyViewDelegate> _delegate;
    unsigned long long _style;
    UIView *_activationInfoView;
    UIButton *_infoButton;
    UIView *_regulatoryInfoView;
}

- (id)legibilitySettings;
- (id)underlayPropertiesFactory;
- (void)layoutSubviews;
- (void)configureOverlayPropertiesForStyle:(unsigned long long)arg1;
- (_Bool)isFakeLogoHidden;
- (void)_toggleViewState;
- (void)setViewState:(int)arg1;
- (void)setTitleLanguage:(id)arg1;
- (void)setTitleString:(id)arg1;
- (void)_adjustTitleVisibilityForInfoViews;
- (id)initWithFrame:(struct CGRect)arg1 useWhiteLogo:(_Bool)arg2;

@end

