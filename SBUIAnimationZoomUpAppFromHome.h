
#import "SBUIAnimationZoomUpApp.h"

#import "SBIconAnimatorDelegate.h"

@class NSString, SBIconAnimator;

@interface SBUIAnimationZoomUpAppFromHome : SBUIAnimationZoomUpApp <SBIconAnimatorDelegate>
{
    SBIconAnimator *_iconAnimator;
}

- (void)iconAnimatorWasInvalidated:(id)arg1;
- (void)cleanupZoom;
- (void)_cleanupAnimation;
- (id)animateZoomWithCompletion:(id)arg1;
- (void)prepareZoom;
- (void)dealloc;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

