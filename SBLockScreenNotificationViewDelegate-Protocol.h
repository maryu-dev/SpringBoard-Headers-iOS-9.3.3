
#import "SBLockScreenActionHandler.h"

@class SBLockScreenActionContext, SBLockScreenNotificationCell, SBLockScreenNotificationListView, UIScrollView;

@protocol SBLockScreenNotificationViewDelegate <SBLockScreenActionHandler>
- (void)noteListViewReadyForModelUpdate;
- (void)listView:(SBLockScreenNotificationListView *)arg1 cellDidEndScrolling:(SBLockScreenNotificationCell *)arg2;
- (void)listView:(SBLockScreenNotificationListView *)arg1 cellDidBeginScrolling:(SBLockScreenNotificationCell *)arg2;
- (void)listViewDidEndScrolling:(SBLockScreenNotificationListView *)arg1;
- (void)listViewDidBeginScrolling:(SBLockScreenNotificationListView *)arg1;
- (UIScrollView *)lockScreenScrollView;
- (void)noteUnlockActionChanged:(SBLockScreenActionContext *)arg1;
@end

