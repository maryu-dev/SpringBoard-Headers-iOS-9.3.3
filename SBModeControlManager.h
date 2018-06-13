
#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface SBModeControlManager : NSObject
{
    NSMutableArray *_views;
}

+ (id)_segmentedControlForUse:(long long)arg1 colorSettings:(id)arg2;
+ (void)_configureSegmentedControl:(id)arg1 withColorSettings:(id)arg2;
- (void)setTintColor:(id)arg1 forUse:(long long)arg2;
- (void)removeAllSegments;
- (void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
@property(nonatomic) long long selectedSegmentIndex;
@property(readonly, nonatomic) unsigned long long numberOfSegments;
- (id)_segmentedControlForUse:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithGraphicsQuality:(long long)arg1;

@end

