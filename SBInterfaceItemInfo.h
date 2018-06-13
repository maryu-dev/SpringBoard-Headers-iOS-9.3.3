
#import "NSObject.h"

@class NSString, UIImage;

@interface SBInterfaceItemInfo : NSObject
{
    id _representedObject;
    UIImage *_icon;
    UIImage *_settingsIcon;
    NSString *_displayName;
    NSString *_settingsDisplayName;
}

+ (id)infoWithRepresentedObject:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)invalidateCachedLayoutData;
- (double)heightForReusableViewForNotificationCenterTableViewController:(id)arg1 layoutMode:(long long)arg2 sectionLocation:(long long)arg3;
- (void)populateReusableView:(id)arg1;
- (id)reusableViewIdentifier;
- (Class)reusableViewClass;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)initWithRepresentedObject:(id)arg1;

@end

