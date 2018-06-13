
#import "SBAlertItem.h"

@class BKSProcessAssertion, NSDictionary, NSExtension, NSObject<OS_dispatch_source>, NSString, NSTimer, NSURL, SBUISound, UIViewController, _SBRemoteAlertContentHostViewController;

@interface SBUserNotificationAlert : SBAlertItem
{
    NSString *_alertSource;
    unsigned int _replyPort;
    NSObject<OS_dispatch_source> *_portWatcher;
    NSObject<OS_dispatch_source> *_expirationTimer;
    _Bool _sentResponse;
    _Bool _cleanedUp;
    int _token;
    int _timeout;
    unsigned long long _requestFlags;
    NSString *_alertHeader;
    id _alertMessage;
    NSString *_alertMessageDelimiter;
    NSString *_lockScreenAlertHeader;
    id _lockScreenAlertMessage;
    NSString *_lockScreenAlertMessageDelimiter;
    NSString *_defaultButtonTitle;
    NSString *_alternateButtonTitle;
    NSString *_otherButtonTitle;
    NSString *_soundPath;
    unsigned int _soundID;
    unsigned int _soundIDBehavior;
    NSDictionary *_vibrationPattern;
    NSDictionary *_avControllerAttributes;
    NSDictionary *_avItemAttributes;
    double _soundRepeatDuration;
    NSTimer *_soundStopTimer;
    id _keyboardTypes;
    id _autocapitalizationTypes;
    id _autocorrectionTypes;
    id _textFieldButtonDisplayDefaultButtonURLs;
    id _textFieldButtonImagePaths;
    id _textFieldTitles;
    id _textFieldValues;
    id _textFieldButtonDisplayTitles;
    id _textFieldButtonDisplayDefaultButtonTitles;
    long long _currentTextFieldButtonDisplayIndex;
    double _creationTime;
    int _defaultButtonTag;
    int _unlockActionButtonTag;
    unsigned int _replyFlags;
    long long _defaultButtonIndex;
    long long _alternateButtonIndex;
    long long _otherButtonIndex;
    NSString *_defaultResponseLaunchBundleID;
    NSURL *_defaultResponseLaunchURL;
    NSString *_remoteViewControllerClassName;
    NSString *_remoteServiceBundleIdentifier;
    _SBRemoteAlertContentHostViewController *_contentViewControllerForAlertController;
    unsigned int _allowedInLoginWindow:1;
    unsigned int _canceled:1;
    unsigned int _isActivated:1;
    unsigned int _aboveLock:1;
    unsigned int _displayActionButtonOnLockScreen:1;
    unsigned int _dismissOnLock:1;
    unsigned int _dontDismissOnUnlock:1;
    unsigned int _behavesSuperModally:1;
    unsigned int _allowMenuButtonDismissal:1;
    unsigned int _forcesModalAlertAppearance:1;
    unsigned int _oneButtonPerLine:1;
    unsigned int _groupsTextFields:1;
    unsigned int _usesUndoStyle:1;
    unsigned int _dismissesOverlaysOnLockScreen:1;
    unsigned int _configuredLocked:1;
    unsigned int _configuredNeedsPasscode:1;
    unsigned int _defaultResponseAppLaunchWaitingForPasscode:1;
    SBUISound *_sound;
    BKSProcessAssertion *_processAssertion;
    unsigned int _dismissesAutomatically:1;
    NSString *_extensionIdentifier;
    NSExtension *_alertExtension;
    id <NSCopying> _extensionRequest;
}

- (void)didFailToActivate;
- (void)didDeactivateForReason:(int)arg1;
- (void)willDeactivateForReason:(int)arg1;
- (void)noteVolumeOrLockPressed;
- (_Bool)reappearsAfterUnlock;
- (_Bool)reappearsAfterLock;
- (_Bool)_dismissesOverlaysOnLockScreen;
- (_Bool)dismissesAutomatically;
- (_Bool)forcesModalAlertAppearance;
- (_Bool)behavesSuperModally;
- (_Bool)allowInLoginWindow;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)alertView:(id)arg1 shouldDismissForButtonAtIndex:(long long)arg2;
- (void)performUnlockAction;
- (_Bool)_needsDismissalWithClickedButtonIndex:(long long)arg1;
- (void)_sendResponseAndCleanUp:(int)arg1;
- (void)_textFieldButtonPressed:(id)arg1;
- (void)_setSheetDefaultButtonTitle:(id)arg1;
- (void)cancel;
- (void)_cleanup;
- (void)_setActivated:(_Bool)arg1;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)sound;
- (void)willActivate;
- (_Bool)displayActionButtonOnLockScreen;
- (_Bool)allowMenuButtonDismissal;
- (_Bool)dismissOnLock;
- (_Bool)shouldShowInLockScreen;
- (int)token;
- (Class)alertSheetClass;
- (id)description;
- (void)dealloc;
- (void)updateWithMessage:(id)arg1 requestFlags:(int)arg2;
- (id)initWithMessage:(id)arg1 replyPort:(unsigned int)arg2 requestFlags:(int)arg3 auditToken:(id)arg4;
- (id)_safeLocalizedValue:(id)arg1 withBundle:(id)arg2;

@end

