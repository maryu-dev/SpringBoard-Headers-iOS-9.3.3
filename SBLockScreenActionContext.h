
#import "NSObject.h"

@class BBBulletin, NSString;

@interface SBLockScreenActionContext : NSObject
{
    NSString *_lockLabel;
    NSString *_shortLockLabel;
    id _action;
    NSString *_identifier;
    double _fontSize;
    _Bool _requiresUIUnlock;
    _Bool _deactivateAwayController;
    _Bool _canBypassPinLock;
    _Bool _requiresAuthentication;
    BBBulletin *_bulletin;
}

@property(readonly, nonatomic) _Bool hasCustomUnlockLabel;
- (id)initWithLockLabel:(id)arg1 shortLockLabel:(id)arg2 action:(id)arg3 identifier:(id)arg4;

@end

