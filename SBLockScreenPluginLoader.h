
#import "NSObject.h"

@interface SBLockScreenPluginLoader : NSObject
{
}

- (Class)_principalClassFromBundleWithName:(id)arg1;
- (_Bool)_verifyPrincipalClass:(Class)arg1 fromBundleWithName:(id)arg2;
- (id)_pluginControllerFromPrincipalClass:(Class)arg1;
- (id)pluginControllerForName:(id)arg1 activationContext:(id)arg2;

@end

