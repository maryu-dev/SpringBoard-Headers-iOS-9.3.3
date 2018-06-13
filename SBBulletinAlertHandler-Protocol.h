
#import "NSObject.h"

@class BBBulletin;

@protocol SBBulletinAlertHandler <NSObject>
- (void)handleEvent:(int)arg1 withBulletin:(BBBulletin *)arg2 forRegistry:(id <SBBulletinAlertHandlerRegistry>)arg3;
- (_Bool)bindBulletin:(BBBulletin *)arg1 forRegistry:(id <SBBulletinAlertHandlerRegistry>)arg2;
@end

