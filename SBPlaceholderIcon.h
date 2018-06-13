
#import "SBIcon.h"

@interface SBPlaceholderIcon : SBIcon
{
    id _nodeIdentifier;
    SBIcon *_icon;
}

+ (id)emptyPlaceholder;
+ (void)setGrabbedIcon:(id)arg1;
+ (id)grabbedIconPlaceholder;
+ (id)placeholderForIcon:(id)arg1;
+ (id)placeholderNodeIdentifierForIcon:(id)arg1;
- (id)referencedIcon;
- (_Bool)isEmptyPlaceholder;
- (_Bool)isGrabbedIconPlaceholder;
- (_Bool)isPlaceholder;
- (_Bool)shouldCacheImageForFormat:(int)arg1;
- (id)generateIconImage:(int)arg1;
- (id)automationID;
- (id)nodeIdentifier;
- (id)_initWithNodeIdentifier:(id)arg1 icon:(id)arg2;

@end

