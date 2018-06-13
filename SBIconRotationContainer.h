
#import "UIView.h"

@class SBIcon, SBIconView, SBIconViewMap;

@interface SBIconRotationContainer : UIView
{
    struct SBIconCoordinate _coordinate;
    SBIconViewMap *_viewMap;
    SBIconView *_startView;
    SBIconView *_endView;
    struct CGPoint _wallpaperRelativeImageCenter;
    int _location;
}

- (void)crossfadeWithDuration:(double)arg1;
- (void)prepareToCrossfade;
@property(readonly, nonatomic) struct CGPoint iconImageCenter;
@property(readonly, nonatomic) SBIcon *endIcon;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 startIcon:(id)arg2 endIcon:(id)arg3 viewMap:(id)arg4 coordinate:(struct SBIconCoordinate)arg5 location:(int)arg6;

@end

