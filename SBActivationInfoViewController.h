
#import "UIViewController.h"

@class NSString, UIButton, UITextView, UIView;

@interface SBActivationInfoViewController : UIViewController
{
    NSString *_meid;
    NSString *_imei;
    NSString *_iccid;
    NSString *_csn;
    _Bool _isOnBootstrap;
    double _alertHeight;
    UIView *_containerView;
    UITextView *_textView;
    UIButton *_regulatoryInfoButton;
}

- (id)_formattedString:(id)arg1 withSpaceAfterDigits:(unsigned long long)arg2;
- (id)_formattedCSN;
- (id)_formattedIMEI;
- (id)_formattedICCID;
- (void)_simStatusChanged:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)_updateTextView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

