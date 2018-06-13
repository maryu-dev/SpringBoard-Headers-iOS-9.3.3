
#import "SBAlertView.h"

@class CNContact, NSArray, NSLayoutConstraint, SBAppStatusBarSettingsAssertion, UIActivityIndicatorView, UIImageView, UILabel, UIView, _UILegibilitySettings;

@interface SBLogoutProgressAlertView : SBAlertView
{
    CNContact *_userContact;
    NSArray *_pendingApplications;
    _UILegibilitySettings *_legibilitySettings;
    UIImageView *_userAvatarView;
    NSLayoutConstraint *_userAvatarVerticalConstraint;
    UILabel *_goodbyeLabel;
    NSLayoutConstraint *_goodbyeLabelConstraint;
    UIView *_savingDocumentsActivityAndLabelContainerView;
    UIActivityIndicatorView *_savingDocumentsActivityIndicator;
    UILabel *_savingDocumentsLabel;
    UILabel *_savingDocumentsMoreLabel;
    NSLayoutConstraint *_savingDocumentsMoreLabelConstraint;
    UIView *_blameContainerView;
    UIImageView *_blameAppIconView;
    UILabel *_blameAppNameLabel;
    SBAppStatusBarSettingsAssertion *_statusBarSettingsAssertion;
}

- (void)_updateBlame;
- (void)_updateUserAvatar;
- (void)_updateGoodbye;
- (void)_updateViewData;
- (void)_updateLegibility;
- (void)_updateUserAvatarLegibility;
- (double)_userAvatarVerticalOffsetFromCenter;
- (double)_moreDocumentsLabelBaselineOffset;
- (double)_goodbyeLabelBaselineOffset;
- (void)updateConstraints;
- (void)layoutForInterfaceOrientation:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

