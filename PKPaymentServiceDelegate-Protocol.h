
#import "NSObject.h"

@class NSArray, NSString, PKFieldProperties, PKPaymentMessage, PKPaymentTransaction, PKValueAddedServiceTransaction;

@protocol PKPaymentServiceDelegate <NSObject>

@optional
- (void)contactlessInterfaceDidDismissForPassesWithUniqueIdentifiers:(NSArray *)arg1 fromSource:(long long)arg2;
- (void)passWithUniqueIdentifier:(NSString *)arg1 didReceiveValueAddedServiceTransaction:(PKValueAddedServiceTransaction *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didEnableTransactionService:(_Bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didEnableMessageService:(_Bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didRemoveTransactionWithIdentifier:(NSString *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceiveTransaction:(PKPaymentTransaction *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceiveMessage:(PKPaymentMessage *)arg2;
- (void)contactlessInterfaceDidDismissFromSource:(long long)arg1;
- (void)contactlessInterfaceDidPresentFromSource:(long long)arg1;
- (void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(NSString *)arg1;
- (void)paymentDeviceDidExitField;
- (void)paymentDeviceDidEnterFieldWithProperties:(PKFieldProperties *)arg1;
- (void)paymentServiceReceivedInterruption;
@end

