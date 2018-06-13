
#import "NSObject.h"

@class NSMutableArray, NSString, SBFolderController, SBFolderControllerAnimationContext, SBIconAnimationSettings, UIView;

@interface SBIconAnimator : NSObject
{
    double _fraction;
    _Bool _startAnimationAfterRotationEnds;
    _Bool _windowIsRotating;
    _Bool _cleanedUp;
    NSMutableArray *_pendedAnimationContexts;
    SBFolderControllerAnimationContext *_animationContext;
    NSString *_instanceIdentifier;
    _Bool _invalidated;
    _Bool _animatesInnerFolderViews;
    id <SBIconAnimatorDelegate> _delegate;
    SBIconAnimationSettings *_settings;
    SBFolderController *_folderController;
}

- (void)_windowFinishedRotating;
- (void)_invalidateCompletions;
- (void)_allowRotationOnMainWindowIfNecessary:(_Bool)arg1;
- (id)_centralAnimationFactory;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(id)arg3;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_prepareAnimation;
- (_Bool)_isDelayedForRotation;
- (void)_animateToFractionFromContext:(id)arg1;
- (void)_animateToFractionFromPendingContexts;
- (void)cleanup;
- (void)animateToFraction:(double)arg1 afterDelay:(double)arg2 withCompletion:(id)arg3;
- (void)setFraction:(double)arg1;
- (void)prepare;
- (id)centralAnimationFactory;
@property(readonly, nonatomic) UIView *referenceView;
- (void)dealloc;
- (id)initWithFolderController:(id)arg1;

@end

