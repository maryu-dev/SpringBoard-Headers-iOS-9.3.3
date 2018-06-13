
#import "NSObject.h"

@class NSString;

@protocol SBSIMLockEntryViewInterface <NSObject>
- (void)setupSuccess;
- (void)setupFailureState;
- (void)setupUnlockAttemptState;
- (void)setupCurrentLockAttemptState;
- (NSString *)label;
- (NSString *)titleText;
- (NSString *)localizedStringWithKey:(NSString *)arg1;
- (id)initWithFrame:(struct CGRect)arg1 languageCode:(NSString *)arg2;
@end

