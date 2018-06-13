
#import "NSObject.h"

@class SBAssistantController;

@protocol SBAssistantObserver <NSObject>

@optional
- (void)assistant:(SBAssistantController *)arg1 viewDidDisappear:(long long)arg2;
- (void)assistant:(SBAssistantController *)arg1 viewWillDisappear:(long long)arg2;
- (void)assistant:(SBAssistantController *)arg1 viewDidAppear:(long long)arg2;
- (void)assistant:(SBAssistantController *)arg1 viewWillAppear:(long long)arg2;
@end

