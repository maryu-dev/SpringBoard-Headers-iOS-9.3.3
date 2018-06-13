
#import "UIView.h"

@class NSString, UIImage, UIImageView, _UIBackdropView;

@interface SBHUDView : UIView
{
    int _level;
    NSString *_title;
    NSString *_subtitle;
    UIImage *_image;
    _Bool _showsProgress;
    float _progress;
    UIView *_blockView;
    _UIBackdropView *_backdropView;
    UIImageView *_backdropMaskImageView;
}

+ (float)progressIndicatorStep;
+ (long long)numberOfProgressIndicatorSteps;
- (void)layoutSubviews;
- (void)_updateBlockView;
- (id)_blockColorForValue:(float)arg1;
- (void)_updateBlockView:(id)arg1 value:(float)arg2 blockSize:(struct CGSize)arg3 point:(struct CGPoint)arg4;
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
- (_Bool)displaysLabel;
- (void)_updateBackdropMask;
- (void)dismissWithCompletion:(id)arg1;
- (void)cancelDismissal;
- (id)initWithHUDViewLevel:(int)arg1;

@end

