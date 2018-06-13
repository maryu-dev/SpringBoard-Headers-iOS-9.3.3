
#import "NSObject.h"

@class NCSnippetDataSource, NCSnippetDatum;

@protocol NCSnippetDataSourceObserver <NSObject>
- (void)snippetDataSource:(NCSnippetDataSource *)arg1 removeDatum:(NCSnippetDatum *)arg2;
- (void)snippetDataSource:(NCSnippetDataSource *)arg1 replaceWithDatum:(NCSnippetDatum *)arg2;
@end

