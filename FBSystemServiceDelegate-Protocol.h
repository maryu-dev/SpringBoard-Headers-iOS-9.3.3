
#import "NSObject.h"

@class BSAuditToken, FBSystemService, NSDictionary, NSSet, NSString, NSURL;

@protocol FBSystemServiceDelegate <NSObject>
- (void)systemService:(FBSystemService *)arg1 handleOpenURLRequest:(NSURL *)arg2 application:(NSString *)arg3 options:(NSDictionary *)arg4 origin:(BSAuditToken *)arg5 withResult:(void (^)(long long))arg6;
- (void)systemService:(FBSystemService *)arg1 handleOpenApplicationRequest:(NSString *)arg2 options:(NSDictionary *)arg3 origin:(BSAuditToken *)arg4 withResult:(void (^)(long long))arg5;
- (void)systemService:(FBSystemService *)arg1 canActivateApplication:(NSString *)arg2 withResult:(void (^)(long long))arg3;

@optional
- (void)systemServicePrepareForShutdown:(FBSystemService *)arg1 andReboot:(_Bool)arg2;
- (void)systemServicePrepareForExit:(FBSystemService *)arg1 andRelaunch:(_Bool)arg2;
- (void)systemServicePrepareForShutdown:(FBSystemService *)arg1 withOptions:(unsigned long long)arg2;
- (void)systemService:(FBSystemService *)arg1 handleActions:(NSSet *)arg2 origin:(BSAuditToken *)arg3 withResult:(void (^)(long long))arg4;
- (void)systemService:(FBSystemService *)arg1 isPasscodeLockedOrBlockedWithResult:(void (^)(_Bool))arg2;
@end

