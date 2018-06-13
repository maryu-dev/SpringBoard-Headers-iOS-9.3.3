
#import "NSObject.h"

@class BBAccessoryIcon, NSDate, NSString, UIImage;

@protocol SBDefaultBannerViewSource <NSObject>
- (BBAccessoryIcon *)accessoryIconMask;
- (_Bool)showMessagePreview;
- (UIImage *)attachmentImage;
- (NSString *)attachmentText;
- (UIImage *)iconImage;
- (NSDate *)sourceDate;
- (NSString *)suppressedMessage;
- (NSString *)message;
- (NSString *)subtitle;
- (NSString *)title;
@end

