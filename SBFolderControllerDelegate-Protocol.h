
#import "NSObject.h"

@class SBFolder, SBFolderController, SBIconListView;

@protocol SBFolderControllerDelegate <NSObject>
- (void)folderControllerDidEndScrolling:(SBFolderController *)arg1;
- (void)folderControllerShouldBeginEditing:(SBFolderController *)arg1;
- (void)folderControllerShouldClose:(SBFolderController *)arg1;
- (void)folderController:(SBFolderController *)arg1 draggedIconShouldDropFromListView:(SBIconListView *)arg2;
- (_Bool)folderController:(SBFolderController *)arg1 draggedIconMightDropFromListView:(SBIconListView *)arg2;
- (_Bool)folderController:(SBFolderController *)arg1 draggedIconDidMoveFromListView:(SBIconListView *)arg2 toListView:(SBIconListView *)arg3;
- (_Bool)folderController:(SBFolderController *)arg1 draggedIconDidPauseAtLocation:(struct CGPoint)arg2 inListView:(SBIconListView *)arg3;
- (Class)controllerClassForFolder:(SBFolder *)arg1;

@optional
- (void)folderControllerDidReceiveCancelReachabilityAction:(SBFolderController *)arg1;
@end

