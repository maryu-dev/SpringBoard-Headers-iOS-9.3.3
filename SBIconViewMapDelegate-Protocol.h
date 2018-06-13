
#import "SBReusableViewMapDelegate.h"

@class NSArray, SBIcon, SBIconView, SBIconViewMap;

@protocol SBIconViewMapDelegate <SBReusableViewMapDelegate>
- (int)viewMap:(SBIconViewMap *)arg1 locationForIcon:(SBIcon *)arg2;
- (Class)iconViewClassForIcon:(SBIcon *)arg1 location:(int)arg2;

@optional
- (void)viewMap:(SBIconViewMap *)arg1 configureIconView:(SBIconView *)arg2;
- (unsigned long long)viewMap:(SBIconViewMap *)arg1 numberOfViewsToPrepareOfClass:(Class)arg2;
- (NSArray *)viewMapShouldPrepareViewsOfClasses:(SBIconViewMap *)arg1;
@end

