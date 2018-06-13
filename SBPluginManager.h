
#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface SBPluginManager : NSObject
{
    NSString *_pluginsDirectory;
    NSMutableDictionary *_plugins;
}

+ (id)sharedInstance;
- (Class)loadPluginBundle:(id)arg1;
- (Class)loadPluginNamed:(id)arg1;
- (void)loadAllLaunchPlugins;
- (id)springBoardPluginsDirectory;
- (id)init;

@end

