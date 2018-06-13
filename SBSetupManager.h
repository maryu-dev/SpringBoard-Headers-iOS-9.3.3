
#import "NSObject.h"

@interface SBSetupManager : NSObject
{
    _Bool _inSetupMode;
}

+ (id)sharedInstance;
- (_Bool)_setInSetupMode:(_Bool)arg1;
- (_Bool)setupIsRunningForUpdateInstall;
- (_Bool)setupHasFinishedRestoringFromBackup;
- (_Bool)updateInSetupMode;
@property(readonly, nonatomic, getter=isInSetupMode) _Bool inSetupMode;
- (id)init;

@end

