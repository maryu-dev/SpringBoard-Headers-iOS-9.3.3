
#import "NSObject.h"

@interface SBDaemonHandler : NSObject
{
}

+ (void)noteDaemonCanceled:(id)arg1;
+ (id)stateDescription;
+ (void)removeRequestForKey:(id)arg1 forDaemonPid:(int)arg2;
+ (_Bool)addRequest:(id)arg1 forKey:(id)arg2 forDaemonPid:(int)arg3;
+ (void)initialize;

@end

