
#import "NSObject.h"

@class NSString, UIFetchContentInBackgroundAction;

@interface SBBackgroundFetchExternalRequest : NSObject
{
    int _sequenceNumber;
    UIFetchContentInBackgroundAction *_action;
    NSString *_bundleID;
}

- (void)execute;
- (id)initForBundleID:(id)arg1;

@end

