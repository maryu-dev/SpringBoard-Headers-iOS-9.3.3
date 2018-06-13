
#import "BSTransaction.h"

@class SBStarkScreenController;

@interface SBWaitForCarNowPlayingActiveTransaction : BSTransaction
{
    SBStarkScreenController *_screenController;
    double _timeout;
}

- (void)_begin;
- (id)initWithScreenController:(id)arg1 timeout:(double)arg2;

@end

