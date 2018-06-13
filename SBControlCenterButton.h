
#import "SBUIControlCenterButton.h"

@class NSNumber, NSString;

@interface SBControlCenterButton : SBUIControlCenterButton
{
    NSString *_identifier;
    NSNumber *_sortKey;
}

- (void)_updateForStateChange;

@end

