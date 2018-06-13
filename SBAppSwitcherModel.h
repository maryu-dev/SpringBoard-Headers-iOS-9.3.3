
#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, SBAppSwitcherDefaults, SBIconController;

@interface SBAppSwitcherModel : NSObject
{
    NSMutableArray *_recentDisplayItems;
    NSMutableArray *_recentDisplayItemsForCommandTab;
    NSMutableDictionary *_displayItemsToRoles;
    SBAppSwitcherDefaults *_defaults;
    SBIconController *_iconController;
}

+ (id)sharedInstance;
- (id)commandTabDisplayItems;
- (id)displayItemsForAppsOfRoles:(id)arg1;
- (id)mainSwitcherDisplayItems;
- (void)remove:(id)arg1;
- (void)addToFront:(id)arg1 role:(long long)arg2;
- (void)_warmUpIconForDisplayItem:(id)arg1;
- (void)_warmUpRecentIcons;
- (void)_pruneRoles;
- (id)_displayItemRolesFromPrefsForLoadedDisplayItems:(id)arg1;
- (id)_recentsFromPrefs;
- (id)_recentsFromLegacyPrefs;
- (void)_saveRecents;
- (void)_appActivationStateDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithUserDefaults:(id)arg1 andIconController:(id)arg2;

@end

