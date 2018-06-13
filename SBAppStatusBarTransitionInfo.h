
#import "NSObject.h"

@class UIStatusBarStyleRequest;

@interface SBAppStatusBarTransitionInfo : NSObject
{
    UIStatusBarStyleRequest *_startStyleRequest;
    long long _startOrientation;
    UIStatusBarStyleRequest *_endStyleRequest;
    long long _endOrientation;
    int _transition;
    _Bool _zoomOther;
}

- (id)description;

@end

