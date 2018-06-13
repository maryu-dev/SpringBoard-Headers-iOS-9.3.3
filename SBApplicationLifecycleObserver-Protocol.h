
@class NSArray;

@protocol SBApplicationLifecycleObserver
- (void)applicationsDemoted:(NSArray *)arg1;
- (void)applicationsRemoved:(NSArray *)arg1;
- (void)applicationsModified:(NSArray *)arg1;
- (void)applicationsAdded:(NSArray *)arg1;
@end

