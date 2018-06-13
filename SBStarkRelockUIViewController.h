
#import "UIViewController.h"

@class UIImageView, UILabel;

@interface SBStarkRelockUIViewController : UIViewController
{
    UIImageView *_imageView;
    struct CGSize _imageSize;
    UILabel *_label;
    double _labelOffset;
    struct CGSize _labelSize;
}

- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

