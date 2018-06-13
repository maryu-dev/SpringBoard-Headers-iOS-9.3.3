
#import "UITapGestureRecognizer.h"

@interface SBBannerTapGestureRecognizer : UITapGestureRecognizer
{
    id _touchesBeganBlock;
    id _touchesEndedBlock;
}

- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

