
#import "FBSystemServiceFacility.h"

@interface SBApplicationServer : FBSystemServiceFacility
{
    id <SBApplicationServerDelegate> _delegate;
}

+ (id)sharedInstance;
- (void)_handleUpdateDynamicShortcutItemsMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleFetchDynamicShortcutItemsMessage:(id)arg1 fromClient:(id)arg2;
- (id)_sanitizeShortcutItems:(id)arg1 entitlements:(unsigned long long)arg2;
- (void)_checkShortcutEntitlementsForMessage:(id)arg1 fromClient:(id)arg2 completionHandler:(id)arg3;
- (void)_handleSetRemovalAllowedMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleFetchRemovabilityMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleHarmonyFetchWhitePointAdaptivityStyleMessage:(id)arg1 fromClient:(id)arg2;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)dealloc;
- (id)init;

@end

