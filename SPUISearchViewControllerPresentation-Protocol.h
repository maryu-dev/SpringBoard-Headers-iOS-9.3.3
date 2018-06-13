
#import "NSObject.h"

@protocol SPUISearchViewControllerPresentation <NSObject>
@property(nonatomic) unsigned long long presentsFromEdge;
- (void)willBeginDismissing:(_Bool)arg1;
- (void)didFinishPresenting:(_Bool)arg1;
- (void)updatePresentationProgress:(double)arg1;
- (void)willBeginPresentingAnimated:(_Bool)arg1;
- (void)willBeginPresentingAnimated:(_Bool)arg1 fromSource:(unsigned long long)arg2;
@end

