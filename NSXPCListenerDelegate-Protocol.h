
#import "NSObject.h"

@class NSXPCConnection, NSXPCListener;

@protocol NSXPCListenerDelegate <NSObject>

@optional
- (_Bool)listener:(NSXPCListener *)arg1 shouldAcceptNewConnection:(NSXPCConnection *)arg2;
@end

