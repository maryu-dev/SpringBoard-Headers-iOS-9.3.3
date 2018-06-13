
#import "NSObject.h"

@class NSThread;

@interface SBBuddyWiFiScanner : NSObject
{
    struct __WiFiManagerClient *_wifiManager;
    struct __WiFiDeviceClient *_wifiDevice;
    NSThread *_scanningThread;
    id _completionHandler;
    long long _state;
}

- (void)_thread_cancelScanning;
- (void)cancel;
- (void)_thread_callCompletionHandlerWithGuessedCountries:(id)arg1;
- (void)_thread_closeWifiConnection;
- (void)_thread_wifiScanComplete:(struct __CFArray *)arg1 error:(_Bool)arg2;
- (void)_wifiScanningThread;
- (void)beginScanningWithCompletionHandler:(id)arg1;
- (void)dealloc;

@end

