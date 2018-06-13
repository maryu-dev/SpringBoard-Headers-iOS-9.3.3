
#import "SBLockOverlayViewController.h"

#import "SBLockScreenBuddyViewDelegate.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, NSTimer, SBActivationInfoViewController, SBBuddyRegulatoryInfoViewController, SBBuddyWiFiScanner, SBLockScreenViewController;

@interface SBLockScreenBuddyViewController : SBLockOverlayViewController <SBLockScreenBuddyViewDelegate>
{
    NSMutableArray *_currentStringsOrdering;
    _Bool _needsTransitionFromFakeLogoToWelcomeStrings;
    _Bool _cyclingLabels;
    _Bool _viewVisible;
    _Bool _canShowActivationInfo;
    _Bool _showingBootLogo;
    _Bool _startsWithBlackBackground;
    _Bool _hasResultsFromWifiScan;
    _Bool _shouldResetOrderingOnNextCycle;
    SBLockScreenViewController *_lockScreenViewController;
    NSDictionary *_localizedStrings;
    NSArray *_stringsOrdering;
    unsigned long long _currentStringIndex;
    NSTimer *_stringCycleTimer;
    SBActivationInfoViewController *_activationInfoViewController;
    NSString *_telephonyPrimaryLanguage;
    NSString *_wifiPrimaryLanguage;
    SBBuddyRegulatoryInfoViewController *_regulatoryInfoViewController;
    SBBuddyWiFiScanner *_wifiScanner;
}

- (void)handleTapGestureFromView:(id)arg1;
- (void)buddyView:(id)arg1 didChangeToStyle:(unsigned long long)arg2;
- (void)_cancelWifiScan;
- (void)_startWifiScan;
- (void)_didHideBootSetupLogo:(id)arg1;
- (void)_didShowBootSetupLogo:(id)arg1;
- (void)_regulatoryInfoButtonTapped:(id)arg1;
- (void)_infoButtonTapped:(id)arg1;
- (void)_cycleTimerDidFire:(id)arg1;
- (void)_updateDisplayedStrings;
- (void)_resetDisplayedLocalizedStringsImmediately:(_Bool)arg1;
- (void)_startCyclingLocalizedStringsWithDelay:(double)arg1;
- (void)_startCyclingLocalizedStrings;
- (void)_updateWifiPrimaryLanguageFromGuessedCountries:(id)arg1;
- (void)_fetchLanguageFromTelephony;
- (id)_importantLanguageIdentifiers;
- (id)_currentLanguageIdentifier;
- (id)_currentStringsDictionary;
- (void)_transitionFromFakeBootLogoToWelcomeStrings;
- (void)_noteLogoVisible:(_Bool)arg1;
- (void)_removeAllHiddenReasons;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)buddyView;
- (void)loadView;
- (void)stopCyclingLocalizedStrings;
- (void)setInScreenOffMode:(_Bool)arg1;
@property(readonly, nonatomic) __weak NSString *slideToUnlockText;
- (void)dealloc;
- (id)initWithLockScreenViewController:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

