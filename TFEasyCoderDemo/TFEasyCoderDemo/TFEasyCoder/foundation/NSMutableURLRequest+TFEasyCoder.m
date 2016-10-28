//
//  NSMutableURLRequest+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSMutableURLRequest+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSMutableURLRequest (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSMutableURLRequest, NSMutableURLRequest *);
TF_EC_MINSTANCE_IMP(NSMutableURLRequest, NSMutableURLRequest *);


TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,NSString *,HTTPMethod)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,NSDictionary *,allHTTPHeaderFields)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,NSData *,HTTPBody)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,NSInputStream *,HTTPBodyStream)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,BOOL,HTTPShouldHandleCookies)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,BOOL,HTTPShouldUsePipelining)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,unsigned long long,cachePolicy)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,double,timeoutInterval)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,unsigned long long,networkServiceType)
TF_EC_CHAIN_PROP_IMP(NSMutableURLRequest ,BOOL,allowsCellularAccess)

@end