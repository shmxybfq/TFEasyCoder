//
//  NSURLSessionConfiguration+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSURLSessionConfiguration+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSURLSessionConfiguration (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSURLSessionConfiguration, NSURLSessionConfiguration *);
TF_EC_MINSTANCE_IMP(NSURLSessionConfiguration, NSURLSessionConfiguration *);


TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,unsigned long long,requestCachePolicy)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,double,timeoutIntervalForRequest)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,double,timeoutIntervalForResource)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,unsigned long long,networkServiceType)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,BOOL,allowsCellularAccess)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,BOOL,discretionary)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,NSString *,sharedContainerIdentifier)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,BOOL,sessionSendsLaunchEvents)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,NSDictionary *,connectionProxyDictionary)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,int,TLSMinimumSupportedProtocol)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,int,TLSMaximumSupportedProtocol)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,BOOL,HTTPShouldUsePipelining)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,BOOL,HTTPShouldSetCookies)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,unsigned long long,HTTPCookieAcceptPolicy)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,NSDictionary *,HTTPAdditionalHeaders)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,long long,HTTPMaximumConnectionsPerHost)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,NSHTTPCookieStorage *,HTTPCookieStorage)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,BOOL,shouldUseExtendedBackgroundIdleMode)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,NSArray *,protocolClasses)


@end