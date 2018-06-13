
#import "_UIBackdropView.h"

@interface _SBSearchBackdropView : _UIBackdropView
{
    double _transitionProgress;
    double _finalScale;
    double _scale;
    double _factor;
}

- (void)transitionComplete;
- (void)applySettings:(id)arg1;
- (void)transitionIncrementallyToPrivateStyle:(long long)arg1 weighting:(double)arg2;

@end

