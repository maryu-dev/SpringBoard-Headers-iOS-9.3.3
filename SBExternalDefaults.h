
#import "SBAbstractDefaults.h"

@class SBExternalBluetoothDefaults, SBExternalCarrierDefaults, SBExternalDemoDefaults, SBExternalDuetDefaults, SBExternalGlobalDefaults, SBExternalOperatorDefaults, SBExternalPhoneDefaults, SBExternalSMSDefaults, SBExternalSettingsDefaults, SBExternalSetupDefaults, SBExternalSoundsDefaults, SBExternalUIKitDefaults, SBExternalWifiDefaults;

@interface SBExternalDefaults : SBAbstractDefaults
{
    SBExternalGlobalDefaults *_lazy_globalDefaults;
    SBExternalCarrierDefaults *_lazy_carrierDefaults;
    SBExternalOperatorDefaults *_lazy_operatorDefaults;
    SBExternalUIKitDefaults *_lazy_uikitDefaults;
    SBExternalBluetoothDefaults *_lazy_bluetoothDefaults;
    SBExternalDuetDefaults *_lazy_duetDefaults;
    SBExternalDemoDefaults *_lazy_demoDefaults;
    SBExternalSetupDefaults *_lazy_setupDefaults;
    SBExternalSettingsDefaults *_lazy_settingsDefaults;
    SBExternalSMSDefaults *_lazy_smsDefaults;
    SBExternalPhoneDefaults *_lazy_phoneDefaults;
    SBExternalWifiDefaults *_lazy_networkDefaults;
    SBExternalSoundsDefaults *_lazy_soundDefaults;
    SBExternalGlobalDefaults *_lazyglobalDefaults;
    SBExternalCarrierDefaults *_lazycarrierDefaults;
    SBExternalOperatorDefaults *_lazyoperatorDefaults;
    SBExternalUIKitDefaults *_lazyuikitDefaults;
    SBExternalBluetoothDefaults *_lazybluetoothDefaults;
    SBExternalDuetDefaults *_lazyduetDefaults;
    SBExternalDemoDefaults *_lazydemoDefaults;
    SBExternalSetupDefaults *_lazysetupDefaults;
    SBExternalSettingsDefaults *_lazysettingsDefaults;
    SBExternalSMSDefaults *_lazysmsDefaults;
    SBExternalPhoneDefaults *_lazyphoneDefaults;
    SBExternalWifiDefaults *_lazynetworkDefaults;
    SBExternalSoundsDefaults *_lazysoundDefaults;
}


@end

