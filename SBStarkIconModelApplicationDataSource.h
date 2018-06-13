
#import "NSObject.h"

#import "SBIconModelApplicationDataSource.h"

@class NSDictionary, NSString;

@interface SBStarkIconModelApplicationDataSource : NSObject <SBIconModelApplicationDataSource>
{
    id <SBStarkSessionConfiguring> _configuration;
    _Bool _loadedCustomIconState;
    NSDictionary *_customIconState;
}

+ (id)defaultIconOrder;
+ (void)setCustomIconOrder:(id)arg1;
+ (id)customIconOrder;
+ (id)persistedCustomIconOrderPath;
- (id)firstPageLeafIdentifiers;
- (id)defaultIconState;
- (id)allApplications;
- (void)resetCustomIconOrder;
- (void)_loadCustomIconStateIfNecessary;
- (id)initWithConfiguration:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

