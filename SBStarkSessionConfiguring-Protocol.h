
#import "NSObject.h"

@class AVExternalDevice, FBSDisplay, NSSet, UIScreen, UITraitCollection;

@protocol SBStarkSessionConfiguring <NSObject>
@property(readonly, copy, nonatomic) NSSet *sessionProtocols;
@property(readonly, nonatomic, getter=isPairedVehicle) _Bool pairedVehicle;
@property(readonly, nonatomic, getter=isOEMIconVisible) _Bool OEMIconVisible;
@property(readonly, nonatomic, getter=isKnownVehicle) _Bool knownVehicle;
@property(readonly, nonatomic, getter=isGeoSupported) _Bool geoSupported;
@property(readonly, nonatomic, getter=isConnectedWirelessly) _Bool connectedWirelessly;
@property(readonly, nonatomic, getter=isAmbientBrightnessNighttime) _Bool ambientBrightnessNighttime;
@property(readonly, nonatomic, getter=isACBackSupported) _Bool acBackSupported;
@property(readonly, copy, nonatomic) UITraitCollection *traitCollection;
@property(readonly, nonatomic) double screenScale;
@property(readonly, nonatomic) UIScreen *screen;
@property(readonly, nonatomic) FBSDisplay *display;
@property(readonly, nonatomic) long long layoutJustification;
@property(readonly, nonatomic) unsigned long long interactionAffordances;
@property(readonly, nonatomic) AVExternalDevice *device;
@end

