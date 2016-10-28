//
//  NSPersonNameComponents+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSPersonNameComponents+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSPersonNameComponents (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSPersonNameComponents, NSPersonNameComponents *);
TF_EC_MINSTANCE_IMP(NSPersonNameComponents, NSPersonNameComponents *);


TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,NSString *,namePrefix)
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,NSString *,givenName)
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,NSString *,middleName)
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,NSString *,familyName)
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,NSString *,nameSuffix)
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,NSString *,nickname)
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,NSPersonNameComponents *,phoneticRepresentation)

@end