
#import "UIView.h"

@interface UIView (SpringBoardAdditions)
+ (id)sb_firstDescendantOfViews:(id)arg1 passingTest:(id)arg2;
- (id)sb_firstDescendantOfClassNamed:(id)arg1;
- (id)sb_firstDescendantOfClass:(Class)arg1;
- (id)sb_firstDescendantPassingTest:(id)arg1;
@property(nonatomic) struct CGPoint anchorPoint;
- (void)sb_removeAnimationsIncludingSubviews:(_Bool)arg1 predicate:(id)arg2;
- (void)sb_removeAnimationsForKeys:(id)arg1 update:(id)arg2;
- (void)sb_removeAllSubviews;
- (id)sb_snapshotImage;
- (void)sbs_printLayerHierarchy;
- (void)_printLayer:(id)arg1 level:(int)arg2;
- (_Bool)hasActiveKeyboardOnScreen;
@end

