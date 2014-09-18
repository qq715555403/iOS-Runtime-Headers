/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class NSArray, NSString, NSURL;

@interface ADAdImpressionPublicAttributes : NSObject <NSSecureCoding> {
    NSString *_accessibilityLabel;
    int _action;
    unsigned long long _actionViewControllerPresentationOrientationMask;
    NSURL *_audioURL;
    NSString *_descriptionForLCD;
    NSString *_headlineForLCD;
    NSURL *_logoImageURL;
    double _minimumIntervalBetweenPresentations;
    long long _modalPresentationStyle;
    double _skipThreshold;
    NSURL *_staticImageURL;
    NSString *_uniqueIdentifier;
    NSArray *_videoAssets;
    bool_actionLeavesApplication;
    bool_actionViewControllerHidesStatusBar;
    bool_unbranded;
}

@property(copy) NSString * accessibilityLabel;
@property int action;
@property bool actionLeavesApplication;
@property bool actionViewControllerHidesStatusBar;
@property unsigned long long actionViewControllerPresentationOrientationMask;
@property(retain) NSURL * audioURL;
@property(copy) NSString * descriptionForLCD;
@property(copy) NSString * headlineForLCD;
@property(retain) NSURL * logoImageURL;
@property double minimumIntervalBetweenPresentations;
@property long long modalPresentationStyle;
@property double skipThreshold;
@property(retain) NSURL * staticImageURL;
@property bool unbranded;
@property(copy) NSString * uniqueIdentifier;
@property(retain) NSArray * videoAssets;

+ (bool)supportsSecureCoding;

- (id)_actionDescription;
- (id)accessibilityLabel;
- (int)action;
- (bool)actionLeavesApplication;
- (bool)actionViewControllerHidesStatusBar;
- (unsigned long long)actionViewControllerPresentationOrientationMask;
- (id)audioURL;
- (void)dealloc;
- (id)description;
- (id)descriptionForLCD;
- (void)encodeWithCoder:(id)arg1;
- (id)headlineForLCD;
- (id)initWithCoder:(id)arg1;
- (id)logoImageURL;
- (double)minimumIntervalBetweenPresentations;
- (long long)modalPresentationStyle;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAction:(int)arg1;
- (void)setActionLeavesApplication:(bool)arg1;
- (void)setActionViewControllerHidesStatusBar:(bool)arg1;
- (void)setActionViewControllerPresentationOrientationMask:(unsigned long long)arg1;
- (void)setAudioURL:(id)arg1;
- (void)setDescriptionForLCD:(id)arg1;
- (void)setHeadlineForLCD:(id)arg1;
- (void)setLogoImageURL:(id)arg1;
- (void)setMinimumIntervalBetweenPresentations:(double)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setSkipThreshold:(double)arg1;
- (void)setStaticImageURL:(id)arg1;
- (void)setUnbranded:(bool)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setVideoAssets:(id)arg1;
- (double)skipThreshold;
- (id)staticImageURL;
- (bool)unbranded;
- (id)uniqueIdentifier;
- (id)videoAssets;

@end