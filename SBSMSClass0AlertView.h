
#import "SBAlertView.h"

@class CALayer, NSString, UIButton, UILabel, UIView, UIVisualEffectView;

@interface SBSMSClass0AlertView : SBAlertView
{
    UIView *_contentContainerView;
    UIVisualEffectView *_alertContainerView;
    UIVisualEffectView *_blurEffectContainerView;
    UIVisualEffectView *_darkBlurView;
    UILabel *_messageTextLabel;
    UILabel *_messageTitleLabel;
    UIButton *_dismissButton;
    UIButton *_learnMoreButton;
    CALayer *_lineLayer;
    NSString *_messageString;
    id <SBSMSClass0AlertDisplayDelegate> _delegate;
}

- (void)alertDisplayWillBecomeVisible;
- (void)dismissButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (void)learnMoreButtonClicked:(id)arg1;
- (id)blurEffectContainerView;
- (id)alertContainerView;
- (id)darkBlurView;
- (id)learnMoreButton;
- (id)dismissButton;
- (id)messageTextLabel;
- (id)messageTitleLabel;
- (id)contentContainerView;

@end

