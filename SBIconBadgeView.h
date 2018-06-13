
#import "UIView.h"

#import "SBIconAccessoryView.h"

@class NSString, SBDarkeningImageView, SBIconAccessoryImage;

@interface SBIconBadgeView : UIView <SBIconAccessoryView>
{
    NSString *_text;
    SBDarkeningImageView *_incomingTextView;
    _Bool _animating;
    id _queuedAnimation;
    _Bool _displayingAccessory;
    SBIconAccessoryImage *_backgroundImage;
    SBDarkeningImageView *_backgroundView;
    SBIconAccessoryImage *_textImage;
    SBDarkeningImageView *_textView;
}

+ (id)_createImageForText:(id)arg1 highlighted:(_Bool)arg2;
+ (id)_checkoutImageForText:(id)arg1 highlighted:(_Bool)arg2;
+ (id)_checkoutBackgroundImage;
+ (id)checkoutAccessoryImagesForIcon:(id)arg1 location:(int)arg2;
+ (struct CGPoint)_overhang;
+ (double)_textPadding;
+ (struct CGPoint)_textOffset;
+ (double)_maxTextWidth;
+ (id)_textFont;
- (void)_resizeForTextImage:(id)arg1;
- (void)_clearText;
- (void)_zoomOutWithPreparation:(id)arg1 animation:(id)arg2 completion:(id)arg3;
- (void)_zoomInWithTextImage:(id)arg1 preparation:(id)arg2 animation:(id)arg3 completion:(id)arg4;
- (void)_crossfadeToTextImage:(id)arg1 withPreparation:(id)arg2 animation:(id)arg3 completion:(id)arg4;
- (void)_configureAnimatedForText:(id)arg1 highlighted:(_Bool)arg2 withPreparation:(id)arg3 animation:(id)arg4 completion:(id)arg5;
- (void)setAccessoryBrightness:(double)arg1;
- (struct CGPoint)accessoryOriginForIconBounds:(struct CGRect)arg1;
- (void)prepareForReuse;
- (_Bool)displayingAccessory;
- (void)configureForIcon:(id)arg1 location:(int)arg2 highlighted:(_Bool)arg3;
- (void)configureAnimatedForIcon:(id)arg1 location:(int)arg2 highlighted:(_Bool)arg3 withPreparation:(id)arg4 animation:(id)arg5 completion:(id)arg6;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

