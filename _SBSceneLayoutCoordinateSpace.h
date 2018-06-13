
#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "UICoordinateSpace.h"

@class NSString;

@interface _SBSceneLayoutCoordinateSpace : NSObject <UICoordinateSpace, BSDescriptionProviding>
{
    struct CGRect _referenceBounds;
    long long _orientation;
}

+ (id)coordinateSpaceForInterfaceOrientation:(long long)arg1 withReferenceBounds:(struct CGRect)arg2;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) struct CGRect bounds;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

