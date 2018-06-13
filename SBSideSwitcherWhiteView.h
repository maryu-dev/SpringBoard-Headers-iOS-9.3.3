
#import "UIView.h"

#import "SBAppSwitcherPageContentView.h"
#import "SBAppViewBackgroundView.h"

@class NSString, SBDisplayItem;

@interface SBSideSwitcherWhiteView : UIView <SBAppSwitcherPageContentView, SBAppViewBackgroundView>
{
    SBDisplayItem *_displayItem;
}

- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (void)invalidate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 displayItem:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasDiscreteWallpaperEffect;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) long long wallpaperStyle;

@end

