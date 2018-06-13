
#import "NSObject.h"

@interface SBActionHandler : NSObject
{
}

+ (id)sharedInstance;
- (void)_reportAndKillInsecureProcesses:(id)arg1;
- (void)handleActions:(id)arg1 origin:(id)arg2 withResult:(id)arg3;

@end

