
#import "_UISettings.h"

@class SBAnimationSettings;

@interface SBAppSwitcherSettings : _UISettings
{
    _Bool _clipStatusBarArea;
    _Bool _useTitleOpacityPrototypeSettings;
    _Bool _useOrbGesture;
    _Bool _forceDrivesInitialProgress;
    _Bool _playInitialHaptic;
    _Bool _playCommitHaptic;
    _Bool _canPop;
    long long _switcherStyle;
    long long _deckSwitcherForegroundWallpaperStyle;
    long long _deckSwitcherBackgroundWallpaperStyle;
    double _deckSwitcherForegroundDarkeningFactor;
    double _deckSwitcherBackgroundDarkeningFactor;
    double _deckSwitcherForegroundSaturationDeltaFactor;
    double _deckSwitcherBackgroundSaturationDeltaFactor;
    double _deckSwitcherForegroundBlurRadius;
    double _deckSwitcherBackgroundBlurRadius;
    double _aExpLayoutCoeff;
    double _bExpLayoutCoeff;
    double _depthPadding;
    double _titleOpacityACoeff;
    double _titleOpacityBCoeff;
    double _titleOpacityCCoeff;
    double _titleOpacityDCoeff;
    double _insertMass;
    double _insertStiffness;
    double _insertDamping;
    double _translateProgress;
    double _minTranslation;
    double _maxPopTranslation;
    double _commitToNextAppTranslation;
    double _nextAppPopScale;
    double _orbGestureRegionMax;
    double _panHysteresis;
    double _dismissAnimationMass;
    double _dismissAnimationStiffness;
    double _dismissAnimationDamping;
    double _dismissAnimationEpsilon;
    double _presentAnimationMass;
    double _presentAnimationStiffness;
    double _presentAnimationDamping;
    double _additionalThrowDisplacement;
    long long _simplicityOptions;
    SBAnimationSettings *_dosidoAnimationSettings;
}

+ (id)settingsControllerModule;
- (_Bool)shouldSimplifyForOptions:(long long)arg1;
- (void)setDefaultValues;

@end

