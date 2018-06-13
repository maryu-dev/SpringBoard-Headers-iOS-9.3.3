
#import "NSObject.h"

@class NSString;

@interface SBAppViewStatusBarDescriptor : NSObject
{
    _Bool _forceHidden;
    NSString *_breadcrumbTitle;
    NSString *_breadcrumbSecondaryTitle;
}

+ (id)statusBarDescriptorWithForceHidden:(_Bool)arg1;
- (id)debugDescription;
- (id)initWithForceHidden:(_Bool)arg1;

@end

