
#import "FBApplicationInfo.h"

@class NSArray, NSDictionary, NSSet, NSString;

@interface SBApplicationInfo : FBApplicationInfo
{
    NSArray *_staticShortcutItems;
    NSString *_displayName;
    NSString *_carDisplayName;
    NSArray *_tags;
    unsigned long long _visibilityOverride;
    long long _defaultWallpaperStyle;
    long long _defaultStatusBarStyle;
    int _ignoredStatusBarStyleOverrides;
    int _networkUsageTypes;
    Class _iconClass;
    NSDictionary *_customSpotlightIconPaths;
    NSDictionary *_searchDomainLaunchInfo;
    unsigned long long _uninstallCapability;
    int _carPlayLaunchModes;
    NSSet *_carPlayProtocols;
    long long _defaultCarPlayStatusBarStyle;
    int _supportedTypes;
    NSArray *_domainsToPreheat;
    NSArray *_launchImageInfo;
    NSArray *_urlTypes;
    _Bool _isSystemApplication;
    _Bool _isInternalApplication;
    _Bool _isWatchApp;
    _Bool _isLaunchableDuringSetup;
    _Bool _usesSplashBoard;
    _Bool _disablesClassicMode;
    _Bool _isMonarchLinked;
    _Bool _prefersSavedSnapshots;
    _Bool _behavesAsCaller;
    _Bool _wantsLaunchWithoutPNG;
    _Bool _wantsFullScreen;
    _Bool _hasViewServiceEntitlement;
    _Bool _canChangeWallpaperStyle;
    _Bool _isGameCenterEnabled;
    _Bool _wasGameCenterEverEnabled;
    _Bool _statusBarIsLegacy;
    _Bool _appSuspendingUnsupported;
    _Bool _requiresHiDPI;
    _Bool _disablesScreenJail;
    _Bool _isCloudKitEnabled;
    _Bool _alwaysLaunchesSuspended;
    _Bool _requiresPasscodeIfLaunchedBeforeFirstUnlock;
    _Bool _systemAppSupportsLocalNotifications;
    long long _whitePointAdaptivityStyle;
    NSDictionary *_customSpotlightIconInfo;
}

- (_Bool)_supportsApplicationType:(int)arg1;
- (id)_copyApplicationMetadata;
- (id)_parseNameForBundleAtPath:(id)arg1 infoDictionary:(id)arg2;
- (id)_parseStaticShortcutItemsFromInfoDictionary:(id)arg1 bundle:(id)arg2;
- (int)_parseSupportedTypesFromInfoDictionary:(id)arg1;
- (unsigned long long)_parseUninstallCapability:(id)arg1;
- (long long)_parseCarPlayDefaultStatusBarStyle:(id)arg1 launchModes:(int)arg2;
- (id)_parseCarPlayProtocols:(id)arg1;
- (id)_parseAppTags:(id)arg1 hasVisibilityOverride:(_Bool)arg2;
- (unsigned long long)_parseVisibilityOverride:(id)arg1;
- (_Bool)_isiPad;
- (void)_reallyParse:(id)arg1 fromBundle:(id)arg2;
- (void)_parse:(id)arg1 fromBundle:(id)arg2;

@end

