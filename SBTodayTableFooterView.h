
#import "UIView.h"

@class SBAttributionWrapperViewController, SBNewWidgetsButton, SBNotificationSeparatorView, SBNotificationVibrantButton;

@interface SBTodayTableFooterView : UIView
{
    SBNewWidgetsButton *_newWidgetsButton;
    SBNotificationVibrantButton *_button;
    SBNotificationSeparatorView *_separatorView;
    SBAttributionWrapperViewController *_attributionViewController;
    long long _layoutMode;
}

- (double)_buttonBottomPadding;
- (double)_attributionOriginY;
- (void)_updateAttributionFrame;
- (void)_availableWidgetsUpdated:(id)arg1;
- (void)_updateForLockStateDidChange:(id)arg1;
- (_Bool)_isDevicePasscodeLocked;
- (void)_updateForContentCategorySizeDidChange;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)setVisibleWidgetsIDs:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

