
#import "SBAlert.h"

@interface SBAlert (SBRemoteAlertAdapter)
- (_Bool)isRemote;
- (_Bool)matchesInCallUIService;
- (_Bool)matchesAnyInCallService;
- (_Bool)matchesRemoteAlertService:(id)arg1 options:(id)arg2;
@end

