
#import "SBCCShortcutModule.h"

@class NSDateFormatter, NSString;

@interface SBCCRecordScreenShortcut : SBCCShortcutModule
{
    struct OpaqueFigVirtualDisplaySession *_session;
    NSString *_lastRecordingPath;
    NSDateFormatter *_dateFormatter;
}

+ (_Bool)enabledByDefault;
+ (_Bool)isSupported:(int)arg1;
+ (id)displayName;
+ (id)identifier;
- (id)glyphImageForState:(int)arg1;
- (id)statusUpdate;
- (_Bool)_toggleState;
- (void)_videoAtPath:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)_stopRecording;
- (void)_startRecording;
- (void)deactivate;
- (void)activate;

@end

