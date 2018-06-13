
#import "NSObject.h"

@class PGPictureInPictureController, PGPictureInPictureViewController;

@protocol PGPictureInPictureControllerDelegate <NSObject>

@optional
- (void)pictureInPictureController:(PGPictureInPictureController *)arg1 willDestroyPictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureController:(PGPictureInPictureController *)arg1 didCreatePictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
@end

