
#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "UIGestureRecognizerDelegate.h"

@class FBSDisplay, NSMutableDictionary, NSMutableSet, NSSet, NSString, UIGestureRecognizer;

@interface SBSystemGestureManager : NSObject <UIGestureRecognizerDelegate, BSDescriptionProviding>
{
    FBSDisplay *_display;
    NSMutableDictionary *_typeToGesture;
    NSMutableDictionary *_typeToState;
    NSMutableSet *_recognizingGestures;
    NSSet *_gesturesPreventedByStylus;
    UIGestureRecognizer *_stylusPriorityRecognizer;
    _Bool _systemGesturesDisabledForAccessibility;
}

+ (id)mainDisplayManager;
- (void)_systemGestureChanged:(id)arg1;
- (void)_disableSystemGesture:(id)arg1 withType:(unsigned long long)arg2;
- (void)_enableSystemGesture:(id)arg1 withType:(unsigned long long)arg2;
- (_Bool)_shouldEnableSystemGestureWithType:(unsigned long long)arg1;
- (_Bool)_isGestureWithTypeAllowed:(unsigned long long)arg1;
- (void)_updateUserPreferences;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (_Bool)isGestureWithTypeAllowed:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isAnyGestureRunning) _Bool anyGestureRunning;
@property(readonly, nonatomic) FBSDisplay *display;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)updateUserPreferences;
- (void)removeGestureRecognizer:(id)arg1;
- (void)addGestureRecognizer:(id)arg1 withType:(unsigned long long)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)dealloc;
- (id)initWithDisplay:(id)arg1;
- (id)init;

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

