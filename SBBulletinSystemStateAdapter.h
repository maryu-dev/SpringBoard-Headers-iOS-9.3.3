
#import "NSObject.h"

@class BBSystemStateProvider;

@interface SBBulletinSystemStateAdapter : NSObject
{
    BBSystemStateProvider *_stateProvider;
    _Bool _quietModeEnabled;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
- (void)_lostModeStateChanged;
- (void)_screenDimmed:(id)arg1;
- (void)_lockStateChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

