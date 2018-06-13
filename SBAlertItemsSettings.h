
#import "_UISettings.h"

@interface SBAlertItemsSettings : _UISettings
{
    _Bool _disableBBHandlers;
    long long _testItemToken;
}

+ (id)newTestItemForToken:(long long)arg1;
+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

