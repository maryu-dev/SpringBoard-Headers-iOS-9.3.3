
#import "NSObject.h"

#import "BBObserverDelegate.h"

@class BBObserver, NSString;

@interface SBBulletinLocalObserverGateway : NSObject <BBObserverDelegate>
{
    BBObserver *_bbObserver;
}

+ (id)sharedInstance;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(_Bool)arg4 withReply:(id)arg5;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

