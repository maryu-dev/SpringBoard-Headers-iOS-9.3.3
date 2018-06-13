
#import "NSObject.h"

#import "UABestAppSuggestionManagerDelegate.h"

@class NSString, SBBestAppSuggestion, UABestAppSuggestion, UABestAppSuggestionManager, _DECConsumer, _DECResult;

@interface SBAppSuggestionManager : NSObject <UABestAppSuggestionManagerDelegate>
{
    UABestAppSuggestionManager *_continuitySuggestionManager;
    UABestAppSuggestion *_continuityCurrentBestSuggestion;
    _DECConsumer *_expertCenterSuggestionMonitor;
    _DECResult *_currentExpertBestSuggestion;
    SBBestAppSuggestion *_currentBestSuggestion;
    _Bool _isListeningForContinuitySuggestion;
    _Bool _isListeningForExpertCenterSuggestion;
    _Bool _screenOnDueToUserEvent;
    _Bool _screenOnAndLookingForEvent;
}

+ (id)sharedInstance;
- (void)expertCenterSuggestionChanged:(id)arg1;
- (void)bestAppSuggestionChanged:(id)arg1;
- (void)_calculateBestSuggestionAndNotifyListeners;
- (void)noteNotActivatingForAppSuggestion:(id)arg1 fromSource:(long long)arg2;
- (void)noteActivatingForAppSuggestion:(id)arg1 fromSource:(long long)arg2;
- (void)_setContinuitySuggestionUpdatesEnabled:(_Bool)arg1 expertCenterSuggestionUpdatesEnabled:(_Bool)arg2;
- (void)_evaluateSuggestionUpdates:(id)arg1;
- (void)_handleInitialSpringBoardLaunch;
- (void)_nextUserEventOccured:(id)arg1;
- (void)_screenDidUndim:(id)arg1;
- (void)_screenDidDim:(id)arg1;
- (void)startFetchingPayloadForAppSuggestion:(id)arg1;
- (id)currentSuggestedApp;
- (void)_stopListeningForNotifications;
- (void)_listenForNotifications;
- (void)_destroySuggestionSources;
- (void)_createSuggestionSources;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

