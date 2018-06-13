
#import "UIView.h"

@class NSArray;

@interface SBGradientView : UIView
{
    NSArray *_colors;
}

+ (Class)layerClass;
@property struct CGPoint endPoint;
@property struct CGPoint startPoint;
@property(copy, nonatomic) NSArray *locations;
- (id)color;

@end

