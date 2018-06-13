
#import "NSObject.h"

#import "SBWindowLayoutStrategy.h"

@class NSString;

@interface SBDefaultWindowLayoutStrategy : NSObject <SBWindowLayoutStrategy>
{
}

+ (id)sharedInstance;
- (_Bool)shouldClipForWindow:(id)arg1;
- (struct CGRect)frameForWindow:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

