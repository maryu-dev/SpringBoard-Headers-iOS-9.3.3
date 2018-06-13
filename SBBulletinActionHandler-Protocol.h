
#import "NSObject.h"

@class BBAction, BBBulletin;

@protocol SBBulletinActionHandler <NSObject>
- (_Bool)handleAction:(BBAction *)arg1 forBulletin:(BBBulletin *)arg2 withCompletion:(void (^)(void))arg3;
@end

