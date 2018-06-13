
#import "SBLayoutElementContainerView.h"

@class SBAppView;

@interface SBAppContainerView : SBLayoutElementContainerView
{
    SBAppView *_appView;
}

- (id)snapshotView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)prepareForReuse;
- (void)setLayoutElementViewAlpha:(double)arg1;
- (unsigned long long)_supportedOrientations;
@property(retain, nonatomic) SBAppView *appView;
- (void)setDisplayMode:(long long)arg1;
- (long long)displayMode;

@end

