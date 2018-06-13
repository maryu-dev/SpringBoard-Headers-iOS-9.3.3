
#import "NSObject.h"

@class UIViewController;

@interface SBCCButtonModule : NSObject
{
    _Bool _enabled;
    _Bool _inoperative;
    id <SBCCButtonModuleDelegate> _delegate;
    UIViewController *_parentViewController;
}

+ (_Bool)enabledByDefault;
+ (_Bool)isSupported:(int)arg1;
+ (id)displayName;
+ (id)identifier;
+ (Class)buttonControllerClass;
- (id)glyphImageForState:(int)arg1;
- (id)glyphImageForState:(int)arg1 section:(int)arg2;
- (id)unavailableText;
- (id)confirmationAlertTitle;
- (id)confirmationAlertMessage;
- (void)confirmed:(_Bool)arg1;
- (_Bool)needsConfirmation;
- (id)statusUpdate;
- (void)_updateState;
- (_Bool)_toggleState;
- (void)_noteDisplayPropertiesDidChange;
- (void)_noteButtonStateDidChange;
- (void)toggleState;
- (int)state;
- (_Bool)isRestricted;
- (void)cooldown;
- (void)warmup;
- (void)deactivate;
- (void)activate;
- (id)aggdKey;
- (id)displayName;
- (id)identifier;
- (id)description;

@end

