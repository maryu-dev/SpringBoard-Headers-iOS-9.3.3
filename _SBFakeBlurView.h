
#import "UIView.h"

#import "_SBFakeBlur.h"

@class NSString, SBFWallpaperView, UIImageView;

@interface _SBFakeBlurView : UIView <_SBFakeBlur>
{
    long long _requestedStyle;
    long long _effectiveStyle;
    SBFWallpaperView *_wallpaperView;
    _Bool _fullscreen;
    UIImageView *_imageView;
    id <_SBFakeBlurObserver> _observer;
}

+ (id)_imageForStyle:(inout long long *)arg1 withSource:(id)arg2;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutSubviews;
- (void)rotateToInterfaceOrientation:(long long)arg1;
- (void)_setImage:(id)arg1 style:(long long)arg2 notify:(_Bool)arg3;
- (void)_updateImageWithSource:(id)arg1 notifyObserver:(_Bool)arg2;
- (void)updateImageWithSource:(id)arg1;
- (void)reconfigureWithSource:(id)arg1;
@property(readonly, nonatomic) long long variant;
- (void)dealloc;
- (id)initWithVariant:(long long)arg1;
- (long long)effectiveStyle;
- (void)requestStyle:(long long)arg1;
@property(readonly, copy) NSString *description;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

