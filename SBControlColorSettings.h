
#import "NSObject.h"

@class UIColor;

@interface SBControlColorSettings : NSObject
{
    UIColor *_tintColor;
    UIColor *_selectedTintColor;
    UIColor *_textColor;
    UIColor *_selectedTextColor;
}

+ (id)settingsWithTintColor:(id)arg1 selectedTintColor:(id)arg2 textColor:(id)arg3 selectedTextColor:(id)arg4;
- (id)initWithTintColor:(id)arg1 selectedTintColor:(id)arg2 textColor:(id)arg3 selectedTextColor:(id)arg4;

@end

