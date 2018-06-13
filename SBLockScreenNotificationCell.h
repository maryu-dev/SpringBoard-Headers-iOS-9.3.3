
#import "SBNotificationCell.h"

@class SBLockScreenActionContext, SBLockScreenNotificationScrollView, UILabel, UIScrollView;

@interface SBLockScreenNotificationCell : SBNotificationCell
{
    _Bool _isTopCell;
    double _currentContentAlpha;
    id <SBAwayListCellButtonHandler> _actionButtonHandler;
    SBLockScreenNotificationScrollView *_contentScrollView;
    SBLockScreenActionContext *_lockScreenActionContext;
    UILabel *_unlockTextLabel;
    id <UIScrollViewDelegate> _delegate;
    _Bool _resetsScrollOnPluginWillDisable;
    double _contentScrollViewWidth;
}

+ (double)lastLineBottomPadding;
+ (double)unlockLineBaselineOffsetFromPreviousLine;
+ (_Bool)wantsUnlockActionText;
+ (double)rowHeightForTitle:(id)arg1 subtitle:(id)arg2 body:(id)arg3 maxLines:(unsigned long long)arg4 attachmentSize:(struct CGSize)arg5 secondaryContentSize:(struct CGSize)arg6 datesVisible:(_Bool)arg7 rowWidth:(double)arg8 includeUnlockActionText:(_Bool)arg9;
+ (id)defaultColorForEventDate;
+ (id)defaultColorForRelevanceDate;
+ (id)defaultColorForSecondaryText;
+ (id)defaultColorForSubtitleText;
+ (id)defaultColorForPrimaryText;
- (id)_secondaryContentView;
- (_Bool)shouldAnimateHintForTouchInCell:(struct CGPoint)arg1;
- (double)_unlockTextOriginY;
- (void)layoutSubviews;
- (_Bool)shouldVerticallyCenterContent;
- (void)_handleActionButtonPress:(id)arg1;
- (id)_buttonWithLabel:(id)arg1;
- (void)setButtonLabel:(id)arg1 handler:(id)arg2;
- (void)setRelevanceDateLabel:(id)arg1;
- (void)_updateUnlockText:(id)arg1;
- (void)_setSeparatorBackdropOverlayBlendMode:(long long)arg1;
- (long long)_separatorBackdropOverlayBlendMode;
- (id)_vibrantTextColor;
- (void)setContentAlpha:(double)arg1;
- (void)scrollToOriginAnimated:(_Bool)arg1;
- (void)resetScrollView;
- (void)_notePluginWillDisable:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

