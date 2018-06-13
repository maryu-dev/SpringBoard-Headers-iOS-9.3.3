
#import "_SBFVibrantTableViewCell.h"

#import "SBModalLayoutCaching.h"

@class NSString, UIImageView, UILabel;

@interface SBTodayTableViewCell : _SBFVibrantTableViewCell <SBModalLayoutCaching>
{
    UILabel *_label;
    UIImageView *_iconImageView;
    long long _layoutMode;
}

+ (id)defaultTextAttributes;
+ (double)interCellSpacingInLayoutMode:(long long)arg1;
+ (double)snippetLineHeight;
+ (id)defaultFontColor;
+ (id)defaultFont;
- (void)layoutSubviews;
- (void)setIcon:(id)arg1;
@property(copy, nonatomic) NSString *labelText;
@property(nonatomic) struct CGRect textRect;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

