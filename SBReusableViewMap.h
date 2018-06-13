
#import "NSObject.h"

@class NSMapTable;

@interface SBReusableViewMap : NSObject
{
    NSMapTable *_recycledViewsByClass;
    _Bool _invalidated;
    id <SBReusableViewMapDelegate> _delegate;
}

- (void)invalidate;
- (void)purgeAllViews;
- (void)purgeViewsForClass:(Class)arg1;
- (void)recycleView:(id)arg1;
- (id)newViewOfClass:(Class)arg1;
- (id)viewOfClass:(Class)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

