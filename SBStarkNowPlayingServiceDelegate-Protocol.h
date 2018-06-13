
#import "NSObject.h"

@class NSError, SBStarkNowPlayingService;

@protocol SBStarkNowPlayingServiceDelegate <NSObject>
- (void)nowPlayingService:(SBStarkNowPlayingService *)arg1 didTerminateWithError:(NSError *)arg2;
@end

