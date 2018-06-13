
@class NSArray;

@protocol SBApplicationPlaceholderLifecycleObserver
- (void)applicationPlaceholdersNetworkUsageChanged:(_Bool)arg1;
- (void)applicationPlaceholdersInstalled:(NSArray *)arg1;
- (void)applicationPlaceholdersCancelled:(NSArray *)arg1;
- (void)applicationPlaceholdersAdded:(NSArray *)arg1;
@end

