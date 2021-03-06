/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBIntentResponse : PBCodable <NSCopying> {
    _INPBIntentResponsePayloadFailure * _PayloadFailure;
    _INPBIntentResponsePayloadSuccess * _PayloadSuccess;
    struct { 
        unsigned int type : 1; 
    }  _has;
    int  _type;
    PBUnknownFields * _unknownFields;
    _INPBUserActivity * _userActivity;
}

@property (nonatomic, retain) _INPBIntentResponsePayloadFailure *PayloadFailure;
@property (nonatomic, retain) _INPBIntentResponsePayloadSuccess *PayloadSuccess;
@property (nonatomic, readonly) bool hasPayloadFailure;
@property (nonatomic, readonly) bool hasPayloadSuccess;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasUserActivity;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBUserActivity *userActivity;

+ (id)options;

- (void).cxx_destruct;
- (id)PayloadFailure;
- (id)PayloadSuccess;
- (int)StringAsType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPayloadFailure;
- (bool)hasPayloadSuccess;
- (bool)hasType;
- (bool)hasUserActivity;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setPayloadFailure:(id)arg1;
- (void)setPayloadSuccess:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUserActivity:(id)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (id)userActivity;
- (void)writeTo:(id)arg1;

@end
