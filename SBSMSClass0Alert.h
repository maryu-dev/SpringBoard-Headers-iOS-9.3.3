
#import "SBUSSDAlert.h"

#import "SBSMSClass0AlertDisplayDelegate.h"

@class NSString;

@interface SBSMSClass0Alert : SBUSSDAlert <SBSMSClass0AlertDisplayDelegate>
{
}

+ (void)alertWithString:(id)arg1 address:(id)arg2;
+ (void)playMessageReceived;
+ (void)registerForAlerts;
- (void)smsClass0AlertDisplayDidTapLearnMoreButton:(id)arg1;
- (_Bool)allowsStackingOfAlert:(id)arg1;
- (void)deactivate;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (id)_initWithString:(id)arg1;
- (void)_registerForNotifications;
- (void)_unregisterForNotifications;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

