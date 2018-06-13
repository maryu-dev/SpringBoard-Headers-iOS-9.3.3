
#import "NSObject.h"

#import "SBStarkSessionConfiguring.h"

@class AVExternalDevice, CRVehicleInformation, FBSDisplay, NSSet, NSString, UIScreen, UITraitCollection;

@interface SBStarkSessionConfiguration : NSObject <SBStarkSessionConfiguring>
{
    CRVehicleInformation *_vehicleInformation;
    AVExternalDevice *_device;
    unsigned long long _interactionAffordances;
    long long _layoutJustification;
    FBSDisplay *_display;
    UIScreen *_screen;
    double _screenScale;
    UITraitCollection *_traitCollection;
    _Bool _connectedWirelessly;
    _Bool _geoSupported;
    _Bool _knownVehicle;
    _Bool _OEMIconVisible;
    _Bool _pairedVehicle;
    NSSet *_protocols;
    _Bool _acBackSupported;
}

+ (id)configurationForSettingsLayout;
@property(copy, nonatomic) NSSet *sessionProtocols;
@property(nonatomic, getter=isPairedVehicle) _Bool pairedVehicle;
@property(nonatomic, getter=isKnownVehicle) _Bool knownVehicle;
@property(nonatomic, getter=isGeoSupported) _Bool geoSupported;
@property(readonly, nonatomic, getter=isOEMIconVisible) _Bool OEMIconVisible;
@property(readonly, nonatomic, getter=isConnectedWirelessly) _Bool connectedWirelessly;
@property(readonly, nonatomic, getter=isAmbientBrightnessNighttime) _Bool ambientBrightnessNighttime;
@property(readonly, copy, nonatomic) UITraitCollection *traitCollection;
@property(readonly, nonatomic) double screenScale;
@property(readonly, nonatomic) UIScreen *screen;
@property(readonly, nonatomic) FBSDisplay *display;
@property(readonly, nonatomic) long long layoutJustification;
@property(readonly, nonatomic) unsigned long long interactionAffordances;
@property(readonly, nonatomic) AVExternalDevice *device;
- (id)_init;
- (id)initWithVehicleInformation:(id)arg1 device:(id)arg2 screen:(id)arg3;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

