
#import "NSObject.h"

@class SBApplicationShortcutMenu, SBIconView, SBSApplicationShortcutItem;

@protocol SBApplicationShortcutMenuDelegate <NSObject>
- (void)applicationShortcutMenu:(SBApplicationShortcutMenu *)arg1 launchApplicationWithIconView:(SBIconView *)arg2;
- (void)applicationShortcutMenu:(SBApplicationShortcutMenu *)arg1 startEditingForIconView:(SBIconView *)arg2;
- (void)applicationShortcutMenu:(SBApplicationShortcutMenu *)arg1 activateShortcutItem:(SBSApplicationShortcutItem *)arg2 index:(long long)arg3;

@optional
- (void)applicationShortcutMenuDidPresent:(SBApplicationShortcutMenu *)arg1;
- (void)applicationShortcutMenuDidDismiss:(SBApplicationShortcutMenu *)arg1;
@end

