
#import "NSObject.h"

@class SBApplicationShortcutMenuContentView, SBSApplicationShortcutItem;

@protocol SBApplicationShortcutMenuContentViewDelegate <NSObject>
- (void)menuContentView:(SBApplicationShortcutMenuContentView *)arg1 activateShortcutItem:(SBSApplicationShortcutItem *)arg2 index:(long long)arg3;
- (_Bool)menuContentView:(SBApplicationShortcutMenuContentView *)arg1 canActivateShortcutItem:(SBSApplicationShortcutItem *)arg2;
@end

