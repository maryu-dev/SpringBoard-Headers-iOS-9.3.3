
#import "NSObject.h"

#import "SBTestRecipe.h"

@class NSArray, NSString;

@interface SBBulletinTourRecipe : NSObject <SBTestRecipe>
{
    NSArray *_tour;
    unsigned long long _currentStop;
    _Bool _failedToLoadTour;
}

+ (id)title;
- (void)loadTourFromPrefsIfNecessary;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

