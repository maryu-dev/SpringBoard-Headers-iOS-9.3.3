
#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSString;

@interface SBPPTAlertViewDelegate : NSObject <UIAlertViewDelegate>
{
}

- (void)didPresentAlertView:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

