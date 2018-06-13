
#import "NSObject.h"

@class MPUSystemMediaControlsViewController, NSDictionary;

@protocol MPUSystemMediaControlsDelegate <NSObject>

@optional
- (void)systemMediaControlsViewController:(MPUSystemMediaControlsViewController *)arg1 didTapOnTrackInformationView:(NSDictionary *)arg2;
- (void)systemMediaControlsViewController:(MPUSystemMediaControlsViewController *)arg1 didReceiveTapOnControlType:(long long)arg2;
@end

