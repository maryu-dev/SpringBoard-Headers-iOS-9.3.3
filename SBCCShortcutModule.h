
#import "SBCCButtonModule.h"

@class NSString, NSURL;

@interface SBCCShortcutModule : SBCCButtonModule
{
    NSString *_displayID;
    NSURL *_url;
}

+ (id)identifier;
- (void)activateAppWithDisplayID:(id)arg1 url:(id)arg2;
- (void)activateApp;
- (_Bool)_toggleState;
- (_Bool)isRestricted;
- (id)aggdKey;
- (id)displayName;
- (id)identifier;

@end

