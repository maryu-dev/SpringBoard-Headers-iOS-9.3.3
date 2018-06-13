
#import "NSObject.h"

@class NSMapTable, SBIconModel;

@interface SBIconPreviousLocationTracker : NSObject
{
    NSMapTable *_previousIconLocations;
    SBIconModel *_iconModel;
}

- (id)previousLocationInfoForIcon:(id)arg1;
- (void)captureLocationInfoForIcon:(id)arg1 inModel:(id)arg2;

@end

