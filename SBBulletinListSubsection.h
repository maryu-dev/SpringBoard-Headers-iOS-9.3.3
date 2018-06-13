
#import "NSObject.h"

@class NSString;

@interface SBBulletinListSubsection : NSObject
{
    _Bool _showsInLockScreen;
    _Bool _showsMessagePreview;
    NSString *_subsectionID;
}

- (id)initWithBulletinListSection:(id)arg1 subsectionID:(id)arg2;

@end

