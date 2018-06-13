
#import "SBSystemGestureManager.h"

@interface SBMainDisplaySystemGestureManager : SBSystemGestureManager
{
    _Bool _multitaskingGesturesEnabled;
}

- (_Bool)_shouldEnableSystemGestureWithType:(unsigned long long)arg1;
- (_Bool)_isGestureWithTypeAllowed:(unsigned long long)arg1;
- (void)_updateUserPreferences;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithDisplay:(id)arg1;

@end

