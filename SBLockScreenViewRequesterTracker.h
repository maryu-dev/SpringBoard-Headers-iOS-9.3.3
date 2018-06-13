
#import "NSObject.h"

@class NSMutableSet;

@interface SBLockScreenViewRequesterTracker : NSObject
{
    NSMutableSet *_requesters;
}

- (_Bool)hasRequesters;
- (void)setRequested:(_Bool)arg1 forRequester:(id)arg2;
- (void)removeRequester:(id)arg1;
- (void)addRequester:(id)arg1;

@end

