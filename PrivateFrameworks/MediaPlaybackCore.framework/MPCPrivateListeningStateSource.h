/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPrivateListeningStateSource : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _currentValue;
}

@property (nonatomic, readonly, copy) NSNumber *currentValue;

+ (id)localDeviceSource;
+ (id)staticSourceWithValue:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
