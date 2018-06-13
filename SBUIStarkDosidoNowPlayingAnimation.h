
#import "SBUIStarkDosidoAnimation.h"

@class NSNumber;

@interface SBUIStarkDosidoNowPlayingAnimation : SBUIStarkDosidoAnimation
{
    NSNumber *_activatedNowPlaying;
    _Bool _waitForNowPlaying;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (_Bool)_waitsForApplicationActivationIfNecessary;
- (void)_setupStartDependencies;
- (id)initFromAlertImpersonator:(id)arg1 toNowPlayingWithStarkScreenController:(id)arg2;
- (id)initFromNowPlayingToAlertImpersonator:(id)arg1 starkScreenController:(id)arg2;
- (id)initFromApp:(id)arg1 toNowPlayingWithStarkScreenController:(id)arg2;
- (id)initFromNowPlayingToApp:(id)arg1 starkScreenController:(id)arg2;
- (id)initFromNowPlayingToNowPlayingWithStarkScreenController:(id)arg1;
- (void)_commonInitWaitForNowPlaying:(_Bool)arg1 fromView:(id)arg2 toView:(id)arg3 alert:(id)arg4 toDisplay:(id)arg5;

@end

