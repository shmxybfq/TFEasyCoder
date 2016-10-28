//
//  NSURLComponents+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSURLComponents+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSURLComponents (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSURLComponents, NSURLComponents *);
TF_EC_MINSTANCE_IMP(NSURLComponents, NSURLComponents *);


TF_EC_CHAIN_PROP_IMP(NSURLComponents ,NSString *,scheme)
TF_EC_CHAIN_PROP_IMP(NSURLComponents ,NSString *,user)
TF_EC_CHAIN_PROP_IMP(NSURLComponents ,NSString *,password)
TF_EC_CHAIN_PROP_IMP(NSURLComponents ,NSString *,host)
TF_EC_CHAIN_PROP_IMP(NSURLComponents ,NSNumber *,port)
TF_EC_CHAIN_PROP_IMP(NSURLComponents ,NSString *,path)
TF_EC_CHAIN_PROP_IMP(NSURLComponents ,NSString *,query)
TF_EC_CHAIN_PROP_IMP(NSURLComponents ,NSString *,fragment)
TF_EC_CHAIN_PROP_IMP(NSURLComponents ,NSString *,percentEncodedUser)
TF_EC_CHAIN_PROP_IMP(NSURLComponents ,NSString *,percentEncodedPassword)
TF_EC_CHAIN_PROP_IMP(NSURLComponents ,NSString *,percentEncodedHost)
TF_EC_CHAIN_PROP_IMP(NSURLComponents ,NSString *,percentEncodedPath)
TF_EC_CHAIN_PROP_IMP(NSURLComponents ,NSString *,percentEncodedQuery)
TF_EC_CHAIN_PROP_IMP(NSURLComponents ,NSString *,percentEncodedFragment)
TF_EC_CHAIN_PROP_IMP(NSURLComponents ,NSArray *,queryItems)

@end