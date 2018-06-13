
#import "SBIconModelPropertyListFileStore.h"

@interface SBDefaultIconModelStore : SBIconModelPropertyListFileStore
{
}

+ (id)sharedInstance;
- (void)_deleteLegacyState;
- (id)loadDesiredIconState:(id *)arg1;
- (_Bool)saveDesiredIconState:(id)arg1 error:(id *)arg2;
- (_Bool)deleteDesiredIconState:(id *)arg1;
- (id)loadCurrentIconState:(id *)arg1;
- (id)init;

@end

