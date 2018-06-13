
#import "NSObject.h"

@class NSArray, NSString;

@protocol SBCardItemsControllerRemoteInterface <NSObject>
- (void)getCardItemsForControllerWithIdentifier:(NSString *)arg1 withHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)clearCardItemsForControllerWithIdentifier:(NSString *)arg1;
- (void)setCardItems:(NSArray *)arg1 forControllerWithIdentifier:(NSString *)arg2;
- (void)removeCardItems:(NSArray *)arg1 forControllerWithIdentifier:(NSString *)arg2;
- (void)addCardItems:(NSArray *)arg1 forControllerWithIdentifier:(NSString *)arg2;
- (void)cardItemsDidChange:(NSArray *)arg1 forControllerWithIdentifier:(NSString *)arg2;
@end

