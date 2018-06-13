
#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class NSString, SBWallpaperEffectView;

@interface SBWallpaperStyleInfo : NSObject <BSDescriptionProviding>
{
    id _priorityInfo[14];
    SBWallpaperEffectView *_wallpaperEffectView;
    id _styleTransitionState;
}

- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long highestValidPriority;
- (void)enumerateValidPrioritiesUsingBlock:(id)arg1;
- (void)removePriorityInfoForPriority:(long long)arg1;
- (void)setPriorityInfo:(id)arg1 forPriority:(long long)arg2;
- (id)priorityInfoForPriority:(long long)arg1;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

