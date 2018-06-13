
#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "NSCopying.h"

@class NSString;

@interface SBSideAppState : NSObject <NSCopying, BSDescriptionProviding>
{
    NSString *_sideAppIdentifier;
    long long _presentationStyle;
    long long _presentationWidth;
}

+ (id)initialState;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)serializedState;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSerializedState:(id)arg1;
- (void)_restoreDefaultValues;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

