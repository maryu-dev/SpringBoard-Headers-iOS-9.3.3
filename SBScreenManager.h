
#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface SBScreenManager : NSObject
{
    NSMutableArray *_handlers;
    NSMutableDictionary *_screenIDToHandlerMap;
    NSMutableDictionary *_screenIDToLastDisplayMap;
}

+ (id)sharedInstance;
- (void)addConnectionHandler:(id)arg1;
- (id)lastDisplayForScreen:(id)arg1;
- (id)lastDisplayForScreenWithID:(unsigned int)arg1;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_screenDidConnect:(id)arg1;
- (void)_updateHandlerForConnectionToScreen:(id)arg1;
- (id)init;

@end

