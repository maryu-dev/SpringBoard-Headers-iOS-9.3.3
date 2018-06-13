
#import "NSIndexPath.h"

@interface NSIndexPath (SBIconIndex)
+ (id)indexPathWithIconIndex:(unsigned long long)arg1 listIndex:(unsigned long long)arg2;
+ (id)emptyPath;
- (_Bool)isPrefixedByPath:(id)arg1;
- (id)indexPathWithPrefixPath:(id)arg1;
- (id)subpathFromPosition:(unsigned long long)arg1;
- (id)_subpathWithRange:(struct _NSRange)arg1;
- (unsigned long long)sbListIndex;
- (unsigned long long)sbIconIndex;
@end

