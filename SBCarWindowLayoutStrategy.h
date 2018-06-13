
#import "NSObject.h"

#import "SBWindowLayoutStrategy.h"

@class NSString;

@interface SBCarWindowLayoutStrategy : NSObject <SBWindowLayoutStrategy>
{
    id <SBStarkSessionConfiguring> _configuration;
    unsigned long long _layout;
}

+ (id)strategyWithConfiguration:(id)arg1 layout:(unsigned long long)arg2;
+ (struct UIEdgeInsets)statusBarEdgeInsetsForConfiguration:(id)arg1;
- (_Bool)_isLayoutBoundsOnly;
- (_Bool)shouldClipForWindow:(id)arg1;
- (struct CGRect)frameForWindow:(id)arg1;
- (id)initWithConfiguration:(id)arg1 layout:(unsigned long long)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

