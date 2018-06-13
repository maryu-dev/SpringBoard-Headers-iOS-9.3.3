
#import "NSObject.h"

@class AVController, NSHashTable, NSMutableArray, NSMutableDictionary, NSTimer, SBUISound;

@interface SBSoundController : NSObject
{
    NSMutableDictionary *_soundsBySystemSoundIDs;
    AVController *_avController;
    SBUISound *_avControllerSound;
    NSTimer *_avControllerMaxDurationTimer;
    id _avControllerObserver;
    NSMutableDictionary *_soundsByToneIdentifiers;
    NSMutableDictionary *_toneAlertsByToneIdentifiers;
    NSHashTable *_observers;
    unsigned long long _pendingCallbacks;
    NSMutableArray *_pendedCallbacks;
}

+ (id)sharedInstance;
- (void)_enqueueCallback:(id)arg1;
- (void)_endPendingCallbacksBlock;
- (void)_beginPendingCallbacksBlock;
- (void)_soundDidFinishPlaying:(id)arg1;
- (void)_soundDidStartPlaying:(id)arg1;
- (void)_ringerStateChanged:(id)arg1;
- (_Bool)_playToneAlert:(id)arg1;
- (_Bool)_playAVItem:(id)arg1 forSound:(id)arg2;
- (_Bool)_playSong:(id)arg1;
- (_Bool)_playRingtone:(id)arg1;
- (_Bool)_playSystemSound:(id)arg1;
- (void)_stopToneAlertForSound:(id)arg1;
- (void)_killAVController;
- (void)_maxDurationReachedForAVController;
- (void)_cleanupSystemSound:(unsigned int)arg1 andKill:(_Bool)arg2;
- (_Bool)handleVolumeButtonDownEvent;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)stopAllSounds;
- (_Bool)stopSound:(id)arg1;
- (_Bool)playSound:(id)arg1 environments:(long long)arg2 completion:(id)arg3;
- (_Bool)isPlaying:(id)arg1;
- (_Bool)isPlayingAnySound;
- (void)dealloc;
- (id)init;

@end
