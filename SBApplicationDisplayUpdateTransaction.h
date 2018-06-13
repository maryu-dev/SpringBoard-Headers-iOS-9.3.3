
#import "FBTransaction.h"

@class FBApplicationProcess, NSArray, SBApplication;

@interface SBApplicationDisplayUpdateTransaction : FBTransaction
{
    SBApplication *_app;
    FBApplicationProcess *_process;
    unsigned long long _sceneState;
    NSArray *_displays;
}

- (id)_customizedDescriptionProperties;
- (void)_willBegin;
- (id)initWithApplication:(id)arg1 process:(id)arg2 displays:(id)arg3 state:(unsigned long long)arg4;

@end

