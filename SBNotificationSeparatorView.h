
#import "UIView.h"

@interface SBNotificationSeparatorView : UIView
{
    double _height;
}

+ (long long)blendMode;
+ (id)color;
+ (id)separatorForCurrentState;
+ (long long)separatorViewModeForCurrentState;
+ (id)separatorWithScreenScale:(double)arg1 mode:(long long)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateForCurrentState;
- (id)initWithFrame:(struct CGRect)arg1 mode:(long long)arg2;

@end

