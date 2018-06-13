
#import "NSObject.h"

#import "SBAppViewHostRequester.h"

@class NSString;

@interface SBAnimationWrapperHostRequester : NSObject <SBAppViewHostRequester>
{
}

+ (id)sharedRequester;
- (long long)appViewRequesterPriority:(id)arg1;
- (id)appViewRequesterIdentifier:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

