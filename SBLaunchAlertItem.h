
#import "SBAlertItem.h"

@class NSString, SBApplication;

@interface SBLaunchAlertItem : SBAlertItem
{
    SBApplication *_associatedDisplay;
    int _type;
    NSString *_bundleID;
    _Bool _isDataAlert;
    _Bool _usesCellNetwork;
}

- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)alertSheet;
- (id)_customAirplaneModeAlertPrompt;
- (_Bool)dismissOnLock;
- (void)_displayDeactivated:(id)arg1;
- (void)setAssociatedWithDisplay:(id)arg1;
- (void)dealloc;
- (id)initWithLaunchAlertType:(int)arg1 dataAlert:(_Bool)arg2 usesCellNetwork:(_Bool)arg3 bundleID:(id)arg4;

@end

