
#import "NSObject.h"

@class NSString;

@interface SBApplicationTestingManager : NSObject
{
    NSString *_currentTestName;
    NSString *_scrollTestActiveSubtest;
}

+ (id)sharedInstance;

@end

