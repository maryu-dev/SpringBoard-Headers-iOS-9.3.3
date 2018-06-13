
#import "SBDosidoAnimator.h"

@class SBStarkScreenController;

@interface SBCarDosidoAnimator : SBDosidoAnimator
{
    SBStarkScreenController *_screenController;
}

- (void)_cleanupDosido;
- (void)_animateDosidoWithFactory:(id)arg1 completion:(id)arg2;
- (void)_prepareDosido;
- (id)initWithParentView:(id)arg1 fromOrientation:(long long)arg2 starkScreenController:(id)arg3;

@end

