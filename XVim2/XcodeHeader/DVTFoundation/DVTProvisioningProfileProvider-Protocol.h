//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/NSObject-Protocol.h>

@class DVTFilePath, DVTProvisioningProfile, NSData, NSSet, NSString;

@protocol DVTProvisioningProfileProvider <NSObject>
+ (NSString *)provisioningProfilePathExtension;
@property(readonly, nonatomic) NSSet *supportedPlatforms;
@property(readonly, nonatomic) NSString *identifier;
- (DVTProvisioningProfile *)provisioningProfileFromData:(NSData *)arg1 error:(id *)arg2;
- (DVTProvisioningProfile *)provisioningProfileFromFilePath:(DVTFilePath *)arg1 error:(id *)arg2;
- (id)initWithIdentifier:(NSString *)arg1;
@end

