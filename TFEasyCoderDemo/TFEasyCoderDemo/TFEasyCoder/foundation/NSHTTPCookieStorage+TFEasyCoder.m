//
//  NSHTTPCookieStorage+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSHTTPCookieStorage+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSHTTPCookieStorage (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSHTTPCookieStorage, NSHTTPCookieStorage *);
TF_EC_MINSTANCE_IMP(NSHTTPCookieStorage, NSHTTPCookieStorage *);


TF_EC_CHAIN_PROP_IMP(NSHTTPCookieStorage ,unsigned long long,cookieAcceptPolicy)

@end