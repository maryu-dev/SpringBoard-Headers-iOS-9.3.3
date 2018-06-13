
#import "_UILegibilityView.h"

@class SBIconLabelImageParameters;

@interface SBIconLabelView : _UILegibilityView
{
    SBIconLabelImageParameters *_imageParameters;
}

+ (void)updateIconLabelView:(id)arg1 withSettings:(id)arg2 imageParameters:(id)arg3;
+ (id)newIconLabelViewWithSettings:(id)arg1 imageParameters:(id)arg2;
- (void)_checkInImages;
- (void)dealloc;

@end

