
#import "UIView.h"

@class NSArray, SBAppSwitcherSettings, SBBestAppSuggestion, SBSlideUpAppGrabberView, SBWallpaperEffectView, UILabel, _UIBackdropView;

@interface SBSwitcherAppSuggestionBottomBannerView : UIView
{
    SBBestAppSuggestion *_suggestion;
    SBWallpaperEffectView *_fakeWallpaperView;
    _UIBackdropView *_blurWallpaperView;
    NSArray *_blurViewConstraints;
    SBAppSwitcherSettings *_settings;
    UIView *_contentView;
    UILabel *_appLabel;
    UILabel *_descriptionLabel;
    SBSlideUpAppGrabberView *_iconView;
    _Bool _usesFakeBlur;
    id <SBSwitcherAppSuggestionBottomBannerViewDelegate> _delegate;
    unsigned long long _style;
}

+ (double)extraBottomLayoutMargin;
- (id)_firstWakeGreetingString;
- (id)_meCardShortName;
- (id)_appTitleForSuggestion:(id)arg1;
- (id)_descriptionStringForSuggestion:(id)arg1;
- (void)_createIconViewForSuggestion:(id)arg1;
- (void)_createDescriptionLabelForSuggestion:(id)arg1;
- (void)_configureLabelForVibrancy:(id)arg1;
- (void)_createAppLabelForSuggestion:(id)arg1;
- (id)_labelFont;
- (void)_configureIconBackgroundView;
- (void)_configureWallpaperView;
- (id)_backdropSettings;
- (void)_configureConstraints;
- (_Bool)_isSingleLine;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) SBBestAppSuggestion *representedAppSuggestion;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 appSuggestion:(id)arg2 style:(unsigned long long)arg3;

@end

