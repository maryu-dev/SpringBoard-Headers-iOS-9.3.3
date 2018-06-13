
#import "SBApplication.h"

@interface SBNewsstandApplication : SBApplication
{
    unsigned int _supportsNewsstandContentBackgroundMode:1;
    unsigned long long _allowedContentNotificationsPerDay;
    unsigned char _newsstandWakes;
}

- (_Bool)supportsBackgroundAppRefresh;
- (_Bool)supportsNewsstandContentBackgroundMode;
- (_Bool)isNewsstandApplication;
- (_Bool)shouldThrottleContentNotificationOnDate:(id)arg1 withLastCount:(unsigned long long *)arg2 onDay:(long long *)arg3;
- (void)resumeForContentAvailable;
- (void)activate;
- (Class)iconClass;
- (id)initWithApplicationInfo:(id)arg1;

@end

