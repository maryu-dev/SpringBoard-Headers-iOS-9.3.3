
#import "NSObject.h"

@class NSDictionary, NSOrderedSet, NSString;

@interface SBPlatformController : NSObject
{
    long long _defaultIconInfoOnce;
    NSDictionary *_defaultStarkIconState;
    NSDictionary *_defaultIconState;
    NSOrderedSet *_defaultIconStateDisplayIdentifiers;
    NSString *_localizedDeviceName;
    _Bool _hasGasGauge;
    _Bool _supportsOpenGLES2;
    _Bool _internalInstall;
    _Bool _carrierInstall;
    _Bool _singleCoreDevice;
    _Bool _isH4Device;
    _Bool _starkDevice;
    _Bool _medusaDevice;
    _Bool _supportsAllMedusaFeatures;
}

+ (id)sharedInstance;
- (void)_loadDefaultIconInfoIfNecessary;
- (_Bool)supportsAllMedusaFeatures;
- (_Bool)isMedusaDevice;
- (_Bool)isStarkDevice;
- (_Bool)isH4Device;
- (_Bool)isSingleCoreDevice;
- (_Bool)isDeveloperInstall;
- (_Bool)isCarrierInstall;
- (_Bool)isInternalInstall;
- (_Bool)supportsOpenGLES2;
- (_Bool)hasGasGauge;
- (id)localizedPlatformName;
- (id)defaultIconStateDisplayIdentifiers;
- (id)defaultStarkIconState;
- (id)defaultIconState;
- (id)uniqueDeviceIdentifier;
- (id)deviceClass;
- (id)productType;
- (id)hardwareModel;
- (id)systemBuildVersion;
- (id)init;

@end

