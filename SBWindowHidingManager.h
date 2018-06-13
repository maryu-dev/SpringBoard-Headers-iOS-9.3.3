
#import "NSObject.h"

#import "FBSceneMonitorDelegate.h"

@class FBSceneMonitor, NSMapTable, NSString;

@interface SBWindowHidingManager : NSObject <FBSceneMonitorDelegate>
{
    NSMapTable *_windowStateMap;
    NSMapTable *_hidingContextMap;
    FBSceneMonitor *_keyboardMonitor;
    struct SBWindowLevelRange_struct _hideRange;
}

+ (void)start;
+ (id)sharedInstance;
- (void)sceneMonitor:(id)arg1 sceneSettingsDidChangeWithDiff:(id)arg2 previousSettings:(id)arg3;
- (id)dumpKnownWindows;
- (id)dumpHidingState;
- (void)_releaseWindow:(id)arg1;
- (_Bool)_isHidingWindowLevel:(double)arg1;
- (void)_captureWindow:(id)arg1;
- (void)_takeNoteOfWindow:(id)arg1 onScreen:(id)arg2;
- (void)_adjustWindowsForActiveHideRange;
- (void)_recomputeHideRangeAndAdjustWindows;
- (_Bool)_isHidingWindows;
- (void)stopHidingWindowsForContext:(id)arg1;
- (void)startHidingWindowsExclusivelyFromLevel:(double)arg1 toLevel:(double)arg2 forContext:(id)arg3 reason:(id)arg4;
- (void)setAlpha:(double)arg1 forWindow:(id)arg2;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

